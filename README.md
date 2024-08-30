# astML

> Still WIP.

XML markup for source code.

## Building

First, generate build files with

```
meson setup build
```

(note that the build folder needs to be named `build`, necessarily)

then, build the project

```
ninja -C build
```

## Including astML library in your meson project

Clone this repository as a subproject:

```
mkdir -v subprojects && cd subprojects
git clone --recursive https://github.com/neonredtech/astML

# or

git submodule init
mkdir -v subprojects && cd subprojects
git submodule add https://github.com/neonredtech/astML
```

Add the following to your `meson.build`:

```
astml_proj = subproject('astML')
astmlib_dep = astml_proj.get_variable('astmlib_dep')
```

and then add `astmlib_dep` to your executable/library `dependencies` list.
