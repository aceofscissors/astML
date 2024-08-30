
// Generated from ./Java20Parser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "Java20Parser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by Java20Parser.
 */
class  Java20ParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by Java20Parser.
   */
    virtual std::any visitStart_(Java20Parser::Start_Context *context) = 0;

    virtual std::any visitLiteral(Java20Parser::LiteralContext *context) = 0;

    virtual std::any visitTypeIdentifier(Java20Parser::TypeIdentifierContext *context) = 0;

    virtual std::any visitUnqualifiedMethodIdentifier(Java20Parser::UnqualifiedMethodIdentifierContext *context) = 0;

    virtual std::any visitPrimitiveType(Java20Parser::PrimitiveTypeContext *context) = 0;

    virtual std::any visitNumericType(Java20Parser::NumericTypeContext *context) = 0;

    virtual std::any visitIntegralType(Java20Parser::IntegralTypeContext *context) = 0;

    virtual std::any visitFloatingPointType(Java20Parser::FloatingPointTypeContext *context) = 0;

    virtual std::any visitReferenceType(Java20Parser::ReferenceTypeContext *context) = 0;

    virtual std::any visitCoit(Java20Parser::CoitContext *context) = 0;

    virtual std::any visitClassOrInterfaceType(Java20Parser::ClassOrInterfaceTypeContext *context) = 0;

    virtual std::any visitClassType(Java20Parser::ClassTypeContext *context) = 0;

    virtual std::any visitInterfaceType(Java20Parser::InterfaceTypeContext *context) = 0;

    virtual std::any visitTypeVariable(Java20Parser::TypeVariableContext *context) = 0;

    virtual std::any visitArrayType(Java20Parser::ArrayTypeContext *context) = 0;

    virtual std::any visitDims(Java20Parser::DimsContext *context) = 0;

    virtual std::any visitTypeParameter(Java20Parser::TypeParameterContext *context) = 0;

    virtual std::any visitTypeParameterModifier(Java20Parser::TypeParameterModifierContext *context) = 0;

    virtual std::any visitTypeBound(Java20Parser::TypeBoundContext *context) = 0;

    virtual std::any visitAdditionalBound(Java20Parser::AdditionalBoundContext *context) = 0;

    virtual std::any visitTypeArguments(Java20Parser::TypeArgumentsContext *context) = 0;

    virtual std::any visitTypeArgumentList(Java20Parser::TypeArgumentListContext *context) = 0;

    virtual std::any visitTypeArgument(Java20Parser::TypeArgumentContext *context) = 0;

    virtual std::any visitWildcard(Java20Parser::WildcardContext *context) = 0;

    virtual std::any visitWildcardBounds(Java20Parser::WildcardBoundsContext *context) = 0;

    virtual std::any visitModuleName(Java20Parser::ModuleNameContext *context) = 0;

    virtual std::any visitPackageName(Java20Parser::PackageNameContext *context) = 0;

    virtual std::any visitTypeName(Java20Parser::TypeNameContext *context) = 0;

    virtual std::any visitPackageOrTypeName(Java20Parser::PackageOrTypeNameContext *context) = 0;

    virtual std::any visitExpressionName(Java20Parser::ExpressionNameContext *context) = 0;

    virtual std::any visitMethodName(Java20Parser::MethodNameContext *context) = 0;

    virtual std::any visitAmbiguousName(Java20Parser::AmbiguousNameContext *context) = 0;

    virtual std::any visitCompilationUnit(Java20Parser::CompilationUnitContext *context) = 0;

    virtual std::any visitOrdinaryCompilationUnit(Java20Parser::OrdinaryCompilationUnitContext *context) = 0;

    virtual std::any visitModularCompilationUnit(Java20Parser::ModularCompilationUnitContext *context) = 0;

    virtual std::any visitPackageDeclaration(Java20Parser::PackageDeclarationContext *context) = 0;

    virtual std::any visitPackageModifier(Java20Parser::PackageModifierContext *context) = 0;

    virtual std::any visitImportDeclaration(Java20Parser::ImportDeclarationContext *context) = 0;

    virtual std::any visitSingleTypeImportDeclaration(Java20Parser::SingleTypeImportDeclarationContext *context) = 0;

    virtual std::any visitTypeImportOnDemandDeclaration(Java20Parser::TypeImportOnDemandDeclarationContext *context) = 0;

    virtual std::any visitSingleStaticImportDeclaration(Java20Parser::SingleStaticImportDeclarationContext *context) = 0;

    virtual std::any visitStaticImportOnDemandDeclaration(Java20Parser::StaticImportOnDemandDeclarationContext *context) = 0;

    virtual std::any visitTopLevelClassOrInterfaceDeclaration(Java20Parser::TopLevelClassOrInterfaceDeclarationContext *context) = 0;

    virtual std::any visitModuleDeclaration(Java20Parser::ModuleDeclarationContext *context) = 0;

    virtual std::any visitModuleDirective(Java20Parser::ModuleDirectiveContext *context) = 0;

    virtual std::any visitRequiresModifier(Java20Parser::RequiresModifierContext *context) = 0;

    virtual std::any visitClassDeclaration(Java20Parser::ClassDeclarationContext *context) = 0;

    virtual std::any visitNormalClassDeclaration(Java20Parser::NormalClassDeclarationContext *context) = 0;

    virtual std::any visitClassModifier(Java20Parser::ClassModifierContext *context) = 0;

    virtual std::any visitTypeParameters(Java20Parser::TypeParametersContext *context) = 0;

    virtual std::any visitTypeParameterList(Java20Parser::TypeParameterListContext *context) = 0;

    virtual std::any visitClassExtends(Java20Parser::ClassExtendsContext *context) = 0;

    virtual std::any visitClassImplements(Java20Parser::ClassImplementsContext *context) = 0;

    virtual std::any visitInterfaceTypeList(Java20Parser::InterfaceTypeListContext *context) = 0;

    virtual std::any visitClassPermits(Java20Parser::ClassPermitsContext *context) = 0;

    virtual std::any visitClassBody(Java20Parser::ClassBodyContext *context) = 0;

    virtual std::any visitClassBodyDeclaration(Java20Parser::ClassBodyDeclarationContext *context) = 0;

    virtual std::any visitClassMemberDeclaration(Java20Parser::ClassMemberDeclarationContext *context) = 0;

    virtual std::any visitFieldDeclaration(Java20Parser::FieldDeclarationContext *context) = 0;

    virtual std::any visitFieldModifier(Java20Parser::FieldModifierContext *context) = 0;

    virtual std::any visitVariableDeclaratorList(Java20Parser::VariableDeclaratorListContext *context) = 0;

    virtual std::any visitVariableDeclarator(Java20Parser::VariableDeclaratorContext *context) = 0;

    virtual std::any visitVariableDeclaratorId(Java20Parser::VariableDeclaratorIdContext *context) = 0;

    virtual std::any visitVariableInitializer(Java20Parser::VariableInitializerContext *context) = 0;

    virtual std::any visitUnannType(Java20Parser::UnannTypeContext *context) = 0;

    virtual std::any visitUnannPrimitiveType(Java20Parser::UnannPrimitiveTypeContext *context) = 0;

    virtual std::any visitUnannReferenceType(Java20Parser::UnannReferenceTypeContext *context) = 0;

    virtual std::any visitUnannClassOrInterfaceType(Java20Parser::UnannClassOrInterfaceTypeContext *context) = 0;

    virtual std::any visitUCOIT(Java20Parser::UCOITContext *context) = 0;

    virtual std::any visitUnannClassType(Java20Parser::UnannClassTypeContext *context) = 0;

    virtual std::any visitUnannInterfaceType(Java20Parser::UnannInterfaceTypeContext *context) = 0;

    virtual std::any visitUnannTypeVariable(Java20Parser::UnannTypeVariableContext *context) = 0;

    virtual std::any visitUnannArrayType(Java20Parser::UnannArrayTypeContext *context) = 0;

    virtual std::any visitMethodDeclaration(Java20Parser::MethodDeclarationContext *context) = 0;

    virtual std::any visitMethodModifier(Java20Parser::MethodModifierContext *context) = 0;

    virtual std::any visitMethodHeader(Java20Parser::MethodHeaderContext *context) = 0;

    virtual std::any visitResult(Java20Parser::ResultContext *context) = 0;

    virtual std::any visitMethodDeclarator(Java20Parser::MethodDeclaratorContext *context) = 0;

    virtual std::any visitReceiverParameter(Java20Parser::ReceiverParameterContext *context) = 0;

    virtual std::any visitFormalParameterList(Java20Parser::FormalParameterListContext *context) = 0;

    virtual std::any visitFormalParameter(Java20Parser::FormalParameterContext *context) = 0;

    virtual std::any visitVariableArityParameter(Java20Parser::VariableArityParameterContext *context) = 0;

    virtual std::any visitVariableModifier(Java20Parser::VariableModifierContext *context) = 0;

    virtual std::any visitThrowsT(Java20Parser::ThrowsTContext *context) = 0;

    virtual std::any visitExceptionTypeList(Java20Parser::ExceptionTypeListContext *context) = 0;

    virtual std::any visitExceptionType(Java20Parser::ExceptionTypeContext *context) = 0;

    virtual std::any visitMethodBody(Java20Parser::MethodBodyContext *context) = 0;

    virtual std::any visitInstanceInitializer(Java20Parser::InstanceInitializerContext *context) = 0;

    virtual std::any visitStaticInitializer(Java20Parser::StaticInitializerContext *context) = 0;

    virtual std::any visitConstructorDeclaration(Java20Parser::ConstructorDeclarationContext *context) = 0;

    virtual std::any visitConstructorModifier(Java20Parser::ConstructorModifierContext *context) = 0;

    virtual std::any visitConstructorDeclarator(Java20Parser::ConstructorDeclaratorContext *context) = 0;

    virtual std::any visitSimpleTypeName(Java20Parser::SimpleTypeNameContext *context) = 0;

    virtual std::any visitConstructorBody(Java20Parser::ConstructorBodyContext *context) = 0;

    virtual std::any visitExplicitConstructorInvocation(Java20Parser::ExplicitConstructorInvocationContext *context) = 0;

    virtual std::any visitEnumDeclaration(Java20Parser::EnumDeclarationContext *context) = 0;

    virtual std::any visitEnumBody(Java20Parser::EnumBodyContext *context) = 0;

    virtual std::any visitEnumConstantList(Java20Parser::EnumConstantListContext *context) = 0;

    virtual std::any visitEnumConstant(Java20Parser::EnumConstantContext *context) = 0;

    virtual std::any visitEnumConstantModifier(Java20Parser::EnumConstantModifierContext *context) = 0;

    virtual std::any visitEnumBodyDeclarations(Java20Parser::EnumBodyDeclarationsContext *context) = 0;

    virtual std::any visitRecordDeclaration(Java20Parser::RecordDeclarationContext *context) = 0;

    virtual std::any visitRecordHeader(Java20Parser::RecordHeaderContext *context) = 0;

    virtual std::any visitRecordComponentList(Java20Parser::RecordComponentListContext *context) = 0;

    virtual std::any visitRecordComponent(Java20Parser::RecordComponentContext *context) = 0;

    virtual std::any visitVariableArityRecordComponent(Java20Parser::VariableArityRecordComponentContext *context) = 0;

    virtual std::any visitRecordComponentModifier(Java20Parser::RecordComponentModifierContext *context) = 0;

    virtual std::any visitRecordBody(Java20Parser::RecordBodyContext *context) = 0;

    virtual std::any visitRecordBodyDeclaration(Java20Parser::RecordBodyDeclarationContext *context) = 0;

    virtual std::any visitCompactConstructorDeclaration(Java20Parser::CompactConstructorDeclarationContext *context) = 0;

    virtual std::any visitInterfaceDeclaration(Java20Parser::InterfaceDeclarationContext *context) = 0;

    virtual std::any visitNormalInterfaceDeclaration(Java20Parser::NormalInterfaceDeclarationContext *context) = 0;

    virtual std::any visitInterfaceModifier(Java20Parser::InterfaceModifierContext *context) = 0;

    virtual std::any visitInterfaceExtends(Java20Parser::InterfaceExtendsContext *context) = 0;

    virtual std::any visitInterfacePermits(Java20Parser::InterfacePermitsContext *context) = 0;

    virtual std::any visitInterfaceBody(Java20Parser::InterfaceBodyContext *context) = 0;

    virtual std::any visitInterfaceMemberDeclaration(Java20Parser::InterfaceMemberDeclarationContext *context) = 0;

    virtual std::any visitConstantDeclaration(Java20Parser::ConstantDeclarationContext *context) = 0;

    virtual std::any visitConstantModifier(Java20Parser::ConstantModifierContext *context) = 0;

    virtual std::any visitInterfaceMethodDeclaration(Java20Parser::InterfaceMethodDeclarationContext *context) = 0;

    virtual std::any visitInterfaceMethodModifier(Java20Parser::InterfaceMethodModifierContext *context) = 0;

    virtual std::any visitAnnotationInterfaceDeclaration(Java20Parser::AnnotationInterfaceDeclarationContext *context) = 0;

    virtual std::any visitAnnotationInterfaceBody(Java20Parser::AnnotationInterfaceBodyContext *context) = 0;

    virtual std::any visitAnnotationInterfaceMemberDeclaration(Java20Parser::AnnotationInterfaceMemberDeclarationContext *context) = 0;

    virtual std::any visitAnnotationInterfaceElementDeclaration(Java20Parser::AnnotationInterfaceElementDeclarationContext *context) = 0;

    virtual std::any visitAnnotationInterfaceElementModifier(Java20Parser::AnnotationInterfaceElementModifierContext *context) = 0;

    virtual std::any visitDefaultValue(Java20Parser::DefaultValueContext *context) = 0;

    virtual std::any visitAnnotation(Java20Parser::AnnotationContext *context) = 0;

    virtual std::any visitNormalAnnotation(Java20Parser::NormalAnnotationContext *context) = 0;

    virtual std::any visitElementValuePairList(Java20Parser::ElementValuePairListContext *context) = 0;

    virtual std::any visitElementValuePair(Java20Parser::ElementValuePairContext *context) = 0;

    virtual std::any visitElementValue(Java20Parser::ElementValueContext *context) = 0;

    virtual std::any visitElementValueArrayInitializer(Java20Parser::ElementValueArrayInitializerContext *context) = 0;

    virtual std::any visitElementValueList(Java20Parser::ElementValueListContext *context) = 0;

    virtual std::any visitMarkerAnnotation(Java20Parser::MarkerAnnotationContext *context) = 0;

    virtual std::any visitSingleElementAnnotation(Java20Parser::SingleElementAnnotationContext *context) = 0;

    virtual std::any visitArrayInitializer(Java20Parser::ArrayInitializerContext *context) = 0;

    virtual std::any visitVariableInitializerList(Java20Parser::VariableInitializerListContext *context) = 0;

    virtual std::any visitBlock(Java20Parser::BlockContext *context) = 0;

    virtual std::any visitBlockStatements(Java20Parser::BlockStatementsContext *context) = 0;

    virtual std::any visitBlockStatement(Java20Parser::BlockStatementContext *context) = 0;

    virtual std::any visitLocalClassOrInterfaceDeclaration(Java20Parser::LocalClassOrInterfaceDeclarationContext *context) = 0;

    virtual std::any visitLocalVariableDeclaration(Java20Parser::LocalVariableDeclarationContext *context) = 0;

    virtual std::any visitLocalVariableType(Java20Parser::LocalVariableTypeContext *context) = 0;

    virtual std::any visitLocalVariableDeclarationStatement(Java20Parser::LocalVariableDeclarationStatementContext *context) = 0;

    virtual std::any visitStatement(Java20Parser::StatementContext *context) = 0;

    virtual std::any visitStatementNoShortIf(Java20Parser::StatementNoShortIfContext *context) = 0;

    virtual std::any visitStatementWithoutTrailingSubstatement(Java20Parser::StatementWithoutTrailingSubstatementContext *context) = 0;

    virtual std::any visitEmptyStatement_(Java20Parser::EmptyStatement_Context *context) = 0;

    virtual std::any visitLabeledStatement(Java20Parser::LabeledStatementContext *context) = 0;

    virtual std::any visitLabeledStatementNoShortIf(Java20Parser::LabeledStatementNoShortIfContext *context) = 0;

    virtual std::any visitExpressionStatement(Java20Parser::ExpressionStatementContext *context) = 0;

    virtual std::any visitStatementExpression(Java20Parser::StatementExpressionContext *context) = 0;

    virtual std::any visitIfThenStatement(Java20Parser::IfThenStatementContext *context) = 0;

    virtual std::any visitIfThenElseStatement(Java20Parser::IfThenElseStatementContext *context) = 0;

    virtual std::any visitIfThenElseStatementNoShortIf(Java20Parser::IfThenElseStatementNoShortIfContext *context) = 0;

    virtual std::any visitAssertStatement(Java20Parser::AssertStatementContext *context) = 0;

    virtual std::any visitSwitchStatement(Java20Parser::SwitchStatementContext *context) = 0;

    virtual std::any visitSwitchBlock(Java20Parser::SwitchBlockContext *context) = 0;

    virtual std::any visitSwitchRule(Java20Parser::SwitchRuleContext *context) = 0;

    virtual std::any visitSwitchBlockStatementGroup(Java20Parser::SwitchBlockStatementGroupContext *context) = 0;

    virtual std::any visitSwitchLabel(Java20Parser::SwitchLabelContext *context) = 0;

    virtual std::any visitCaseConstant(Java20Parser::CaseConstantContext *context) = 0;

    virtual std::any visitWhileStatement(Java20Parser::WhileStatementContext *context) = 0;

    virtual std::any visitWhileStatementNoShortIf(Java20Parser::WhileStatementNoShortIfContext *context) = 0;

    virtual std::any visitDoStatement(Java20Parser::DoStatementContext *context) = 0;

    virtual std::any visitForStatement(Java20Parser::ForStatementContext *context) = 0;

    virtual std::any visitForStatementNoShortIf(Java20Parser::ForStatementNoShortIfContext *context) = 0;

    virtual std::any visitBasicForStatement(Java20Parser::BasicForStatementContext *context) = 0;

    virtual std::any visitBasicForStatementNoShortIf(Java20Parser::BasicForStatementNoShortIfContext *context) = 0;

    virtual std::any visitForInit(Java20Parser::ForInitContext *context) = 0;

    virtual std::any visitForUpdate(Java20Parser::ForUpdateContext *context) = 0;

    virtual std::any visitStatementExpressionList(Java20Parser::StatementExpressionListContext *context) = 0;

    virtual std::any visitEnhancedForStatement(Java20Parser::EnhancedForStatementContext *context) = 0;

    virtual std::any visitEnhancedForStatementNoShortIf(Java20Parser::EnhancedForStatementNoShortIfContext *context) = 0;

    virtual std::any visitBreakStatement(Java20Parser::BreakStatementContext *context) = 0;

    virtual std::any visitContinueStatement(Java20Parser::ContinueStatementContext *context) = 0;

    virtual std::any visitReturnStatement(Java20Parser::ReturnStatementContext *context) = 0;

    virtual std::any visitThrowStatement(Java20Parser::ThrowStatementContext *context) = 0;

    virtual std::any visitSynchronizedStatement(Java20Parser::SynchronizedStatementContext *context) = 0;

    virtual std::any visitTryStatement(Java20Parser::TryStatementContext *context) = 0;

    virtual std::any visitCatches(Java20Parser::CatchesContext *context) = 0;

    virtual std::any visitCatchClause(Java20Parser::CatchClauseContext *context) = 0;

    virtual std::any visitCatchFormalParameter(Java20Parser::CatchFormalParameterContext *context) = 0;

    virtual std::any visitCatchType(Java20Parser::CatchTypeContext *context) = 0;

    virtual std::any visitFinallyBlock(Java20Parser::FinallyBlockContext *context) = 0;

    virtual std::any visitTryWithResourcesStatement(Java20Parser::TryWithResourcesStatementContext *context) = 0;

    virtual std::any visitResourceSpecification(Java20Parser::ResourceSpecificationContext *context) = 0;

    virtual std::any visitResourceList(Java20Parser::ResourceListContext *context) = 0;

    virtual std::any visitResource(Java20Parser::ResourceContext *context) = 0;

    virtual std::any visitVariableAccess(Java20Parser::VariableAccessContext *context) = 0;

    virtual std::any visitYieldStatement(Java20Parser::YieldStatementContext *context) = 0;

    virtual std::any visitPattern(Java20Parser::PatternContext *context) = 0;

    virtual std::any visitTypePattern(Java20Parser::TypePatternContext *context) = 0;

    virtual std::any visitExpression(Java20Parser::ExpressionContext *context) = 0;

    virtual std::any visitPrimary(Java20Parser::PrimaryContext *context) = 0;

    virtual std::any visitPrimaryNoNewArray(Java20Parser::PrimaryNoNewArrayContext *context) = 0;

    virtual std::any visitPNNA(Java20Parser::PNNAContext *context) = 0;

    virtual std::any visitClassLiteral(Java20Parser::ClassLiteralContext *context) = 0;

    virtual std::any visitClassInstanceCreationExpression(Java20Parser::ClassInstanceCreationExpressionContext *context) = 0;

    virtual std::any visitUnqualifiedClassInstanceCreationExpression(Java20Parser::UnqualifiedClassInstanceCreationExpressionContext *context) = 0;

    virtual std::any visitClassOrInterfaceTypeToInstantiate(Java20Parser::ClassOrInterfaceTypeToInstantiateContext *context) = 0;

    virtual std::any visitTypeArgumentsOrDiamond(Java20Parser::TypeArgumentsOrDiamondContext *context) = 0;

    virtual std::any visitArrayCreationExpression(Java20Parser::ArrayCreationExpressionContext *context) = 0;

    virtual std::any visitArrayCreationExpressionWithoutInitializer(Java20Parser::ArrayCreationExpressionWithoutInitializerContext *context) = 0;

    virtual std::any visitArrayCreationExpressionWithInitializer(Java20Parser::ArrayCreationExpressionWithInitializerContext *context) = 0;

    virtual std::any visitDimExprs(Java20Parser::DimExprsContext *context) = 0;

    virtual std::any visitDimExpr(Java20Parser::DimExprContext *context) = 0;

    virtual std::any visitArrayAccess(Java20Parser::ArrayAccessContext *context) = 0;

    virtual std::any visitFieldAccess(Java20Parser::FieldAccessContext *context) = 0;

    virtual std::any visitMethodInvocation(Java20Parser::MethodInvocationContext *context) = 0;

    virtual std::any visitArgumentList(Java20Parser::ArgumentListContext *context) = 0;

    virtual std::any visitMethodReference(Java20Parser::MethodReferenceContext *context) = 0;

    virtual std::any visitPostfixExpression(Java20Parser::PostfixExpressionContext *context) = 0;

    virtual std::any visitPfE(Java20Parser::PfEContext *context) = 0;

    virtual std::any visitPostIncrementExpression(Java20Parser::PostIncrementExpressionContext *context) = 0;

    virtual std::any visitPostDecrementExpression(Java20Parser::PostDecrementExpressionContext *context) = 0;

    virtual std::any visitUnaryExpression(Java20Parser::UnaryExpressionContext *context) = 0;

    virtual std::any visitPreIncrementExpression(Java20Parser::PreIncrementExpressionContext *context) = 0;

    virtual std::any visitPreDecrementExpression(Java20Parser::PreDecrementExpressionContext *context) = 0;

    virtual std::any visitUnaryExpressionNotPlusMinus(Java20Parser::UnaryExpressionNotPlusMinusContext *context) = 0;

    virtual std::any visitCastExpression(Java20Parser::CastExpressionContext *context) = 0;

    virtual std::any visitMultiplicativeExpression(Java20Parser::MultiplicativeExpressionContext *context) = 0;

    virtual std::any visitAdditiveExpression(Java20Parser::AdditiveExpressionContext *context) = 0;

    virtual std::any visitShiftExpression(Java20Parser::ShiftExpressionContext *context) = 0;

    virtual std::any visitRelationalExpression(Java20Parser::RelationalExpressionContext *context) = 0;

    virtual std::any visitEqualityExpression(Java20Parser::EqualityExpressionContext *context) = 0;

    virtual std::any visitAndExpression(Java20Parser::AndExpressionContext *context) = 0;

    virtual std::any visitExclusiveOrExpression(Java20Parser::ExclusiveOrExpressionContext *context) = 0;

    virtual std::any visitInclusiveOrExpression(Java20Parser::InclusiveOrExpressionContext *context) = 0;

    virtual std::any visitConditionalAndExpression(Java20Parser::ConditionalAndExpressionContext *context) = 0;

    virtual std::any visitConditionalOrExpression(Java20Parser::ConditionalOrExpressionContext *context) = 0;

    virtual std::any visitConditionalExpression(Java20Parser::ConditionalExpressionContext *context) = 0;

    virtual std::any visitAssignmentExpression(Java20Parser::AssignmentExpressionContext *context) = 0;

    virtual std::any visitAssignment(Java20Parser::AssignmentContext *context) = 0;

    virtual std::any visitLeftHandSide(Java20Parser::LeftHandSideContext *context) = 0;

    virtual std::any visitAssignmentOperator(Java20Parser::AssignmentOperatorContext *context) = 0;

    virtual std::any visitLambdaExpression(Java20Parser::LambdaExpressionContext *context) = 0;

    virtual std::any visitLambdaParameters(Java20Parser::LambdaParametersContext *context) = 0;

    virtual std::any visitLambdaParameterList(Java20Parser::LambdaParameterListContext *context) = 0;

    virtual std::any visitLambdaParameter(Java20Parser::LambdaParameterContext *context) = 0;

    virtual std::any visitLambdaParameterType(Java20Parser::LambdaParameterTypeContext *context) = 0;

    virtual std::any visitLambdaBody(Java20Parser::LambdaBodyContext *context) = 0;

    virtual std::any visitSwitchExpression(Java20Parser::SwitchExpressionContext *context) = 0;

    virtual std::any visitConstantExpression(Java20Parser::ConstantExpressionContext *context) = 0;


};

