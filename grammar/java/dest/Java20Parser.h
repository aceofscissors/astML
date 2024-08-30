
// Generated from ./Java20Parser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  Java20Parser : public antlr4::Parser {
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

  enum {
    RuleStart_ = 0, RuleLiteral = 1, RuleTypeIdentifier = 2, RuleUnqualifiedMethodIdentifier = 3, 
    RulePrimitiveType = 4, RuleNumericType = 5, RuleIntegralType = 6, RuleFloatingPointType = 7, 
    RuleReferenceType = 8, RuleCoit = 9, RuleClassOrInterfaceType = 10, 
    RuleClassType = 11, RuleInterfaceType = 12, RuleTypeVariable = 13, RuleArrayType = 14, 
    RuleDims = 15, RuleTypeParameter = 16, RuleTypeParameterModifier = 17, 
    RuleTypeBound = 18, RuleAdditionalBound = 19, RuleTypeArguments = 20, 
    RuleTypeArgumentList = 21, RuleTypeArgument = 22, RuleWildcard = 23, 
    RuleWildcardBounds = 24, RuleModuleName = 25, RulePackageName = 26, 
    RuleTypeName = 27, RulePackageOrTypeName = 28, RuleExpressionName = 29, 
    RuleMethodName = 30, RuleAmbiguousName = 31, RuleCompilationUnit = 32, 
    RuleOrdinaryCompilationUnit = 33, RuleModularCompilationUnit = 34, RulePackageDeclaration = 35, 
    RulePackageModifier = 36, RuleImportDeclaration = 37, RuleSingleTypeImportDeclaration = 38, 
    RuleTypeImportOnDemandDeclaration = 39, RuleSingleStaticImportDeclaration = 40, 
    RuleStaticImportOnDemandDeclaration = 41, RuleTopLevelClassOrInterfaceDeclaration = 42, 
    RuleModuleDeclaration = 43, RuleModuleDirective = 44, RuleRequiresModifier = 45, 
    RuleClassDeclaration = 46, RuleNormalClassDeclaration = 47, RuleClassModifier = 48, 
    RuleTypeParameters = 49, RuleTypeParameterList = 50, RuleClassExtends = 51, 
    RuleClassImplements = 52, RuleInterfaceTypeList = 53, RuleClassPermits = 54, 
    RuleClassBody = 55, RuleClassBodyDeclaration = 56, RuleClassMemberDeclaration = 57, 
    RuleFieldDeclaration = 58, RuleFieldModifier = 59, RuleVariableDeclaratorList = 60, 
    RuleVariableDeclarator = 61, RuleVariableDeclaratorId = 62, RuleVariableInitializer = 63, 
    RuleUnannType = 64, RuleUnannPrimitiveType = 65, RuleUnannReferenceType = 66, 
    RuleUnannClassOrInterfaceType = 67, RuleUCOIT = 68, RuleUnannClassType = 69, 
    RuleUnannInterfaceType = 70, RuleUnannTypeVariable = 71, RuleUnannArrayType = 72, 
    RuleMethodDeclaration = 73, RuleMethodModifier = 74, RuleMethodHeader = 75, 
    RuleResult = 76, RuleMethodDeclarator = 77, RuleReceiverParameter = 78, 
    RuleFormalParameterList = 79, RuleFormalParameter = 80, RuleVariableArityParameter = 81, 
    RuleVariableModifier = 82, RuleThrowsT = 83, RuleExceptionTypeList = 84, 
    RuleExceptionType = 85, RuleMethodBody = 86, RuleInstanceInitializer = 87, 
    RuleStaticInitializer = 88, RuleConstructorDeclaration = 89, RuleConstructorModifier = 90, 
    RuleConstructorDeclarator = 91, RuleSimpleTypeName = 92, RuleConstructorBody = 93, 
    RuleExplicitConstructorInvocation = 94, RuleEnumDeclaration = 95, RuleEnumBody = 96, 
    RuleEnumConstantList = 97, RuleEnumConstant = 98, RuleEnumConstantModifier = 99, 
    RuleEnumBodyDeclarations = 100, RuleRecordDeclaration = 101, RuleRecordHeader = 102, 
    RuleRecordComponentList = 103, RuleRecordComponent = 104, RuleVariableArityRecordComponent = 105, 
    RuleRecordComponentModifier = 106, RuleRecordBody = 107, RuleRecordBodyDeclaration = 108, 
    RuleCompactConstructorDeclaration = 109, RuleInterfaceDeclaration = 110, 
    RuleNormalInterfaceDeclaration = 111, RuleInterfaceModifier = 112, RuleInterfaceExtends = 113, 
    RuleInterfacePermits = 114, RuleInterfaceBody = 115, RuleInterfaceMemberDeclaration = 116, 
    RuleConstantDeclaration = 117, RuleConstantModifier = 118, RuleInterfaceMethodDeclaration = 119, 
    RuleInterfaceMethodModifier = 120, RuleAnnotationInterfaceDeclaration = 121, 
    RuleAnnotationInterfaceBody = 122, RuleAnnotationInterfaceMemberDeclaration = 123, 
    RuleAnnotationInterfaceElementDeclaration = 124, RuleAnnotationInterfaceElementModifier = 125, 
    RuleDefaultValue = 126, RuleAnnotation = 127, RuleNormalAnnotation = 128, 
    RuleElementValuePairList = 129, RuleElementValuePair = 130, RuleElementValue = 131, 
    RuleElementValueArrayInitializer = 132, RuleElementValueList = 133, 
    RuleMarkerAnnotation = 134, RuleSingleElementAnnotation = 135, RuleArrayInitializer = 136, 
    RuleVariableInitializerList = 137, RuleBlock = 138, RuleBlockStatements = 139, 
    RuleBlockStatement = 140, RuleLocalClassOrInterfaceDeclaration = 141, 
    RuleLocalVariableDeclaration = 142, RuleLocalVariableType = 143, RuleLocalVariableDeclarationStatement = 144, 
    RuleStatement = 145, RuleStatementNoShortIf = 146, RuleStatementWithoutTrailingSubstatement = 147, 
    RuleEmptyStatement_ = 148, RuleLabeledStatement = 149, RuleLabeledStatementNoShortIf = 150, 
    RuleExpressionStatement = 151, RuleStatementExpression = 152, RuleIfThenStatement = 153, 
    RuleIfThenElseStatement = 154, RuleIfThenElseStatementNoShortIf = 155, 
    RuleAssertStatement = 156, RuleSwitchStatement = 157, RuleSwitchBlock = 158, 
    RuleSwitchRule = 159, RuleSwitchBlockStatementGroup = 160, RuleSwitchLabel = 161, 
    RuleCaseConstant = 162, RuleWhileStatement = 163, RuleWhileStatementNoShortIf = 164, 
    RuleDoStatement = 165, RuleForStatement = 166, RuleForStatementNoShortIf = 167, 
    RuleBasicForStatement = 168, RuleBasicForStatementNoShortIf = 169, RuleForInit = 170, 
    RuleForUpdate = 171, RuleStatementExpressionList = 172, RuleEnhancedForStatement = 173, 
    RuleEnhancedForStatementNoShortIf = 174, RuleBreakStatement = 175, RuleContinueStatement = 176, 
    RuleReturnStatement = 177, RuleThrowStatement = 178, RuleSynchronizedStatement = 179, 
    RuleTryStatement = 180, RuleCatches = 181, RuleCatchClause = 182, RuleCatchFormalParameter = 183, 
    RuleCatchType = 184, RuleFinallyBlock = 185, RuleTryWithResourcesStatement = 186, 
    RuleResourceSpecification = 187, RuleResourceList = 188, RuleResource = 189, 
    RuleVariableAccess = 190, RuleYieldStatement = 191, RulePattern = 192, 
    RuleTypePattern = 193, RuleExpression = 194, RulePrimary = 195, RulePrimaryNoNewArray = 196, 
    RulePNNA = 197, RuleClassLiteral = 198, RuleClassInstanceCreationExpression = 199, 
    RuleUnqualifiedClassInstanceCreationExpression = 200, RuleClassOrInterfaceTypeToInstantiate = 201, 
    RuleTypeArgumentsOrDiamond = 202, RuleArrayCreationExpression = 203, 
    RuleArrayCreationExpressionWithoutInitializer = 204, RuleArrayCreationExpressionWithInitializer = 205, 
    RuleDimExprs = 206, RuleDimExpr = 207, RuleArrayAccess = 208, RuleFieldAccess = 209, 
    RuleMethodInvocation = 210, RuleArgumentList = 211, RuleMethodReference = 212, 
    RulePostfixExpression = 213, RulePfE = 214, RulePostIncrementExpression = 215, 
    RulePostDecrementExpression = 216, RuleUnaryExpression = 217, RulePreIncrementExpression = 218, 
    RulePreDecrementExpression = 219, RuleUnaryExpressionNotPlusMinus = 220, 
    RuleCastExpression = 221, RuleMultiplicativeExpression = 222, RuleAdditiveExpression = 223, 
    RuleShiftExpression = 224, RuleRelationalExpression = 225, RuleEqualityExpression = 226, 
    RuleAndExpression = 227, RuleExclusiveOrExpression = 228, RuleInclusiveOrExpression = 229, 
    RuleConditionalAndExpression = 230, RuleConditionalOrExpression = 231, 
    RuleConditionalExpression = 232, RuleAssignmentExpression = 233, RuleAssignment = 234, 
    RuleLeftHandSide = 235, RuleAssignmentOperator = 236, RuleLambdaExpression = 237, 
    RuleLambdaParameters = 238, RuleLambdaParameterList = 239, RuleLambdaParameter = 240, 
    RuleLambdaParameterType = 241, RuleLambdaBody = 242, RuleSwitchExpression = 243, 
    RuleConstantExpression = 244
  };

  explicit Java20Parser(antlr4::TokenStream *input);

  Java20Parser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~Java20Parser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class Start_Context;
  class LiteralContext;
  class TypeIdentifierContext;
  class UnqualifiedMethodIdentifierContext;
  class PrimitiveTypeContext;
  class NumericTypeContext;
  class IntegralTypeContext;
  class FloatingPointTypeContext;
  class ReferenceTypeContext;
  class CoitContext;
  class ClassOrInterfaceTypeContext;
  class ClassTypeContext;
  class InterfaceTypeContext;
  class TypeVariableContext;
  class ArrayTypeContext;
  class DimsContext;
  class TypeParameterContext;
  class TypeParameterModifierContext;
  class TypeBoundContext;
  class AdditionalBoundContext;
  class TypeArgumentsContext;
  class TypeArgumentListContext;
  class TypeArgumentContext;
  class WildcardContext;
  class WildcardBoundsContext;
  class ModuleNameContext;
  class PackageNameContext;
  class TypeNameContext;
  class PackageOrTypeNameContext;
  class ExpressionNameContext;
  class MethodNameContext;
  class AmbiguousNameContext;
  class CompilationUnitContext;
  class OrdinaryCompilationUnitContext;
  class ModularCompilationUnitContext;
  class PackageDeclarationContext;
  class PackageModifierContext;
  class ImportDeclarationContext;
  class SingleTypeImportDeclarationContext;
  class TypeImportOnDemandDeclarationContext;
  class SingleStaticImportDeclarationContext;
  class StaticImportOnDemandDeclarationContext;
  class TopLevelClassOrInterfaceDeclarationContext;
  class ModuleDeclarationContext;
  class ModuleDirectiveContext;
  class RequiresModifierContext;
  class ClassDeclarationContext;
  class NormalClassDeclarationContext;
  class ClassModifierContext;
  class TypeParametersContext;
  class TypeParameterListContext;
  class ClassExtendsContext;
  class ClassImplementsContext;
  class InterfaceTypeListContext;
  class ClassPermitsContext;
  class ClassBodyContext;
  class ClassBodyDeclarationContext;
  class ClassMemberDeclarationContext;
  class FieldDeclarationContext;
  class FieldModifierContext;
  class VariableDeclaratorListContext;
  class VariableDeclaratorContext;
  class VariableDeclaratorIdContext;
  class VariableInitializerContext;
  class UnannTypeContext;
  class UnannPrimitiveTypeContext;
  class UnannReferenceTypeContext;
  class UnannClassOrInterfaceTypeContext;
  class UCOITContext;
  class UnannClassTypeContext;
  class UnannInterfaceTypeContext;
  class UnannTypeVariableContext;
  class UnannArrayTypeContext;
  class MethodDeclarationContext;
  class MethodModifierContext;
  class MethodHeaderContext;
  class ResultContext;
  class MethodDeclaratorContext;
  class ReceiverParameterContext;
  class FormalParameterListContext;
  class FormalParameterContext;
  class VariableArityParameterContext;
  class VariableModifierContext;
  class ThrowsTContext;
  class ExceptionTypeListContext;
  class ExceptionTypeContext;
  class MethodBodyContext;
  class InstanceInitializerContext;
  class StaticInitializerContext;
  class ConstructorDeclarationContext;
  class ConstructorModifierContext;
  class ConstructorDeclaratorContext;
  class SimpleTypeNameContext;
  class ConstructorBodyContext;
  class ExplicitConstructorInvocationContext;
  class EnumDeclarationContext;
  class EnumBodyContext;
  class EnumConstantListContext;
  class EnumConstantContext;
  class EnumConstantModifierContext;
  class EnumBodyDeclarationsContext;
  class RecordDeclarationContext;
  class RecordHeaderContext;
  class RecordComponentListContext;
  class RecordComponentContext;
  class VariableArityRecordComponentContext;
  class RecordComponentModifierContext;
  class RecordBodyContext;
  class RecordBodyDeclarationContext;
  class CompactConstructorDeclarationContext;
  class InterfaceDeclarationContext;
  class NormalInterfaceDeclarationContext;
  class InterfaceModifierContext;
  class InterfaceExtendsContext;
  class InterfacePermitsContext;
  class InterfaceBodyContext;
  class InterfaceMemberDeclarationContext;
  class ConstantDeclarationContext;
  class ConstantModifierContext;
  class InterfaceMethodDeclarationContext;
  class InterfaceMethodModifierContext;
  class AnnotationInterfaceDeclarationContext;
  class AnnotationInterfaceBodyContext;
  class AnnotationInterfaceMemberDeclarationContext;
  class AnnotationInterfaceElementDeclarationContext;
  class AnnotationInterfaceElementModifierContext;
  class DefaultValueContext;
  class AnnotationContext;
  class NormalAnnotationContext;
  class ElementValuePairListContext;
  class ElementValuePairContext;
  class ElementValueContext;
  class ElementValueArrayInitializerContext;
  class ElementValueListContext;
  class MarkerAnnotationContext;
  class SingleElementAnnotationContext;
  class ArrayInitializerContext;
  class VariableInitializerListContext;
  class BlockContext;
  class BlockStatementsContext;
  class BlockStatementContext;
  class LocalClassOrInterfaceDeclarationContext;
  class LocalVariableDeclarationContext;
  class LocalVariableTypeContext;
  class LocalVariableDeclarationStatementContext;
  class StatementContext;
  class StatementNoShortIfContext;
  class StatementWithoutTrailingSubstatementContext;
  class EmptyStatement_Context;
  class LabeledStatementContext;
  class LabeledStatementNoShortIfContext;
  class ExpressionStatementContext;
  class StatementExpressionContext;
  class IfThenStatementContext;
  class IfThenElseStatementContext;
  class IfThenElseStatementNoShortIfContext;
  class AssertStatementContext;
  class SwitchStatementContext;
  class SwitchBlockContext;
  class SwitchRuleContext;
  class SwitchBlockStatementGroupContext;
  class SwitchLabelContext;
  class CaseConstantContext;
  class WhileStatementContext;
  class WhileStatementNoShortIfContext;
  class DoStatementContext;
  class ForStatementContext;
  class ForStatementNoShortIfContext;
  class BasicForStatementContext;
  class BasicForStatementNoShortIfContext;
  class ForInitContext;
  class ForUpdateContext;
  class StatementExpressionListContext;
  class EnhancedForStatementContext;
  class EnhancedForStatementNoShortIfContext;
  class BreakStatementContext;
  class ContinueStatementContext;
  class ReturnStatementContext;
  class ThrowStatementContext;
  class SynchronizedStatementContext;
  class TryStatementContext;
  class CatchesContext;
  class CatchClauseContext;
  class CatchFormalParameterContext;
  class CatchTypeContext;
  class FinallyBlockContext;
  class TryWithResourcesStatementContext;
  class ResourceSpecificationContext;
  class ResourceListContext;
  class ResourceContext;
  class VariableAccessContext;
  class YieldStatementContext;
  class PatternContext;
  class TypePatternContext;
  class ExpressionContext;
  class PrimaryContext;
  class PrimaryNoNewArrayContext;
  class PNNAContext;
  class ClassLiteralContext;
  class ClassInstanceCreationExpressionContext;
  class UnqualifiedClassInstanceCreationExpressionContext;
  class ClassOrInterfaceTypeToInstantiateContext;
  class TypeArgumentsOrDiamondContext;
  class ArrayCreationExpressionContext;
  class ArrayCreationExpressionWithoutInitializerContext;
  class ArrayCreationExpressionWithInitializerContext;
  class DimExprsContext;
  class DimExprContext;
  class ArrayAccessContext;
  class FieldAccessContext;
  class MethodInvocationContext;
  class ArgumentListContext;
  class MethodReferenceContext;
  class PostfixExpressionContext;
  class PfEContext;
  class PostIncrementExpressionContext;
  class PostDecrementExpressionContext;
  class UnaryExpressionContext;
  class PreIncrementExpressionContext;
  class PreDecrementExpressionContext;
  class UnaryExpressionNotPlusMinusContext;
  class CastExpressionContext;
  class MultiplicativeExpressionContext;
  class AdditiveExpressionContext;
  class ShiftExpressionContext;
  class RelationalExpressionContext;
  class EqualityExpressionContext;
  class AndExpressionContext;
  class ExclusiveOrExpressionContext;
  class InclusiveOrExpressionContext;
  class ConditionalAndExpressionContext;
  class ConditionalOrExpressionContext;
  class ConditionalExpressionContext;
  class AssignmentExpressionContext;
  class AssignmentContext;
  class LeftHandSideContext;
  class AssignmentOperatorContext;
  class LambdaExpressionContext;
  class LambdaParametersContext;
  class LambdaParameterListContext;
  class LambdaParameterContext;
  class LambdaParameterTypeContext;
  class LambdaBodyContext;
  class SwitchExpressionContext;
  class ConstantExpressionContext; 

  class  Start_Context : public antlr4::ParserRuleContext {
  public:
    Start_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CompilationUnitContext *compilationUnit();
    antlr4::tree::TerminalNode *EOF();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Start_Context* start_();

  class  LiteralContext : public antlr4::ParserRuleContext {
  public:
    LiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IntegerLiteral();
    antlr4::tree::TerminalNode *FloatingPointLiteral();
    antlr4::tree::TerminalNode *BooleanLiteral();
    antlr4::tree::TerminalNode *CharacterLiteral();
    antlr4::tree::TerminalNode *StringLiteral();
    antlr4::tree::TerminalNode *TextBlock();
    antlr4::tree::TerminalNode *NullLiteral();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LiteralContext* literal();

  class  TypeIdentifierContext : public antlr4::ParserRuleContext {
  public:
    TypeIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeIdentifierContext* typeIdentifier();

  class  UnqualifiedMethodIdentifierContext : public antlr4::ParserRuleContext {
  public:
    UnqualifiedMethodIdentifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnqualifiedMethodIdentifierContext* unqualifiedMethodIdentifier();

  class  PrimitiveTypeContext : public antlr4::ParserRuleContext {
  public:
    PrimitiveTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumericTypeContext *numericType();
    antlr4::tree::TerminalNode *BOOLEAN();
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimitiveTypeContext* primitiveType();

  class  NumericTypeContext : public antlr4::ParserRuleContext {
  public:
    NumericTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    IntegralTypeContext *integralType();
    FloatingPointTypeContext *floatingPointType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NumericTypeContext* numericType();

  class  IntegralTypeContext : public antlr4::ParserRuleContext {
  public:
    IntegralTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BYTE();
    antlr4::tree::TerminalNode *SHORT();
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *LONG();
    antlr4::tree::TerminalNode *CHAR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IntegralTypeContext* integralType();

  class  FloatingPointTypeContext : public antlr4::ParserRuleContext {
  public:
    FloatingPointTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *DOUBLE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FloatingPointTypeContext* floatingPointType();

  class  ReferenceTypeContext : public antlr4::ParserRuleContext {
  public:
    ReferenceTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassOrInterfaceTypeContext *classOrInterfaceType();
    TypeVariableContext *typeVariable();
    ArrayTypeContext *arrayType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReferenceTypeContext* referenceType();

  class  CoitContext : public antlr4::ParserRuleContext {
  public:
    CoitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();
    TypeIdentifierContext *typeIdentifier();
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);
    TypeArgumentsContext *typeArguments();
    CoitContext *coit();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CoitContext* coit();

  class  ClassOrInterfaceTypeContext : public antlr4::ParserRuleContext {
  public:
    ClassOrInterfaceTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeIdentifierContext *typeIdentifier();
    PackageNameContext *packageName();
    antlr4::tree::TerminalNode *DOT();
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);
    TypeArgumentsContext *typeArguments();
    CoitContext *coit();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassOrInterfaceTypeContext* classOrInterfaceType();

  class  ClassTypeContext : public antlr4::ParserRuleContext {
  public:
    ClassTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeIdentifierContext *typeIdentifier();
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);
    TypeArgumentsContext *typeArguments();
    PackageNameContext *packageName();
    antlr4::tree::TerminalNode *DOT();
    ClassOrInterfaceTypeContext *classOrInterfaceType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassTypeContext* classType();

  class  InterfaceTypeContext : public antlr4::ParserRuleContext {
  public:
    InterfaceTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassTypeContext *classType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterfaceTypeContext* interfaceType();

  class  TypeVariableContext : public antlr4::ParserRuleContext {
  public:
    TypeVariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeIdentifierContext *typeIdentifier();
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeVariableContext* typeVariable();

  class  ArrayTypeContext : public antlr4::ParserRuleContext {
  public:
    ArrayTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimitiveTypeContext *primitiveType();
    DimsContext *dims();
    ClassTypeContext *classType();
    TypeVariableContext *typeVariable();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayTypeContext* arrayType();

  class  DimsContext : public antlr4::ParserRuleContext {
  public:
    DimsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> LBRACK();
    antlr4::tree::TerminalNode* LBRACK(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RBRACK();
    antlr4::tree::TerminalNode* RBRACK(size_t i);
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DimsContext* dims();

  class  TypeParameterContext : public antlr4::ParserRuleContext {
  public:
    TypeParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeIdentifierContext *typeIdentifier();
    std::vector<TypeParameterModifierContext *> typeParameterModifier();
    TypeParameterModifierContext* typeParameterModifier(size_t i);
    TypeBoundContext *typeBound();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeParameterContext* typeParameter();

  class  TypeParameterModifierContext : public antlr4::ParserRuleContext {
  public:
    TypeParameterModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AnnotationContext *annotation();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeParameterModifierContext* typeParameterModifier();

  class  TypeBoundContext : public antlr4::ParserRuleContext {
  public:
    TypeBoundContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXTENDS();
    TypeVariableContext *typeVariable();
    ClassOrInterfaceTypeContext *classOrInterfaceType();
    std::vector<AdditionalBoundContext *> additionalBound();
    AdditionalBoundContext* additionalBound(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeBoundContext* typeBound();

  class  AdditionalBoundContext : public antlr4::ParserRuleContext {
  public:
    AdditionalBoundContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BITAND();
    InterfaceTypeContext *interfaceType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AdditionalBoundContext* additionalBound();

  class  TypeArgumentsContext : public antlr4::ParserRuleContext {
  public:
    TypeArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LT();
    TypeArgumentListContext *typeArgumentList();
    antlr4::tree::TerminalNode *GT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeArgumentsContext* typeArguments();

  class  TypeArgumentListContext : public antlr4::ParserRuleContext {
  public:
    TypeArgumentListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeArgumentContext *> typeArgument();
    TypeArgumentContext* typeArgument(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeArgumentListContext* typeArgumentList();

  class  TypeArgumentContext : public antlr4::ParserRuleContext {
  public:
    TypeArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ReferenceTypeContext *referenceType();
    WildcardContext *wildcard();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeArgumentContext* typeArgument();

  class  WildcardContext : public antlr4::ParserRuleContext {
  public:
    WildcardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *QUESTION();
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);
    WildcardBoundsContext *wildcardBounds();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WildcardContext* wildcard();

  class  WildcardBoundsContext : public antlr4::ParserRuleContext {
  public:
    WildcardBoundsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXTENDS();
    ReferenceTypeContext *referenceType();
    antlr4::tree::TerminalNode *SUPER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WildcardBoundsContext* wildcardBounds();

  class  ModuleNameContext : public antlr4::ParserRuleContext {
  public:
    ModuleNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *DOT();
    ModuleNameContext *moduleName();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModuleNameContext* moduleName();

  class  PackageNameContext : public antlr4::ParserRuleContext {
  public:
    PackageNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *DOT();
    PackageNameContext *packageName();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PackageNameContext* packageName();

  class  TypeNameContext : public antlr4::ParserRuleContext {
  public:
    TypeNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PackageNameContext *packageName();
    antlr4::tree::TerminalNode *DOT();
    TypeIdentifierContext *typeIdentifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeNameContext* typeName();

  class  PackageOrTypeNameContext : public antlr4::ParserRuleContext {
  public:
    PackageOrTypeNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *DOT();
    PackageOrTypeNameContext *packageOrTypeName();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PackageOrTypeNameContext* packageOrTypeName();

  class  ExpressionNameContext : public antlr4::ParserRuleContext {
  public:
    ExpressionNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    AmbiguousNameContext *ambiguousName();
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionNameContext* expressionName();

  class  MethodNameContext : public antlr4::ParserRuleContext {
  public:
    MethodNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnqualifiedMethodIdentifierContext *unqualifiedMethodIdentifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MethodNameContext* methodName();

  class  AmbiguousNameContext : public antlr4::ParserRuleContext {
  public:
    AmbiguousNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *DOT();
    AmbiguousNameContext *ambiguousName();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AmbiguousNameContext* ambiguousName();

  class  CompilationUnitContext : public antlr4::ParserRuleContext {
  public:
    CompilationUnitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    OrdinaryCompilationUnitContext *ordinaryCompilationUnit();
    ModularCompilationUnitContext *modularCompilationUnit();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompilationUnitContext* compilationUnit();

  class  OrdinaryCompilationUnitContext : public antlr4::ParserRuleContext {
  public:
    OrdinaryCompilationUnitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PackageDeclarationContext *packageDeclaration();
    std::vector<ImportDeclarationContext *> importDeclaration();
    ImportDeclarationContext* importDeclaration(size_t i);
    std::vector<TopLevelClassOrInterfaceDeclarationContext *> topLevelClassOrInterfaceDeclaration();
    TopLevelClassOrInterfaceDeclarationContext* topLevelClassOrInterfaceDeclaration(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  OrdinaryCompilationUnitContext* ordinaryCompilationUnit();

  class  ModularCompilationUnitContext : public antlr4::ParserRuleContext {
  public:
    ModularCompilationUnitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ModuleDeclarationContext *moduleDeclaration();
    std::vector<ImportDeclarationContext *> importDeclaration();
    ImportDeclarationContext* importDeclaration(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModularCompilationUnitContext* modularCompilationUnit();

  class  PackageDeclarationContext : public antlr4::ParserRuleContext {
  public:
    PackageDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PACKAGE();
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    antlr4::tree::TerminalNode *SEMI();
    std::vector<PackageModifierContext *> packageModifier();
    PackageModifierContext* packageModifier(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PackageDeclarationContext* packageDeclaration();

  class  PackageModifierContext : public antlr4::ParserRuleContext {
  public:
    PackageModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AnnotationContext *annotation();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PackageModifierContext* packageModifier();

  class  ImportDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ImportDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SingleTypeImportDeclarationContext *singleTypeImportDeclaration();
    TypeImportOnDemandDeclarationContext *typeImportOnDemandDeclaration();
    SingleStaticImportDeclarationContext *singleStaticImportDeclaration();
    StaticImportOnDemandDeclarationContext *staticImportOnDemandDeclaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ImportDeclarationContext* importDeclaration();

  class  SingleTypeImportDeclarationContext : public antlr4::ParserRuleContext {
  public:
    SingleTypeImportDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPORT();
    TypeNameContext *typeName();
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SingleTypeImportDeclarationContext* singleTypeImportDeclaration();

  class  TypeImportOnDemandDeclarationContext : public antlr4::ParserRuleContext {
  public:
    TypeImportOnDemandDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPORT();
    PackageOrTypeNameContext *packageOrTypeName();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeImportOnDemandDeclarationContext* typeImportOnDemandDeclaration();

  class  SingleStaticImportDeclarationContext : public antlr4::ParserRuleContext {
  public:
    SingleStaticImportDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPORT();
    antlr4::tree::TerminalNode *STATIC();
    TypeNameContext *typeName();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SingleStaticImportDeclarationContext* singleStaticImportDeclaration();

  class  StaticImportOnDemandDeclarationContext : public antlr4::ParserRuleContext {
  public:
    StaticImportOnDemandDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPORT();
    antlr4::tree::TerminalNode *STATIC();
    TypeNameContext *typeName();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StaticImportOnDemandDeclarationContext* staticImportOnDemandDeclaration();

  class  TopLevelClassOrInterfaceDeclarationContext : public antlr4::ParserRuleContext {
  public:
    TopLevelClassOrInterfaceDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassDeclarationContext *classDeclaration();
    InterfaceDeclarationContext *interfaceDeclaration();
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TopLevelClassOrInterfaceDeclarationContext* topLevelClassOrInterfaceDeclaration();

  class  ModuleDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ModuleDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MODULE();
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);
    antlr4::tree::TerminalNode *OPEN();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    std::vector<ModuleDirectiveContext *> moduleDirective();
    ModuleDirectiveContext* moduleDirective(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModuleDeclarationContext* moduleDeclaration();

  class  ModuleDirectiveContext : public antlr4::ParserRuleContext {
  public:
    ModuleDirectiveContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *REQUIRES();
    std::vector<ModuleNameContext *> moduleName();
    ModuleNameContext* moduleName(size_t i);
    antlr4::tree::TerminalNode *SEMI();
    std::vector<RequiresModifierContext *> requiresModifier();
    RequiresModifierContext* requiresModifier(size_t i);
    antlr4::tree::TerminalNode *EXPORTS();
    PackageNameContext *packageName();
    antlr4::tree::TerminalNode *TO();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *OPENS();
    antlr4::tree::TerminalNode *USES();
    std::vector<TypeNameContext *> typeName();
    TypeNameContext* typeName(size_t i);
    antlr4::tree::TerminalNode *PROVIDES();
    antlr4::tree::TerminalNode *WITH();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ModuleDirectiveContext* moduleDirective();

  class  RequiresModifierContext : public antlr4::ParserRuleContext {
  public:
    RequiresModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRANSITIVE();
    antlr4::tree::TerminalNode *STATIC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RequiresModifierContext* requiresModifier();

  class  ClassDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ClassDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NormalClassDeclarationContext *normalClassDeclaration();
    EnumDeclarationContext *enumDeclaration();
    RecordDeclarationContext *recordDeclaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassDeclarationContext* classDeclaration();

  class  NormalClassDeclarationContext : public antlr4::ParserRuleContext {
  public:
    NormalClassDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CLASS();
    TypeIdentifierContext *typeIdentifier();
    ClassBodyContext *classBody();
    std::vector<ClassModifierContext *> classModifier();
    ClassModifierContext* classModifier(size_t i);
    TypeParametersContext *typeParameters();
    ClassExtendsContext *classExtends();
    ClassImplementsContext *classImplements();
    ClassPermitsContext *classPermits();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NormalClassDeclarationContext* normalClassDeclaration();

  class  ClassModifierContext : public antlr4::ParserRuleContext {
  public:
    ClassModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AnnotationContext *annotation();
    antlr4::tree::TerminalNode *PUBLIC();
    antlr4::tree::TerminalNode *PROTECTED();
    antlr4::tree::TerminalNode *PRIVATE();
    antlr4::tree::TerminalNode *ABSTRACT();
    antlr4::tree::TerminalNode *STATIC();
    antlr4::tree::TerminalNode *FINAL();
    antlr4::tree::TerminalNode *SEALED();
    antlr4::tree::TerminalNode *NONSEALED();
    antlr4::tree::TerminalNode *STRICTFP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassModifierContext* classModifier();

  class  TypeParametersContext : public antlr4::ParserRuleContext {
  public:
    TypeParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LT();
    TypeParameterListContext *typeParameterList();
    antlr4::tree::TerminalNode *GT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeParametersContext* typeParameters();

  class  TypeParameterListContext : public antlr4::ParserRuleContext {
  public:
    TypeParameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<TypeParameterContext *> typeParameter();
    TypeParameterContext* typeParameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeParameterListContext* typeParameterList();

  class  ClassExtendsContext : public antlr4::ParserRuleContext {
  public:
    ClassExtendsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXTENDS();
    ClassTypeContext *classType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassExtendsContext* classExtends();

  class  ClassImplementsContext : public antlr4::ParserRuleContext {
  public:
    ClassImplementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IMPLEMENTS();
    InterfaceTypeListContext *interfaceTypeList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassImplementsContext* classImplements();

  class  InterfaceTypeListContext : public antlr4::ParserRuleContext {
  public:
    InterfaceTypeListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<InterfaceTypeContext *> interfaceType();
    InterfaceTypeContext* interfaceType(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterfaceTypeListContext* interfaceTypeList();

  class  ClassPermitsContext : public antlr4::ParserRuleContext {
  public:
    ClassPermitsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PERMITS();
    std::vector<TypeNameContext *> typeName();
    TypeNameContext* typeName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassPermitsContext* classPermits();

  class  ClassBodyContext : public antlr4::ParserRuleContext {
  public:
    ClassBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<ClassBodyDeclarationContext *> classBodyDeclaration();
    ClassBodyDeclarationContext* classBodyDeclaration(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassBodyContext* classBody();

  class  ClassBodyDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ClassBodyDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassMemberDeclarationContext *classMemberDeclaration();
    InstanceInitializerContext *instanceInitializer();
    StaticInitializerContext *staticInitializer();
    ConstructorDeclarationContext *constructorDeclaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassBodyDeclarationContext* classBodyDeclaration();

  class  ClassMemberDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ClassMemberDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    FieldDeclarationContext *fieldDeclaration();
    MethodDeclarationContext *methodDeclaration();
    ClassDeclarationContext *classDeclaration();
    InterfaceDeclarationContext *interfaceDeclaration();
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassMemberDeclarationContext* classMemberDeclaration();

  class  FieldDeclarationContext : public antlr4::ParserRuleContext {
  public:
    FieldDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnannTypeContext *unannType();
    VariableDeclaratorListContext *variableDeclaratorList();
    antlr4::tree::TerminalNode *SEMI();
    std::vector<FieldModifierContext *> fieldModifier();
    FieldModifierContext* fieldModifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldDeclarationContext* fieldDeclaration();

  class  FieldModifierContext : public antlr4::ParserRuleContext {
  public:
    FieldModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AnnotationContext *annotation();
    antlr4::tree::TerminalNode *PUBLIC();
    antlr4::tree::TerminalNode *PROTECTED();
    antlr4::tree::TerminalNode *PRIVATE();
    antlr4::tree::TerminalNode *STATIC();
    antlr4::tree::TerminalNode *FINAL();
    antlr4::tree::TerminalNode *TRANSIENT();
    antlr4::tree::TerminalNode *VOLATILE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldModifierContext* fieldModifier();

  class  VariableDeclaratorListContext : public antlr4::ParserRuleContext {
  public:
    VariableDeclaratorListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VariableDeclaratorContext *> variableDeclarator();
    VariableDeclaratorContext* variableDeclarator(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableDeclaratorListContext* variableDeclaratorList();

  class  VariableDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    VariableDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    VariableDeclaratorIdContext *variableDeclaratorId();
    antlr4::tree::TerminalNode *ASSIGN();
    VariableInitializerContext *variableInitializer();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableDeclaratorContext* variableDeclarator();

  class  VariableDeclaratorIdContext : public antlr4::ParserRuleContext {
  public:
    VariableDeclaratorIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    DimsContext *dims();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableDeclaratorIdContext* variableDeclaratorId();

  class  VariableInitializerContext : public antlr4::ParserRuleContext {
  public:
    VariableInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    ArrayInitializerContext *arrayInitializer();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableInitializerContext* variableInitializer();

  class  UnannTypeContext : public antlr4::ParserRuleContext {
  public:
    UnannTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnannPrimitiveTypeContext *unannPrimitiveType();
    UnannReferenceTypeContext *unannReferenceType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnannTypeContext* unannType();

  class  UnannPrimitiveTypeContext : public antlr4::ParserRuleContext {
  public:
    UnannPrimitiveTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NumericTypeContext *numericType();
    antlr4::tree::TerminalNode *BOOLEAN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnannPrimitiveTypeContext* unannPrimitiveType();

  class  UnannReferenceTypeContext : public antlr4::ParserRuleContext {
  public:
    UnannReferenceTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnannClassOrInterfaceTypeContext *unannClassOrInterfaceType();
    UnannTypeVariableContext *unannTypeVariable();
    UnannArrayTypeContext *unannArrayType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnannReferenceTypeContext* unannReferenceType();

  class  UnannClassOrInterfaceTypeContext : public antlr4::ParserRuleContext {
  public:
    UnannClassOrInterfaceTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeIdentifierContext *typeIdentifier();
    PackageNameContext *packageName();
    antlr4::tree::TerminalNode *DOT();
    TypeArgumentsContext *typeArguments();
    UCOITContext *uCOIT();
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnannClassOrInterfaceTypeContext* unannClassOrInterfaceType();

  class  UCOITContext : public antlr4::ParserRuleContext {
  public:
    UCOITContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();
    TypeIdentifierContext *typeIdentifier();
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);
    TypeArgumentsContext *typeArguments();
    UCOITContext *uCOIT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UCOITContext* uCOIT();

  class  UnannClassTypeContext : public antlr4::ParserRuleContext {
  public:
    UnannClassTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeIdentifierContext *typeIdentifier();
    TypeArgumentsContext *typeArguments();
    antlr4::tree::TerminalNode *DOT();
    PackageNameContext *packageName();
    UnannClassOrInterfaceTypeContext *unannClassOrInterfaceType();
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnannClassTypeContext* unannClassType();

  class  UnannInterfaceTypeContext : public antlr4::ParserRuleContext {
  public:
    UnannInterfaceTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnannClassTypeContext *unannClassType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnannInterfaceTypeContext* unannInterfaceType();

  class  UnannTypeVariableContext : public antlr4::ParserRuleContext {
  public:
    UnannTypeVariableContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeIdentifierContext *typeIdentifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnannTypeVariableContext* unannTypeVariable();

  class  UnannArrayTypeContext : public antlr4::ParserRuleContext {
  public:
    UnannArrayTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    DimsContext *dims();
    UnannPrimitiveTypeContext *unannPrimitiveType();
    UnannClassOrInterfaceTypeContext *unannClassOrInterfaceType();
    UnannTypeVariableContext *unannTypeVariable();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnannArrayTypeContext* unannArrayType();

  class  MethodDeclarationContext : public antlr4::ParserRuleContext {
  public:
    MethodDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MethodHeaderContext *methodHeader();
    MethodBodyContext *methodBody();
    std::vector<MethodModifierContext *> methodModifier();
    MethodModifierContext* methodModifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MethodDeclarationContext* methodDeclaration();

  class  MethodModifierContext : public antlr4::ParserRuleContext {
  public:
    MethodModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AnnotationContext *annotation();
    antlr4::tree::TerminalNode *PUBLIC();
    antlr4::tree::TerminalNode *PROTECTED();
    antlr4::tree::TerminalNode *PRIVATE();
    antlr4::tree::TerminalNode *ABSTRACT();
    antlr4::tree::TerminalNode *STATIC();
    antlr4::tree::TerminalNode *FINAL();
    antlr4::tree::TerminalNode *SYNCHRONIZED();
    antlr4::tree::TerminalNode *NATIVE();
    antlr4::tree::TerminalNode *STRICTFP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MethodModifierContext* methodModifier();

  class  MethodHeaderContext : public antlr4::ParserRuleContext {
  public:
    MethodHeaderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ResultContext *result();
    MethodDeclaratorContext *methodDeclarator();
    TypeParametersContext *typeParameters();
    ThrowsTContext *throwsT();
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MethodHeaderContext* methodHeader();

  class  ResultContext : public antlr4::ParserRuleContext {
  public:
    ResultContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnannTypeContext *unannType();
    antlr4::tree::TerminalNode *VOID();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResultContext* result();

  class  MethodDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    MethodDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    ReceiverParameterContext *receiverParameter();
    antlr4::tree::TerminalNode *COMMA();
    FormalParameterListContext *formalParameterList();
    DimsContext *dims();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MethodDeclaratorContext* methodDeclarator();

  class  ReceiverParameterContext : public antlr4::ParserRuleContext {
  public:
    ReceiverParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnannTypeContext *unannType();
    antlr4::tree::TerminalNode *THIS();
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *DOT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReceiverParameterContext* receiverParameter();

  class  FormalParameterListContext : public antlr4::ParserRuleContext {
  public:
    FormalParameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FormalParameterContext *> formalParameter();
    FormalParameterContext* formalParameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FormalParameterListContext* formalParameterList();

  class  FormalParameterContext : public antlr4::ParserRuleContext {
  public:
    FormalParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnannTypeContext *unannType();
    VariableDeclaratorIdContext *variableDeclaratorId();
    std::vector<VariableModifierContext *> variableModifier();
    VariableModifierContext* variableModifier(size_t i);
    VariableArityParameterContext *variableArityParameter();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FormalParameterContext* formalParameter();

  class  VariableArityParameterContext : public antlr4::ParserRuleContext {
  public:
    VariableArityParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnannTypeContext *unannType();
    antlr4::tree::TerminalNode *ELLIPSIS();
    antlr4::tree::TerminalNode *Identifier();
    std::vector<VariableModifierContext *> variableModifier();
    VariableModifierContext* variableModifier(size_t i);
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableArityParameterContext* variableArityParameter();

  class  VariableModifierContext : public antlr4::ParserRuleContext {
  public:
    VariableModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AnnotationContext *annotation();
    antlr4::tree::TerminalNode *FINAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableModifierContext* variableModifier();

  class  ThrowsTContext : public antlr4::ParserRuleContext {
  public:
    ThrowsTContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *THROWS();
    ExceptionTypeListContext *exceptionTypeList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ThrowsTContext* throwsT();

  class  ExceptionTypeListContext : public antlr4::ParserRuleContext {
  public:
    ExceptionTypeListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExceptionTypeContext *> exceptionType();
    ExceptionTypeContext* exceptionType(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExceptionTypeListContext* exceptionTypeList();

  class  ExceptionTypeContext : public antlr4::ParserRuleContext {
  public:
    ExceptionTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassTypeContext *classType();
    TypeVariableContext *typeVariable();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExceptionTypeContext* exceptionType();

  class  MethodBodyContext : public antlr4::ParserRuleContext {
  public:
    MethodBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MethodBodyContext* methodBody();

  class  InstanceInitializerContext : public antlr4::ParserRuleContext {
  public:
    InstanceInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InstanceInitializerContext* instanceInitializer();

  class  StaticInitializerContext : public antlr4::ParserRuleContext {
  public:
    StaticInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STATIC();
    BlockContext *block();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StaticInitializerContext* staticInitializer();

  class  ConstructorDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ConstructorDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstructorDeclaratorContext *constructorDeclarator();
    ConstructorBodyContext *constructorBody();
    std::vector<ConstructorModifierContext *> constructorModifier();
    ConstructorModifierContext* constructorModifier(size_t i);
    ThrowsTContext *throwsT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstructorDeclarationContext* constructorDeclaration();

  class  ConstructorModifierContext : public antlr4::ParserRuleContext {
  public:
    ConstructorModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AnnotationContext *annotation();
    antlr4::tree::TerminalNode *PUBLIC();
    antlr4::tree::TerminalNode *PROTECTED();
    antlr4::tree::TerminalNode *PRIVATE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstructorModifierContext* constructorModifier();

  class  ConstructorDeclaratorContext : public antlr4::ParserRuleContext {
  public:
    ConstructorDeclaratorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleTypeNameContext *simpleTypeName();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    TypeParametersContext *typeParameters();
    ReceiverParameterContext *receiverParameter();
    antlr4::tree::TerminalNode *COMMA();
    FormalParameterListContext *formalParameterList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstructorDeclaratorContext* constructorDeclarator();

  class  SimpleTypeNameContext : public antlr4::ParserRuleContext {
  public:
    SimpleTypeNameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeIdentifierContext *typeIdentifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SimpleTypeNameContext* simpleTypeName();

  class  ConstructorBodyContext : public antlr4::ParserRuleContext {
  public:
    ConstructorBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    ExplicitConstructorInvocationContext *explicitConstructorInvocation();
    BlockStatementsContext *blockStatements();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstructorBodyContext* constructorBody();

  class  ExplicitConstructorInvocationContext : public antlr4::ParserRuleContext {
  public:
    ExplicitConstructorInvocationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *THIS();
    antlr4::tree::TerminalNode *SUPER();
    TypeArgumentsContext *typeArguments();
    ArgumentListContext *argumentList();
    antlr4::tree::TerminalNode *DOT();
    ExpressionNameContext *expressionName();
    PrimaryContext *primary();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExplicitConstructorInvocationContext* explicitConstructorInvocation();

  class  EnumDeclarationContext : public antlr4::ParserRuleContext {
  public:
    EnumDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ENUM();
    TypeIdentifierContext *typeIdentifier();
    EnumBodyContext *enumBody();
    std::vector<ClassModifierContext *> classModifier();
    ClassModifierContext* classModifier(size_t i);
    ClassImplementsContext *classImplements();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumDeclarationContext* enumDeclaration();

  class  EnumBodyContext : public antlr4::ParserRuleContext {
  public:
    EnumBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    EnumConstantListContext *enumConstantList();
    antlr4::tree::TerminalNode *COMMA();
    EnumBodyDeclarationsContext *enumBodyDeclarations();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumBodyContext* enumBody();

  class  EnumConstantListContext : public antlr4::ParserRuleContext {
  public:
    EnumConstantListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<EnumConstantContext *> enumConstant();
    EnumConstantContext* enumConstant(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumConstantListContext* enumConstantList();

  class  EnumConstantContext : public antlr4::ParserRuleContext {
  public:
    EnumConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    std::vector<EnumConstantModifierContext *> enumConstantModifier();
    EnumConstantModifierContext* enumConstantModifier(size_t i);
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    ClassBodyContext *classBody();
    ArgumentListContext *argumentList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumConstantContext* enumConstant();

  class  EnumConstantModifierContext : public antlr4::ParserRuleContext {
  public:
    EnumConstantModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AnnotationContext *annotation();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumConstantModifierContext* enumConstantModifier();

  class  EnumBodyDeclarationsContext : public antlr4::ParserRuleContext {
  public:
    EnumBodyDeclarationsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEMI();
    std::vector<ClassBodyDeclarationContext *> classBodyDeclaration();
    ClassBodyDeclarationContext* classBodyDeclaration(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnumBodyDeclarationsContext* enumBodyDeclarations();

  class  RecordDeclarationContext : public antlr4::ParserRuleContext {
  public:
    RecordDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RECORD();
    TypeIdentifierContext *typeIdentifier();
    RecordHeaderContext *recordHeader();
    RecordBodyContext *recordBody();
    std::vector<ClassModifierContext *> classModifier();
    ClassModifierContext* classModifier(size_t i);
    TypeParametersContext *typeParameters();
    ClassImplementsContext *classImplements();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RecordDeclarationContext* recordDeclaration();

  class  RecordHeaderContext : public antlr4::ParserRuleContext {
  public:
    RecordHeaderContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    RecordComponentListContext *recordComponentList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RecordHeaderContext* recordHeader();

  class  RecordComponentListContext : public antlr4::ParserRuleContext {
  public:
    RecordComponentListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<RecordComponentContext *> recordComponent();
    RecordComponentContext* recordComponent(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RecordComponentListContext* recordComponentList();

  class  RecordComponentContext : public antlr4::ParserRuleContext {
  public:
    RecordComponentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnannTypeContext *unannType();
    antlr4::tree::TerminalNode *Identifier();
    std::vector<RecordComponentModifierContext *> recordComponentModifier();
    RecordComponentModifierContext* recordComponentModifier(size_t i);
    VariableArityRecordComponentContext *variableArityRecordComponent();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RecordComponentContext* recordComponent();

  class  VariableArityRecordComponentContext : public antlr4::ParserRuleContext {
  public:
    VariableArityRecordComponentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnannTypeContext *unannType();
    antlr4::tree::TerminalNode *ELLIPSIS();
    antlr4::tree::TerminalNode *Identifier();
    std::vector<RecordComponentModifierContext *> recordComponentModifier();
    RecordComponentModifierContext* recordComponentModifier(size_t i);
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableArityRecordComponentContext* variableArityRecordComponent();

  class  RecordComponentModifierContext : public antlr4::ParserRuleContext {
  public:
    RecordComponentModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AnnotationContext *annotation();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RecordComponentModifierContext* recordComponentModifier();

  class  RecordBodyContext : public antlr4::ParserRuleContext {
  public:
    RecordBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<RecordBodyDeclarationContext *> recordBodyDeclaration();
    RecordBodyDeclarationContext* recordBodyDeclaration(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RecordBodyContext* recordBody();

  class  RecordBodyDeclarationContext : public antlr4::ParserRuleContext {
  public:
    RecordBodyDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassBodyDeclarationContext *classBodyDeclaration();
    CompactConstructorDeclarationContext *compactConstructorDeclaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RecordBodyDeclarationContext* recordBodyDeclaration();

  class  CompactConstructorDeclarationContext : public antlr4::ParserRuleContext {
  public:
    CompactConstructorDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SimpleTypeNameContext *simpleTypeName();
    ConstructorBodyContext *constructorBody();
    std::vector<ConstructorModifierContext *> constructorModifier();
    ConstructorModifierContext* constructorModifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CompactConstructorDeclarationContext* compactConstructorDeclaration();

  class  InterfaceDeclarationContext : public antlr4::ParserRuleContext {
  public:
    InterfaceDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NormalInterfaceDeclarationContext *normalInterfaceDeclaration();
    AnnotationInterfaceDeclarationContext *annotationInterfaceDeclaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterfaceDeclarationContext* interfaceDeclaration();

  class  NormalInterfaceDeclarationContext : public antlr4::ParserRuleContext {
  public:
    NormalInterfaceDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INTERFACE();
    TypeIdentifierContext *typeIdentifier();
    InterfaceBodyContext *interfaceBody();
    std::vector<InterfaceModifierContext *> interfaceModifier();
    InterfaceModifierContext* interfaceModifier(size_t i);
    TypeParametersContext *typeParameters();
    InterfaceExtendsContext *interfaceExtends();
    InterfacePermitsContext *interfacePermits();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NormalInterfaceDeclarationContext* normalInterfaceDeclaration();

  class  InterfaceModifierContext : public antlr4::ParserRuleContext {
  public:
    InterfaceModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AnnotationContext *annotation();
    antlr4::tree::TerminalNode *PUBLIC();
    antlr4::tree::TerminalNode *PROTECTED();
    antlr4::tree::TerminalNode *PRIVATE();
    antlr4::tree::TerminalNode *ABSTRACT();
    antlr4::tree::TerminalNode *STATIC();
    antlr4::tree::TerminalNode *SEALED();
    antlr4::tree::TerminalNode *NONSEALED();
    antlr4::tree::TerminalNode *STRICTFP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterfaceModifierContext* interfaceModifier();

  class  InterfaceExtendsContext : public antlr4::ParserRuleContext {
  public:
    InterfaceExtendsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EXTENDS();
    InterfaceTypeListContext *interfaceTypeList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterfaceExtendsContext* interfaceExtends();

  class  InterfacePermitsContext : public antlr4::ParserRuleContext {
  public:
    InterfacePermitsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *PERMITS();
    std::vector<TypeNameContext *> typeName();
    TypeNameContext* typeName(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterfacePermitsContext* interfacePermits();

  class  InterfaceBodyContext : public antlr4::ParserRuleContext {
  public:
    InterfaceBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<InterfaceMemberDeclarationContext *> interfaceMemberDeclaration();
    InterfaceMemberDeclarationContext* interfaceMemberDeclaration(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterfaceBodyContext* interfaceBody();

  class  InterfaceMemberDeclarationContext : public antlr4::ParserRuleContext {
  public:
    InterfaceMemberDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConstantDeclarationContext *constantDeclaration();
    InterfaceMethodDeclarationContext *interfaceMethodDeclaration();
    ClassDeclarationContext *classDeclaration();
    InterfaceDeclarationContext *interfaceDeclaration();
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterfaceMemberDeclarationContext* interfaceMemberDeclaration();

  class  ConstantDeclarationContext : public antlr4::ParserRuleContext {
  public:
    ConstantDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnannTypeContext *unannType();
    VariableDeclaratorListContext *variableDeclaratorList();
    antlr4::tree::TerminalNode *SEMI();
    std::vector<ConstantModifierContext *> constantModifier();
    ConstantModifierContext* constantModifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantDeclarationContext* constantDeclaration();

  class  ConstantModifierContext : public antlr4::ParserRuleContext {
  public:
    ConstantModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AnnotationContext *annotation();
    antlr4::tree::TerminalNode *PUBLIC();
    antlr4::tree::TerminalNode *STATIC();
    antlr4::tree::TerminalNode *FINAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantModifierContext* constantModifier();

  class  InterfaceMethodDeclarationContext : public antlr4::ParserRuleContext {
  public:
    InterfaceMethodDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MethodHeaderContext *methodHeader();
    MethodBodyContext *methodBody();
    std::vector<InterfaceMethodModifierContext *> interfaceMethodModifier();
    InterfaceMethodModifierContext* interfaceMethodModifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterfaceMethodDeclarationContext* interfaceMethodDeclaration();

  class  InterfaceMethodModifierContext : public antlr4::ParserRuleContext {
  public:
    InterfaceMethodModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AnnotationContext *annotation();
    antlr4::tree::TerminalNode *PUBLIC();
    antlr4::tree::TerminalNode *PRIVATE();
    antlr4::tree::TerminalNode *ABSTRACT();
    antlr4::tree::TerminalNode *DEFAULT();
    antlr4::tree::TerminalNode *STATIC();
    antlr4::tree::TerminalNode *STRICTFP();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InterfaceMethodModifierContext* interfaceMethodModifier();

  class  AnnotationInterfaceDeclarationContext : public antlr4::ParserRuleContext {
  public:
    AnnotationInterfaceDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AT();
    antlr4::tree::TerminalNode *INTERFACE();
    TypeIdentifierContext *typeIdentifier();
    AnnotationInterfaceBodyContext *annotationInterfaceBody();
    std::vector<InterfaceModifierContext *> interfaceModifier();
    InterfaceModifierContext* interfaceModifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AnnotationInterfaceDeclarationContext* annotationInterfaceDeclaration();

  class  AnnotationInterfaceBodyContext : public antlr4::ParserRuleContext {
  public:
    AnnotationInterfaceBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<AnnotationInterfaceMemberDeclarationContext *> annotationInterfaceMemberDeclaration();
    AnnotationInterfaceMemberDeclarationContext* annotationInterfaceMemberDeclaration(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AnnotationInterfaceBodyContext* annotationInterfaceBody();

  class  AnnotationInterfaceMemberDeclarationContext : public antlr4::ParserRuleContext {
  public:
    AnnotationInterfaceMemberDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AnnotationInterfaceElementDeclarationContext *annotationInterfaceElementDeclaration();
    ConstantDeclarationContext *constantDeclaration();
    ClassDeclarationContext *classDeclaration();
    InterfaceDeclarationContext *interfaceDeclaration();
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AnnotationInterfaceMemberDeclarationContext* annotationInterfaceMemberDeclaration();

  class  AnnotationInterfaceElementDeclarationContext : public antlr4::ParserRuleContext {
  public:
    AnnotationInterfaceElementDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnannTypeContext *unannType();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *SEMI();
    std::vector<AnnotationInterfaceElementModifierContext *> annotationInterfaceElementModifier();
    AnnotationInterfaceElementModifierContext* annotationInterfaceElementModifier(size_t i);
    DimsContext *dims();
    DefaultValueContext *defaultValue();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AnnotationInterfaceElementDeclarationContext* annotationInterfaceElementDeclaration();

  class  AnnotationInterfaceElementModifierContext : public antlr4::ParserRuleContext {
  public:
    AnnotationInterfaceElementModifierContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AnnotationContext *annotation();
    antlr4::tree::TerminalNode *PUBLIC();
    antlr4::tree::TerminalNode *ABSTRACT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AnnotationInterfaceElementModifierContext* annotationInterfaceElementModifier();

  class  DefaultValueContext : public antlr4::ParserRuleContext {
  public:
    DefaultValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEFAULT();
    ElementValueContext *elementValue();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefaultValueContext* defaultValue();

  class  AnnotationContext : public antlr4::ParserRuleContext {
  public:
    AnnotationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NormalAnnotationContext *normalAnnotation();
    MarkerAnnotationContext *markerAnnotation();
    SingleElementAnnotationContext *singleElementAnnotation();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AnnotationContext* annotation();

  class  NormalAnnotationContext : public antlr4::ParserRuleContext {
  public:
    NormalAnnotationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AT();
    TypeNameContext *typeName();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    ElementValuePairListContext *elementValuePairList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  NormalAnnotationContext* normalAnnotation();

  class  ElementValuePairListContext : public antlr4::ParserRuleContext {
  public:
    ElementValuePairListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ElementValuePairContext *> elementValuePair();
    ElementValuePairContext* elementValuePair(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElementValuePairListContext* elementValuePairList();

  class  ElementValuePairContext : public antlr4::ParserRuleContext {
  public:
    ElementValuePairContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *ASSIGN();
    ElementValueContext *elementValue();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElementValuePairContext* elementValuePair();

  class  ElementValueContext : public antlr4::ParserRuleContext {
  public:
    ElementValueContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionalExpressionContext *conditionalExpression();
    ElementValueArrayInitializerContext *elementValueArrayInitializer();
    AnnotationContext *annotation();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElementValueContext* elementValue();

  class  ElementValueArrayInitializerContext : public antlr4::ParserRuleContext {
  public:
    ElementValueArrayInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    ElementValueListContext *elementValueList();
    antlr4::tree::TerminalNode *COMMA();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElementValueArrayInitializerContext* elementValueArrayInitializer();

  class  ElementValueListContext : public antlr4::ParserRuleContext {
  public:
    ElementValueListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ElementValueContext *> elementValue();
    ElementValueContext* elementValue(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ElementValueListContext* elementValueList();

  class  MarkerAnnotationContext : public antlr4::ParserRuleContext {
  public:
    MarkerAnnotationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AT();
    TypeNameContext *typeName();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MarkerAnnotationContext* markerAnnotation();

  class  SingleElementAnnotationContext : public antlr4::ParserRuleContext {
  public:
    SingleElementAnnotationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AT();
    TypeNameContext *typeName();
    antlr4::tree::TerminalNode *LPAREN();
    ElementValueContext *elementValue();
    antlr4::tree::TerminalNode *RPAREN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SingleElementAnnotationContext* singleElementAnnotation();

  class  ArrayInitializerContext : public antlr4::ParserRuleContext {
  public:
    ArrayInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    VariableInitializerListContext *variableInitializerList();
    antlr4::tree::TerminalNode *COMMA();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayInitializerContext* arrayInitializer();

  class  VariableInitializerListContext : public antlr4::ParserRuleContext {
  public:
    VariableInitializerListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VariableInitializerContext *> variableInitializer();
    VariableInitializerContext* variableInitializer(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableInitializerListContext* variableInitializerList();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    antlr4::tree::TerminalNode *RBRACE();
    BlockStatementsContext *blockStatements();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockContext* block();

  class  BlockStatementsContext : public antlr4::ParserRuleContext {
  public:
    BlockStatementsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<BlockStatementContext *> blockStatement();
    BlockStatementContext* blockStatement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockStatementsContext* blockStatements();

  class  BlockStatementContext : public antlr4::ParserRuleContext {
  public:
    BlockStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LocalClassOrInterfaceDeclarationContext *localClassOrInterfaceDeclaration();
    LocalVariableDeclarationStatementContext *localVariableDeclarationStatement();
    StatementContext *statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockStatementContext* blockStatement();

  class  LocalClassOrInterfaceDeclarationContext : public antlr4::ParserRuleContext {
  public:
    LocalClassOrInterfaceDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassDeclarationContext *classDeclaration();
    NormalInterfaceDeclarationContext *normalInterfaceDeclaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LocalClassOrInterfaceDeclarationContext* localClassOrInterfaceDeclaration();

  class  LocalVariableDeclarationContext : public antlr4::ParserRuleContext {
  public:
    LocalVariableDeclarationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LocalVariableTypeContext *localVariableType();
    std::vector<VariableModifierContext *> variableModifier();
    VariableModifierContext* variableModifier(size_t i);
    VariableDeclaratorListContext *variableDeclaratorList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LocalVariableDeclarationContext* localVariableDeclaration();

  class  LocalVariableTypeContext : public antlr4::ParserRuleContext {
  public:
    LocalVariableTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnannTypeContext *unannType();
    antlr4::tree::TerminalNode *VAR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LocalVariableTypeContext* localVariableType();

  class  LocalVariableDeclarationStatementContext : public antlr4::ParserRuleContext {
  public:
    LocalVariableDeclarationStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LocalVariableDeclarationContext *localVariableDeclaration();
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LocalVariableDeclarationStatementContext* localVariableDeclarationStatement();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementWithoutTrailingSubstatementContext *statementWithoutTrailingSubstatement();
    LabeledStatementContext *labeledStatement();
    IfThenStatementContext *ifThenStatement();
    IfThenElseStatementContext *ifThenElseStatement();
    WhileStatementContext *whileStatement();
    ForStatementContext *forStatement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  StatementNoShortIfContext : public antlr4::ParserRuleContext {
  public:
    StatementNoShortIfContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementWithoutTrailingSubstatementContext *statementWithoutTrailingSubstatement();
    LabeledStatementNoShortIfContext *labeledStatementNoShortIf();
    IfThenElseStatementNoShortIfContext *ifThenElseStatementNoShortIf();
    WhileStatementNoShortIfContext *whileStatementNoShortIf();
    ForStatementNoShortIfContext *forStatementNoShortIf();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementNoShortIfContext* statementNoShortIf();

  class  StatementWithoutTrailingSubstatementContext : public antlr4::ParserRuleContext {
  public:
    StatementWithoutTrailingSubstatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();
    EmptyStatement_Context *emptyStatement_();
    ExpressionStatementContext *expressionStatement();
    AssertStatementContext *assertStatement();
    SwitchStatementContext *switchStatement();
    DoStatementContext *doStatement();
    BreakStatementContext *breakStatement();
    ContinueStatementContext *continueStatement();
    ReturnStatementContext *returnStatement();
    SynchronizedStatementContext *synchronizedStatement();
    ThrowStatementContext *throwStatement();
    TryStatementContext *tryStatement();
    YieldStatementContext *yieldStatement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementWithoutTrailingSubstatementContext* statementWithoutTrailingSubstatement();

  class  EmptyStatement_Context : public antlr4::ParserRuleContext {
  public:
    EmptyStatement_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EmptyStatement_Context* emptyStatement_();

  class  LabeledStatementContext : public antlr4::ParserRuleContext {
  public:
    LabeledStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *COLON();
    StatementContext *statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabeledStatementContext* labeledStatement();

  class  LabeledStatementNoShortIfContext : public antlr4::ParserRuleContext {
  public:
    LabeledStatementNoShortIfContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *COLON();
    StatementNoShortIfContext *statementNoShortIf();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabeledStatementNoShortIfContext* labeledStatementNoShortIf();

  class  ExpressionStatementContext : public antlr4::ParserRuleContext {
  public:
    ExpressionStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementExpressionContext *statementExpression();
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionStatementContext* expressionStatement();

  class  StatementExpressionContext : public antlr4::ParserRuleContext {
  public:
    StatementExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AssignmentContext *assignment();
    PreIncrementExpressionContext *preIncrementExpression();
    PreDecrementExpressionContext *preDecrementExpression();
    PostIncrementExpressionContext *postIncrementExpression();
    PostDecrementExpressionContext *postDecrementExpression();
    MethodInvocationContext *methodInvocation();
    ClassInstanceCreationExpressionContext *classInstanceCreationExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementExpressionContext* statementExpression();

  class  IfThenStatementContext : public antlr4::ParserRuleContext {
  public:
    IfThenStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    StatementContext *statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfThenStatementContext* ifThenStatement();

  class  IfThenElseStatementContext : public antlr4::ParserRuleContext {
  public:
    IfThenElseStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    StatementNoShortIfContext *statementNoShortIf();
    antlr4::tree::TerminalNode *ELSE();
    StatementContext *statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfThenElseStatementContext* ifThenElseStatement();

  class  IfThenElseStatementNoShortIfContext : public antlr4::ParserRuleContext {
  public:
    IfThenElseStatementNoShortIfContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *IF();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<StatementNoShortIfContext *> statementNoShortIf();
    StatementNoShortIfContext* statementNoShortIf(size_t i);
    antlr4::tree::TerminalNode *ELSE();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  IfThenElseStatementNoShortIfContext* ifThenElseStatementNoShortIf();

  class  AssertStatementContext : public antlr4::ParserRuleContext {
  public:
    AssertStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSERT();
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *COLON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssertStatementContext* assertStatement();

  class  SwitchStatementContext : public antlr4::ParserRuleContext {
  public:
    SwitchStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SWITCH();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    SwitchBlockContext *switchBlock();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SwitchStatementContext* switchStatement();

  class  SwitchBlockContext : public antlr4::ParserRuleContext {
  public:
    SwitchBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACE();
    std::vector<SwitchRuleContext *> switchRule();
    SwitchRuleContext* switchRule(size_t i);
    antlr4::tree::TerminalNode *RBRACE();
    std::vector<SwitchBlockStatementGroupContext *> switchBlockStatementGroup();
    SwitchBlockStatementGroupContext* switchBlockStatementGroup(size_t i);
    std::vector<SwitchLabelContext *> switchLabel();
    SwitchLabelContext* switchLabel(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SwitchBlockContext* switchBlock();

  class  SwitchRuleContext : public antlr4::ParserRuleContext {
  public:
    SwitchRuleContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    SwitchLabelContext *switchLabel();
    antlr4::tree::TerminalNode *ARROW();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEMI();
    BlockContext *block();
    ThrowStatementContext *throwStatement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SwitchRuleContext* switchRule();

  class  SwitchBlockStatementGroupContext : public antlr4::ParserRuleContext {
  public:
    SwitchBlockStatementGroupContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<SwitchLabelContext *> switchLabel();
    SwitchLabelContext* switchLabel(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COLON();
    antlr4::tree::TerminalNode* COLON(size_t i);
    BlockStatementsContext *blockStatements();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SwitchBlockStatementGroupContext* switchBlockStatementGroup();

  class  SwitchLabelContext : public antlr4::ParserRuleContext {
  public:
    SwitchLabelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CASE();
    std::vector<CaseConstantContext *> caseConstant();
    CaseConstantContext* caseConstant(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    antlr4::tree::TerminalNode *DEFAULT();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SwitchLabelContext* switchLabel();

  class  CaseConstantContext : public antlr4::ParserRuleContext {
  public:
    CaseConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionalExpressionContext *conditionalExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CaseConstantContext* caseConstant();

  class  WhileStatementContext : public antlr4::ParserRuleContext {
  public:
    WhileStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    StatementContext *statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileStatementContext* whileStatement();

  class  WhileStatementNoShortIfContext : public antlr4::ParserRuleContext {
  public:
    WhileStatementNoShortIfContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    StatementNoShortIfContext *statementNoShortIf();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhileStatementNoShortIfContext* whileStatementNoShortIf();

  class  DoStatementContext : public antlr4::ParserRuleContext {
  public:
    DoStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DO();
    StatementContext *statement();
    antlr4::tree::TerminalNode *WHILE();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DoStatementContext* doStatement();

  class  ForStatementContext : public antlr4::ParserRuleContext {
  public:
    ForStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BasicForStatementContext *basicForStatement();
    EnhancedForStatementContext *enhancedForStatement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForStatementContext* forStatement();

  class  ForStatementNoShortIfContext : public antlr4::ParserRuleContext {
  public:
    ForStatementNoShortIfContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BasicForStatementNoShortIfContext *basicForStatementNoShortIf();
    EnhancedForStatementNoShortIfContext *enhancedForStatementNoShortIf();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForStatementNoShortIfContext* forStatementNoShortIf();

  class  BasicForStatementContext : public antlr4::ParserRuleContext {
  public:
    BasicForStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    StatementContext *statement();
    ForInitContext *forInit();
    ExpressionContext *expression();
    ForUpdateContext *forUpdate();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BasicForStatementContext* basicForStatement();

  class  BasicForStatementNoShortIfContext : public antlr4::ParserRuleContext {
  public:
    BasicForStatementNoShortIfContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *LPAREN();
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);
    antlr4::tree::TerminalNode *RPAREN();
    StatementNoShortIfContext *statementNoShortIf();
    ForInitContext *forInit();
    ExpressionContext *expression();
    ForUpdateContext *forUpdate();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BasicForStatementNoShortIfContext* basicForStatementNoShortIf();

  class  ForInitContext : public antlr4::ParserRuleContext {
  public:
    ForInitContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementExpressionListContext *statementExpressionList();
    LocalVariableDeclarationContext *localVariableDeclaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForInitContext* forInit();

  class  ForUpdateContext : public antlr4::ParserRuleContext {
  public:
    ForUpdateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    StatementExpressionListContext *statementExpressionList();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ForUpdateContext* forUpdate();

  class  StatementExpressionListContext : public antlr4::ParserRuleContext {
  public:
    StatementExpressionListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementExpressionContext *> statementExpression();
    StatementExpressionContext* statementExpression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementExpressionListContext* statementExpressionList();

  class  EnhancedForStatementContext : public antlr4::ParserRuleContext {
  public:
    EnhancedForStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *LPAREN();
    LocalVariableDeclarationContext *localVariableDeclaration();
    antlr4::tree::TerminalNode *COLON();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    StatementContext *statement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnhancedForStatementContext* enhancedForStatement();

  class  EnhancedForStatementNoShortIfContext : public antlr4::ParserRuleContext {
  public:
    EnhancedForStatementNoShortIfContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FOR();
    antlr4::tree::TerminalNode *LPAREN();
    LocalVariableDeclarationContext *localVariableDeclaration();
    antlr4::tree::TerminalNode *COLON();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    StatementNoShortIfContext *statementNoShortIf();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EnhancedForStatementNoShortIfContext* enhancedForStatementNoShortIf();

  class  BreakStatementContext : public antlr4::ParserRuleContext {
  public:
    BreakStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *BREAK();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *Identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BreakStatementContext* breakStatement();

  class  ContinueStatementContext : public antlr4::ParserRuleContext {
  public:
    ContinueStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CONTINUE();
    antlr4::tree::TerminalNode *SEMI();
    antlr4::tree::TerminalNode *Identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ContinueStatementContext* continueStatement();

  class  ReturnStatementContext : public antlr4::ParserRuleContext {
  public:
    ReturnStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *SEMI();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ReturnStatementContext* returnStatement();

  class  ThrowStatementContext : public antlr4::ParserRuleContext {
  public:
    ThrowStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *THROW();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ThrowStatementContext* throwStatement();

  class  SynchronizedStatementContext : public antlr4::ParserRuleContext {
  public:
    SynchronizedStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SYNCHRONIZED();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    BlockContext *block();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SynchronizedStatementContext* synchronizedStatement();

  class  TryStatementContext : public antlr4::ParserRuleContext {
  public:
    TryStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRY();
    BlockContext *block();
    CatchesContext *catches();
    FinallyBlockContext *finallyBlock();
    TryWithResourcesStatementContext *tryWithResourcesStatement();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TryStatementContext* tryStatement();

  class  CatchesContext : public antlr4::ParserRuleContext {
  public:
    CatchesContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<CatchClauseContext *> catchClause();
    CatchClauseContext* catchClause(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CatchesContext* catches();

  class  CatchClauseContext : public antlr4::ParserRuleContext {
  public:
    CatchClauseContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *CATCH();
    antlr4::tree::TerminalNode *LPAREN();
    CatchFormalParameterContext *catchFormalParameter();
    antlr4::tree::TerminalNode *RPAREN();
    BlockContext *block();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CatchClauseContext* catchClause();

  class  CatchFormalParameterContext : public antlr4::ParserRuleContext {
  public:
    CatchFormalParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    CatchTypeContext *catchType();
    VariableDeclaratorIdContext *variableDeclaratorId();
    std::vector<VariableModifierContext *> variableModifier();
    VariableModifierContext* variableModifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CatchFormalParameterContext* catchFormalParameter();

  class  CatchTypeContext : public antlr4::ParserRuleContext {
  public:
    CatchTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnannClassTypeContext *unannClassType();
    std::vector<antlr4::tree::TerminalNode *> BITOR();
    antlr4::tree::TerminalNode* BITOR(size_t i);
    std::vector<ClassTypeContext *> classType();
    ClassTypeContext* classType(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CatchTypeContext* catchType();

  class  FinallyBlockContext : public antlr4::ParserRuleContext {
  public:
    FinallyBlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FINALLY();
    BlockContext *block();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FinallyBlockContext* finallyBlock();

  class  TryWithResourcesStatementContext : public antlr4::ParserRuleContext {
  public:
    TryWithResourcesStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *TRY();
    ResourceSpecificationContext *resourceSpecification();
    BlockContext *block();
    CatchesContext *catches();
    FinallyBlockContext *finallyBlock();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TryWithResourcesStatementContext* tryWithResourcesStatement();

  class  ResourceSpecificationContext : public antlr4::ParserRuleContext {
  public:
    ResourceSpecificationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    ResourceListContext *resourceList();
    antlr4::tree::TerminalNode *RPAREN();
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResourceSpecificationContext* resourceSpecification();

  class  ResourceListContext : public antlr4::ParserRuleContext {
  public:
    ResourceListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ResourceContext *> resource();
    ResourceContext* resource(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SEMI();
    antlr4::tree::TerminalNode* SEMI(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResourceListContext* resourceList();

  class  ResourceContext : public antlr4::ParserRuleContext {
  public:
    ResourceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LocalVariableDeclarationContext *localVariableDeclaration();
    VariableAccessContext *variableAccess();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ResourceContext* resource();

  class  VariableAccessContext : public antlr4::ParserRuleContext {
  public:
    VariableAccessContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionNameContext *expressionName();
    FieldAccessContext *fieldAccess();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  VariableAccessContext* variableAccess();

  class  YieldStatementContext : public antlr4::ParserRuleContext {
  public:
    YieldStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *YIELD();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *SEMI();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  YieldStatementContext* yieldStatement();

  class  PatternContext : public antlr4::ParserRuleContext {
  public:
    PatternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypePatternContext *typePattern();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PatternContext* pattern();

  class  TypePatternContext : public antlr4::ParserRuleContext {
  public:
    TypePatternContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LocalVariableDeclarationContext *localVariableDeclaration();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypePatternContext* typePattern();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LambdaExpressionContext *lambdaExpression();
    AssignmentExpressionContext *assignmentExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  PrimaryContext : public antlr4::ParserRuleContext {
  public:
    PrimaryContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimaryNoNewArrayContext *primaryNoNewArray();
    ArrayCreationExpressionContext *arrayCreationExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimaryContext* primary();

  class  PrimaryNoNewArrayContext : public antlr4::ParserRuleContext {
  public:
    PrimaryNoNewArrayContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LiteralContext *literal();
    PNNAContext *pNNA();
    ClassLiteralContext *classLiteral();
    antlr4::tree::TerminalNode *THIS();
    TypeNameContext *typeName();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    UnqualifiedClassInstanceCreationExpressionContext *unqualifiedClassInstanceCreationExpression();
    ExpressionNameContext *expressionName();
    ArrayCreationExpressionContext *arrayCreationExpression();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *SUPER();
    antlr4::tree::TerminalNode *LBRACK();
    antlr4::tree::TerminalNode *RBRACK();
    ArrayCreationExpressionWithInitializerContext *arrayCreationExpressionWithInitializer();
    MethodNameContext *methodName();
    ArgumentListContext *argumentList();
    TypeArgumentsContext *typeArguments();
    antlr4::tree::TerminalNode *COLONCOLON();
    ReferenceTypeContext *referenceType();
    ClassTypeContext *classType();
    antlr4::tree::TerminalNode *NEW();
    ArrayTypeContext *arrayType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PrimaryNoNewArrayContext* primaryNoNewArray();

  class  PNNAContext : public antlr4::ParserRuleContext {
  public:
    PNNAContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DOT();
    UnqualifiedClassInstanceCreationExpressionContext *unqualifiedClassInstanceCreationExpression();
    PNNAContext *pNNA();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *LBRACK();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RBRACK();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    TypeArgumentsContext *typeArguments();
    ArgumentListContext *argumentList();
    antlr4::tree::TerminalNode *COLONCOLON();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PNNAContext* pNNA();

  class  ClassLiteralContext : public antlr4::ParserRuleContext {
  public:
    ClassLiteralContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeNameContext *typeName();
    antlr4::tree::TerminalNode *DOT();
    antlr4::tree::TerminalNode *CLASS();
    std::vector<antlr4::tree::TerminalNode *> LBRACK();
    antlr4::tree::TerminalNode* LBRACK(size_t i);
    std::vector<antlr4::tree::TerminalNode *> RBRACK();
    antlr4::tree::TerminalNode* RBRACK(size_t i);
    NumericTypeContext *numericType();
    antlr4::tree::TerminalNode *BOOLEAN();
    antlr4::tree::TerminalNode *VOID();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassLiteralContext* classLiteral();

  class  ClassInstanceCreationExpressionContext : public antlr4::ParserRuleContext {
  public:
    ClassInstanceCreationExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnqualifiedClassInstanceCreationExpressionContext *unqualifiedClassInstanceCreationExpression();
    ExpressionNameContext *expressionName();
    antlr4::tree::TerminalNode *DOT();
    PrimaryContext *primary();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassInstanceCreationExpressionContext* classInstanceCreationExpression();

  class  UnqualifiedClassInstanceCreationExpressionContext : public antlr4::ParserRuleContext {
  public:
    UnqualifiedClassInstanceCreationExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NEW();
    ClassOrInterfaceTypeToInstantiateContext *classOrInterfaceTypeToInstantiate();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    TypeArgumentsContext *typeArguments();
    ArgumentListContext *argumentList();
    ClassBodyContext *classBody();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnqualifiedClassInstanceCreationExpressionContext* unqualifiedClassInstanceCreationExpression();

  class  ClassOrInterfaceTypeToInstantiateContext : public antlr4::ParserRuleContext {
  public:
    ClassOrInterfaceTypeToInstantiateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    TypeArgumentsOrDiamondContext *typeArgumentsOrDiamond();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassOrInterfaceTypeToInstantiateContext* classOrInterfaceTypeToInstantiate();

  class  TypeArgumentsOrDiamondContext : public antlr4::ParserRuleContext {
  public:
    TypeArgumentsOrDiamondContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    TypeArgumentsContext *typeArguments();
    antlr4::tree::TerminalNode *OACA();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  TypeArgumentsOrDiamondContext* typeArgumentsOrDiamond();

  class  ArrayCreationExpressionContext : public antlr4::ParserRuleContext {
  public:
    ArrayCreationExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ArrayCreationExpressionWithoutInitializerContext *arrayCreationExpressionWithoutInitializer();
    ArrayCreationExpressionWithInitializerContext *arrayCreationExpressionWithInitializer();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayCreationExpressionContext* arrayCreationExpression();

  class  ArrayCreationExpressionWithoutInitializerContext : public antlr4::ParserRuleContext {
  public:
    ArrayCreationExpressionWithoutInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NEW();
    PrimitiveTypeContext *primitiveType();
    DimExprsContext *dimExprs();
    DimsContext *dims();
    ClassTypeContext *classType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayCreationExpressionWithoutInitializerContext* arrayCreationExpressionWithoutInitializer();

  class  ArrayCreationExpressionWithInitializerContext : public antlr4::ParserRuleContext {
  public:
    ArrayCreationExpressionWithInitializerContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NEW();
    PrimitiveTypeContext *primitiveType();
    DimsContext *dims();
    ArrayInitializerContext *arrayInitializer();
    ClassOrInterfaceTypeContext *classOrInterfaceType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayCreationExpressionWithInitializerContext* arrayCreationExpressionWithInitializer();

  class  DimExprsContext : public antlr4::ParserRuleContext {
  public:
    DimExprsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<DimExprContext *> dimExpr();
    DimExprContext* dimExpr(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DimExprsContext* dimExprs();

  class  DimExprContext : public antlr4::ParserRuleContext {
  public:
    DimExprContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LBRACK();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RBRACK();
    std::vector<AnnotationContext *> annotation();
    AnnotationContext* annotation(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DimExprContext* dimExpr();

  class  ArrayAccessContext : public antlr4::ParserRuleContext {
  public:
    ArrayAccessContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionNameContext *expressionName();
    antlr4::tree::TerminalNode *LBRACK();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RBRACK();
    PrimaryNoNewArrayContext *primaryNoNewArray();
    ArrayCreationExpressionWithInitializerContext *arrayCreationExpressionWithInitializer();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArrayAccessContext* arrayAccess();

  class  FieldAccessContext : public antlr4::ParserRuleContext {
  public:
    FieldAccessContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimaryContext *primary();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *SUPER();
    TypeNameContext *typeName();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FieldAccessContext* fieldAccess();

  class  MethodInvocationContext : public antlr4::ParserRuleContext {
  public:
    MethodInvocationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MethodNameContext *methodName();
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    ArgumentListContext *argumentList();
    TypeNameContext *typeName();
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    antlr4::tree::TerminalNode *Identifier();
    TypeArgumentsContext *typeArguments();
    ExpressionNameContext *expressionName();
    PrimaryContext *primary();
    antlr4::tree::TerminalNode *SUPER();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MethodInvocationContext* methodInvocation();

  class  ArgumentListContext : public antlr4::ParserRuleContext {
  public:
    ArgumentListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgumentListContext* argumentList();

  class  MethodReferenceContext : public antlr4::ParserRuleContext {
  public:
    MethodReferenceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionNameContext *expressionName();
    antlr4::tree::TerminalNode *COLONCOLON();
    antlr4::tree::TerminalNode *Identifier();
    TypeArgumentsContext *typeArguments();
    PrimaryContext *primary();
    ReferenceTypeContext *referenceType();
    antlr4::tree::TerminalNode *SUPER();
    TypeNameContext *typeName();
    antlr4::tree::TerminalNode *DOT();
    ClassTypeContext *classType();
    antlr4::tree::TerminalNode *NEW();
    ArrayTypeContext *arrayType();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MethodReferenceContext* methodReference();

  class  PostfixExpressionContext : public antlr4::ParserRuleContext {
  public:
    PostfixExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PrimaryContext *primary();
    PfEContext *pfE();
    ExpressionNameContext *expressionName();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PostfixExpressionContext* postfixExpression();

  class  PfEContext : public antlr4::ParserRuleContext {
  public:
    PfEContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INC();
    PfEContext *pfE();
    antlr4::tree::TerminalNode *DEC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PfEContext* pfE();

  class  PostIncrementExpressionContext : public antlr4::ParserRuleContext {
  public:
    PostIncrementExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PostfixExpressionContext *postfixExpression();
    antlr4::tree::TerminalNode *INC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PostIncrementExpressionContext* postIncrementExpression();

  class  PostDecrementExpressionContext : public antlr4::ParserRuleContext {
  public:
    PostDecrementExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PostfixExpressionContext *postfixExpression();
    antlr4::tree::TerminalNode *DEC();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PostDecrementExpressionContext* postDecrementExpression();

  class  UnaryExpressionContext : public antlr4::ParserRuleContext {
  public:
    UnaryExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PreIncrementExpressionContext *preIncrementExpression();
    PreDecrementExpressionContext *preDecrementExpression();
    antlr4::tree::TerminalNode *ADD();
    UnaryExpressionContext *unaryExpression();
    antlr4::tree::TerminalNode *SUB();
    UnaryExpressionNotPlusMinusContext *unaryExpressionNotPlusMinus();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryExpressionContext* unaryExpression();

  class  PreIncrementExpressionContext : public antlr4::ParserRuleContext {
  public:
    PreIncrementExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INC();
    UnaryExpressionContext *unaryExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PreIncrementExpressionContext* preIncrementExpression();

  class  PreDecrementExpressionContext : public antlr4::ParserRuleContext {
  public:
    PreDecrementExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *DEC();
    UnaryExpressionContext *unaryExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  PreDecrementExpressionContext* preDecrementExpression();

  class  UnaryExpressionNotPlusMinusContext : public antlr4::ParserRuleContext {
  public:
    UnaryExpressionNotPlusMinusContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    PostfixExpressionContext *postfixExpression();
    antlr4::tree::TerminalNode *TILDE();
    UnaryExpressionContext *unaryExpression();
    antlr4::tree::TerminalNode *BANG();
    CastExpressionContext *castExpression();
    SwitchExpressionContext *switchExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  UnaryExpressionNotPlusMinusContext* unaryExpressionNotPlusMinus();

  class  CastExpressionContext : public antlr4::ParserRuleContext {
  public:
    CastExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    PrimitiveTypeContext *primitiveType();
    antlr4::tree::TerminalNode *RPAREN();
    UnaryExpressionContext *unaryExpression();
    ReferenceTypeContext *referenceType();
    UnaryExpressionNotPlusMinusContext *unaryExpressionNotPlusMinus();
    std::vector<AdditionalBoundContext *> additionalBound();
    AdditionalBoundContext* additionalBound(size_t i);
    LambdaExpressionContext *lambdaExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  CastExpressionContext* castExpression();

  class  MultiplicativeExpressionContext : public antlr4::ParserRuleContext {
  public:
    MultiplicativeExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnaryExpressionContext *unaryExpression();
    MultiplicativeExpressionContext *multiplicativeExpression();
    antlr4::tree::TerminalNode *MUL();
    antlr4::tree::TerminalNode *DIV();
    antlr4::tree::TerminalNode *MOD();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MultiplicativeExpressionContext* multiplicativeExpression();
  MultiplicativeExpressionContext* multiplicativeExpression(int precedence);
  class  AdditiveExpressionContext : public antlr4::ParserRuleContext {
  public:
    AdditiveExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    MultiplicativeExpressionContext *multiplicativeExpression();
    AdditiveExpressionContext *additiveExpression();
    antlr4::tree::TerminalNode *ADD();
    antlr4::tree::TerminalNode *SUB();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AdditiveExpressionContext* additiveExpression();
  AdditiveExpressionContext* additiveExpression(int precedence);
  class  ShiftExpressionContext : public antlr4::ParserRuleContext {
  public:
    ShiftExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AdditiveExpressionContext *additiveExpression();
    ShiftExpressionContext *shiftExpression();
    std::vector<antlr4::tree::TerminalNode *> LT();
    antlr4::tree::TerminalNode* LT(size_t i);
    std::vector<antlr4::tree::TerminalNode *> GT();
    antlr4::tree::TerminalNode* GT(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ShiftExpressionContext* shiftExpression();
  ShiftExpressionContext* shiftExpression(int precedence);
  class  RelationalExpressionContext : public antlr4::ParserRuleContext {
  public:
    RelationalExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ShiftExpressionContext *shiftExpression();
    RelationalExpressionContext *relationalExpression();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *LE();
    antlr4::tree::TerminalNode *GE();
    antlr4::tree::TerminalNode *INSTANCEOF();
    ReferenceTypeContext *referenceType();
    PatternContext *pattern();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  RelationalExpressionContext* relationalExpression();
  RelationalExpressionContext* relationalExpression(int precedence);
  class  EqualityExpressionContext : public antlr4::ParserRuleContext {
  public:
    EqualityExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    RelationalExpressionContext *relationalExpression();
    EqualityExpressionContext *equalityExpression();
    antlr4::tree::TerminalNode *EQUAL();
    antlr4::tree::TerminalNode *NOTEQUAL();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  EqualityExpressionContext* equalityExpression();
  EqualityExpressionContext* equalityExpression(int precedence);
  class  AndExpressionContext : public antlr4::ParserRuleContext {
  public:
    AndExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    EqualityExpressionContext *equalityExpression();
    AndExpressionContext *andExpression();
    antlr4::tree::TerminalNode *BITAND();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AndExpressionContext* andExpression();
  AndExpressionContext* andExpression(int precedence);
  class  ExclusiveOrExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExclusiveOrExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    AndExpressionContext *andExpression();
    ExclusiveOrExpressionContext *exclusiveOrExpression();
    antlr4::tree::TerminalNode *CARET();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExclusiveOrExpressionContext* exclusiveOrExpression();
  ExclusiveOrExpressionContext* exclusiveOrExpression(int precedence);
  class  InclusiveOrExpressionContext : public antlr4::ParserRuleContext {
  public:
    InclusiveOrExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExclusiveOrExpressionContext *exclusiveOrExpression();
    InclusiveOrExpressionContext *inclusiveOrExpression();
    antlr4::tree::TerminalNode *BITOR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  InclusiveOrExpressionContext* inclusiveOrExpression();
  InclusiveOrExpressionContext* inclusiveOrExpression(int precedence);
  class  ConditionalAndExpressionContext : public antlr4::ParserRuleContext {
  public:
    ConditionalAndExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    InclusiveOrExpressionContext *inclusiveOrExpression();
    ConditionalAndExpressionContext *conditionalAndExpression();
    antlr4::tree::TerminalNode *AND();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionalAndExpressionContext* conditionalAndExpression();
  ConditionalAndExpressionContext* conditionalAndExpression(int precedence);
  class  ConditionalOrExpressionContext : public antlr4::ParserRuleContext {
  public:
    ConditionalOrExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionalAndExpressionContext *conditionalAndExpression();
    ConditionalOrExpressionContext *conditionalOrExpression();
    antlr4::tree::TerminalNode *OR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionalOrExpressionContext* conditionalOrExpression();
  ConditionalOrExpressionContext* conditionalOrExpression(int precedence);
  class  ConditionalExpressionContext : public antlr4::ParserRuleContext {
  public:
    ConditionalExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionalOrExpressionContext *conditionalOrExpression();
    antlr4::tree::TerminalNode *QUESTION();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *COLON();
    ConditionalExpressionContext *conditionalExpression();
    LambdaExpressionContext *lambdaExpression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConditionalExpressionContext* conditionalExpression();

  class  AssignmentExpressionContext : public antlr4::ParserRuleContext {
  public:
    AssignmentExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ConditionalExpressionContext *conditionalExpression();
    AssignmentContext *assignment();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentExpressionContext* assignmentExpression();

  class  AssignmentContext : public antlr4::ParserRuleContext {
  public:
    AssignmentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LeftHandSideContext *leftHandSide();
    AssignmentOperatorContext *assignmentOperator();
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentContext* assignment();

  class  LeftHandSideContext : public antlr4::ParserRuleContext {
  public:
    LeftHandSideContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionNameContext *expressionName();
    FieldAccessContext *fieldAccess();
    ArrayAccessContext *arrayAccess();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LeftHandSideContext* leftHandSide();

  class  AssignmentOperatorContext : public antlr4::ParserRuleContext {
  public:
    AssignmentOperatorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ASSIGN();
    antlr4::tree::TerminalNode *MUL_ASSIGN();
    antlr4::tree::TerminalNode *DIV_ASSIGN();
    antlr4::tree::TerminalNode *MOD_ASSIGN();
    antlr4::tree::TerminalNode *ADD_ASSIGN();
    antlr4::tree::TerminalNode *SUB_ASSIGN();
    antlr4::tree::TerminalNode *LSHIFT_ASSIGN();
    antlr4::tree::TerminalNode *RSHIFT_ASSIGN();
    antlr4::tree::TerminalNode *URSHIFT_ASSIGN();
    antlr4::tree::TerminalNode *AND_ASSIGN();
    antlr4::tree::TerminalNode *XOR_ASSIGN();
    antlr4::tree::TerminalNode *OR_ASSIGN();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssignmentOperatorContext* assignmentOperator();

  class  LambdaExpressionContext : public antlr4::ParserRuleContext {
  public:
    LambdaExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LambdaParametersContext *lambdaParameters();
    antlr4::tree::TerminalNode *ARROW();
    LambdaBodyContext *lambdaBody();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdaExpressionContext* lambdaExpression();

  class  LambdaParametersContext : public antlr4::ParserRuleContext {
  public:
    LambdaParametersContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    antlr4::tree::TerminalNode *RPAREN();
    LambdaParameterListContext *lambdaParameterList();
    antlr4::tree::TerminalNode *Identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdaParametersContext* lambdaParameters();

  class  LambdaParameterListContext : public antlr4::ParserRuleContext {
  public:
    LambdaParameterListContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<LambdaParameterContext *> lambdaParameter();
    LambdaParameterContext* lambdaParameter(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdaParameterListContext* lambdaParameterList();

  class  LambdaParameterContext : public antlr4::ParserRuleContext {
  public:
    LambdaParameterContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    LambdaParameterTypeContext *lambdaParameterType();
    VariableDeclaratorIdContext *variableDeclaratorId();
    std::vector<VariableModifierContext *> variableModifier();
    VariableModifierContext* variableModifier(size_t i);
    VariableArityParameterContext *variableArityParameter();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdaParameterContext* lambdaParameter();

  class  LambdaParameterTypeContext : public antlr4::ParserRuleContext {
  public:
    LambdaParameterTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    UnannTypeContext *unannType();
    antlr4::tree::TerminalNode *VAR();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdaParameterTypeContext* lambdaParameterType();

  class  LambdaBodyContext : public antlr4::ParserRuleContext {
  public:
    LambdaBodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();
    BlockContext *block();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LambdaBodyContext* lambdaBody();

  class  SwitchExpressionContext : public antlr4::ParserRuleContext {
  public:
    SwitchExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SWITCH();
    antlr4::tree::TerminalNode *LPAREN();
    ExpressionContext *expression();
    antlr4::tree::TerminalNode *RPAREN();
    SwitchBlockContext *switchBlock();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  SwitchExpressionContext* switchExpression();

  class  ConstantExpressionContext : public antlr4::ParserRuleContext {
  public:
    ConstantExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ExpressionContext *expression();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantExpressionContext* constantExpression();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool multiplicativeExpressionSempred(MultiplicativeExpressionContext *_localctx, size_t predicateIndex);
  bool additiveExpressionSempred(AdditiveExpressionContext *_localctx, size_t predicateIndex);
  bool shiftExpressionSempred(ShiftExpressionContext *_localctx, size_t predicateIndex);
  bool relationalExpressionSempred(RelationalExpressionContext *_localctx, size_t predicateIndex);
  bool equalityExpressionSempred(EqualityExpressionContext *_localctx, size_t predicateIndex);
  bool andExpressionSempred(AndExpressionContext *_localctx, size_t predicateIndex);
  bool exclusiveOrExpressionSempred(ExclusiveOrExpressionContext *_localctx, size_t predicateIndex);
  bool inclusiveOrExpressionSempred(InclusiveOrExpressionContext *_localctx, size_t predicateIndex);
  bool conditionalAndExpressionSempred(ConditionalAndExpressionContext *_localctx, size_t predicateIndex);
  bool conditionalOrExpressionSempred(ConditionalOrExpressionContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

