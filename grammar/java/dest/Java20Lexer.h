
// Generated from ./Java20Lexer.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  Java20Lexer : public antlr4::Lexer {
public:
  enum {
    EXPORTS = 1, MODULE = 2, NONSEALED = 3, OACA = 4, OPEN = 5, OPENS = 6, 
    PERMITS = 7, PROVIDES = 8, RECORD = 9, REQUIRES = 10, SEALED = 11, TO = 12, 
    TRANSITIVE = 13, USES = 14, VAR = 15, WITH = 16, YIELD = 17, ABSTRACT = 18, 
    ASSERT = 19, BOOLEAN = 20, BREAK = 21, BYTE = 22, CASE = 23, CATCH = 24, 
    CHAR = 25, CLASS = 26, CONST = 27, CONTINUE = 28, DEFAULT = 29, DO = 30, 
    DOUBLE = 31, ELSE = 32, ENUM = 33, EXTENDS = 34, FINAL = 35, FINALLY = 36, 
    FLOAT = 37, FOR = 38, IF = 39, GOTO = 40, IMPLEMENTS = 41, IMPORT = 42, 
    INSTANCEOF = 43, INT = 44, INTERFACE = 45, LONG = 46, NATIVE = 47, NEW = 48, 
    PACKAGE = 49, PRIVATE = 50, PROTECTED = 51, PUBLIC = 52, RETURN = 53, 
    SHORT = 54, STATIC = 55, STRICTFP = 56, SUPER = 57, SWITCH = 58, SYNCHRONIZED = 59, 
    THIS = 60, THROW = 61, THROWS = 62, TRANSIENT = 63, TRY = 64, VOID = 65, 
    VOLATILE = 66, WHILE = 67, UNDER_SCORE = 68, IntegerLiteral = 69, FloatingPointLiteral = 70, 
    BooleanLiteral = 71, CharacterLiteral = 72, StringLiteral = 73, TextBlock = 74, 
    NullLiteral = 75, LPAREN = 76, RPAREN = 77, LBRACE = 78, RBRACE = 79, 
    LBRACK = 80, RBRACK = 81, SEMI = 82, COMMA = 83, DOT = 84, ELLIPSIS = 85, 
    AT = 86, COLONCOLON = 87, ASSIGN = 88, GT = 89, LT = 90, BANG = 91, 
    TILDE = 92, QUESTION = 93, COLON = 94, ARROW = 95, EQUAL = 96, LE = 97, 
    GE = 98, NOTEQUAL = 99, AND = 100, OR = 101, INC = 102, DEC = 103, ADD = 104, 
    SUB = 105, MUL = 106, DIV = 107, BITAND = 108, BITOR = 109, CARET = 110, 
    MOD = 111, ADD_ASSIGN = 112, SUB_ASSIGN = 113, MUL_ASSIGN = 114, DIV_ASSIGN = 115, 
    AND_ASSIGN = 116, OR_ASSIGN = 117, XOR_ASSIGN = 118, MOD_ASSIGN = 119, 
    LSHIFT_ASSIGN = 120, RSHIFT_ASSIGN = 121, URSHIFT_ASSIGN = 122, Identifier = 123, 
    WS = 124, COMMENT = 125, LINE_COMMENT = 126
  };

  explicit Java20Lexer(antlr4::CharStream *input);

  ~Java20Lexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

