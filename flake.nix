{
  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixos-unstable";
  };
  
  outputs = { self, nixpkgs, ... }: let
    systems = [ "x86_64-linux" "aarch64" ];

    forEachSystem = f: with nixpkgs.lib; foldAttrs mergeAttrs {}
      (lists.forEach systems (system:
        mapAttrs (name: value: { ${system} = value; }) (f system)
      ));
  in forEachSystem (system: let
    pkgs = nixpkgs.legacyPackages.${system};
  in rec {
    devShells.default = pkgs.mkShell {
      packages = with pkgs; [
        gdb
      ];

      inputsFrom = [
        packages.default
      ];
    };

    packages.default = let
      gcc = pkgs.gcc14;
      
      meson-options = "-Dgoogletest_dir=${pkgs.fetchzip {
        url = "https://github.com/google/googletest/archive/e2239ee6043f73722e7aa812a459f54a28552929.zip";
        hash = "sha256-SjlJxushfry13RGA7BCjYC9oZqV4z6x8dOiHfl/wpF0=";
      }}";
      
    in pkgs.stdenv.mkDerivation {
      name  = "astML";
      pname = "astml";

      src = ./.;

      nativeBuildInputs = [ gcc ] ++ (with pkgs; [
        meson
        ninja
        cmake

        ccache
        
        boost
        antlr
      ]);

      configurePhase = "CC=${gcc}/bin/gcc CXX=${gcc}/bin/g++ meson setup ${meson-options} ${./.} build";
      
      buildPhase = "ninja -C build";
      
      installPhase = "mkdir -p $out/bin && mv ./build/astml $out/bin/";
    };
  });
}
