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
    in pkgs.stdenv.mkDerivation {
      name  = "astML";

      src = ./.;

      nativeBuildInputs = [ gcc ] ++ (with pkgs; [
        meson
        ninja
        cmake

        ccache
        
        boost
        antlr
      ]);

      configurePhase = "CC=${gcc}/bin/gcc CXX=${gcc}/bin/g++ meson setup ${./.} build";
      
      buildPhase = "ninja -C build";
      
      installPhase = "mkdir -p $out/bin && mv ./build/astml $out/bin/";
    };
  });
}
