project('astML', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3', 'cpp_std=c++23']
)

add_project_link_arguments('-lstdc++exp', '-lstdc++exp', language: 'cpp')


parser_inputs = files(
  'grammar/typescript/TypeScriptLexer.g4',
  'grammar/typescript/TypeScriptParser.g4'
)

parser_cxx_outputs = [
  'TypeScriptLexer.h',
  'TypeScriptLexer.cpp',
  'TypeScriptParser.h',
  'TypeScriptParser.cpp'
]

parser_outputs = [
  'TypeScriptLexer.interp',
  'TypeScriptLexer.tokens'
]
parser_outputs += parser_cxx_outputs

gen_parsers = custom_target(
  'parsers',
  input: parser_inputs,
  output: parser_outputs,
  command: [
    find_program('antlr4'),
    '@INPUT@',
    '-o', '.',
    '-no-listener',
    '-Dlanguage=Cpp',
    '-visitor',
    '-Xexact-output-dir'
  ]
)


cmake = import('cmake')
antlr4_proj = cmake.subproject('antlr4_CppRuntime')

pugixml_proj = cmake.subproject('pugixml')

app_includes = [
  include_directories('include')
]

app_deps = [
  antlr4_proj.dependency('antlr4_shared'),
  pugixml_proj.dependency('pugixml')
]


parsers = static_library(
  'parsers',
  [gen_parsers],
  include_directories: [app_includes],
  dependencies: [app_deps]
)


astmlib_sources = [
  'source/astml_doc.cc',
  'source/runner.cc'
]


astmlib = library(
  'astML',
  astmlib_sources,
  install: true,
  include_directories: [app_includes],
  dependencies: [app_deps],
  link_with: [parsers]
)

astmlib_dep = declare_dependency(
  include_directories: [app_includes],
  link_with: [astmlib]
)


app_sources = [
  'source/app/app.cc',
]

app = library('app',
  app_sources,
  install: true,
  include_directories: [app_includes],
  dependencies: [app_deps],
  link_with: [parsers, astmlib]
)

exe = executable(
  'astml',
  'source/main.cc',
  include_directories: [app_includes],
  dependencies: [app_deps],
  install: true,
  link_with: [app]
)
