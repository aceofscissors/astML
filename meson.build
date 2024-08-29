project('astML', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3', 'cpp_std=c++23']
)

add_project_link_arguments('-lstdc++exp', '-lstdc++exp', language: 'cpp')

app_deps = [
]

app_includes = [
  include_directories('include')
]

app_sources = [
  'source/app/app.cc',
]

app = library('astML',
  app_sources,
  install: true,
  include_directories: [app_includes],
  dependencies: [app_deps]
)

exe = executable(
  'astml',
  'source/main.cc',
  include_directories: [app_includes],
  dependencies: [app_deps],
  install: true,
  link_with: [app]
)
