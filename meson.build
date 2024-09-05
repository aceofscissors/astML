project('astML', 'cpp',
  version : '0.1',
  default_options : ['warning_level=3', 'cpp_std=c++23']
)

add_project_link_arguments('-lstdc++exp', '-lstdc++exp', language: 'cpp')


parser_inputs = files(
  'grammar/typescript/TypeScriptLexer.g4',
  'grammar/typescript/TypeScriptParser.g4',

  'grammar/java/Java20Lexer.g4',
  'grammar/java/Java20Parser.g4'
)

parser_cxx_outputs = [
  'TypeScriptLexer.h',
  'TypeScriptLexer.cpp',
  'TypeScriptParser.h',
  'TypeScriptParser.cpp',

  'Java20Lexer.cpp',
  'Java20Lexer.h',
  'Java20ParserBaseVisitor.cpp',
  'Java20ParserBaseVisitor.h',
  'Java20Parser.cpp',
  'Java20Parser.h',
  'Java20ParserVisitor.cpp',
  'Java20ParserVisitor.h'
]

parser_outputs = [
  'TypeScriptLexer.interp',
  'TypeScriptLexer.tokens',

  'Java20Lexer.interp',
  'Java20Lexer.tokens',

  'Java20Parser.interp',
  'Java20Parser.tokens'
]
parser_outputs += parser_cxx_outputs

gen_parsers = custom_target(
  'parsers',
  input: parser_inputs,
  output: parser_outputs,
  build_by_default: true,
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

antlr4_opts = cmake.subproject_options()

if get_option('googletest_dir') != ''
   antlr4_opts.add_cmake_defines({'FETCHCONTENT_SOURCE_DIR_GOOGLETEST': get_option('googletest_dir')})
endif

antlr4_proj = cmake.subproject('antlr4_CppRuntime', options: antlr4_opts)

pugixml_proj = cmake.subproject('pugixml')

app_includes = [
  include_directories('include'),
  include_directories('.')
]

app_deps = [
  antlr4_proj.dependency('antlr4_static'),
  pugixml_proj.dependency('pugixml-static')
]


parsers = static_library(
  'parsers',
  [gen_parsers],
  include_directories: [app_includes],
  dependencies: [app_deps]
)

parsers_dep = declare_dependency(
  sources: [gen_parsers],
  link_with: [parsers]
)


astmlib_sources = [
  'source/astml_doc.cc',
  'source/runner.cc',
  'source/lexing/typescript_lexer_base.cc',
  'source/parsing/typescript_parser_base.cc'
]


astmlib = static_library(
  'astML',
  astmlib_sources,
  install: true,
  include_directories: [app_includes],
  dependencies: [app_deps, parsers_dep],
  link_with: [parsers]
)

astmlib_dep = declare_dependency(
  include_directories: [app_includes],
  link_with: [astmlib],
  dependencies: [parsers_dep]
)


app_sources = [
  'source/app/app.cc',
]

app = static_library('app',
  app_sources,
  install: true,
  include_directories: [app_includes],
  dependencies: [app_deps, astmlib_dep, parsers_dep]
)

exe = executable(
  'astml',
  'source/main.cc',
  include_directories: [app_includes],
  dependencies: [app_deps, parsers_dep],
  install: true,
  link_with: [app]
)
