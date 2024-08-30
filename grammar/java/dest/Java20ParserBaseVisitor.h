
// Generated from ./Java20Parser.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "Java20ParserVisitor.h"


/**
 * This class provides an empty implementation of Java20ParserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  Java20ParserBaseVisitor : public Java20ParserVisitor {
public:

  virtual std::any visitStart_(Java20Parser::Start_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLiteral(Java20Parser::LiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeIdentifier(Java20Parser::TypeIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnqualifiedMethodIdentifier(Java20Parser::UnqualifiedMethodIdentifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimitiveType(Java20Parser::PrimitiveTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNumericType(Java20Parser::NumericTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntegralType(Java20Parser::IntegralTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFloatingPointType(Java20Parser::FloatingPointTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReferenceType(Java20Parser::ReferenceTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCoit(Java20Parser::CoitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassOrInterfaceType(Java20Parser::ClassOrInterfaceTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassType(Java20Parser::ClassTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterfaceType(Java20Parser::InterfaceTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeVariable(Java20Parser::TypeVariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayType(Java20Parser::ArrayTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDims(Java20Parser::DimsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeParameter(Java20Parser::TypeParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeParameterModifier(Java20Parser::TypeParameterModifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeBound(Java20Parser::TypeBoundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdditionalBound(Java20Parser::AdditionalBoundContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeArguments(Java20Parser::TypeArgumentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeArgumentList(Java20Parser::TypeArgumentListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeArgument(Java20Parser::TypeArgumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWildcard(Java20Parser::WildcardContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWildcardBounds(Java20Parser::WildcardBoundsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModuleName(Java20Parser::ModuleNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPackageName(Java20Parser::PackageNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeName(Java20Parser::TypeNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPackageOrTypeName(Java20Parser::PackageOrTypeNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionName(Java20Parser::ExpressionNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMethodName(Java20Parser::MethodNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAmbiguousName(Java20Parser::AmbiguousNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompilationUnit(Java20Parser::CompilationUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOrdinaryCompilationUnit(Java20Parser::OrdinaryCompilationUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModularCompilationUnit(Java20Parser::ModularCompilationUnitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPackageDeclaration(Java20Parser::PackageDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPackageModifier(Java20Parser::PackageModifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitImportDeclaration(Java20Parser::ImportDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSingleTypeImportDeclaration(Java20Parser::SingleTypeImportDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeImportOnDemandDeclaration(Java20Parser::TypeImportOnDemandDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSingleStaticImportDeclaration(Java20Parser::SingleStaticImportDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStaticImportOnDemandDeclaration(Java20Parser::StaticImportOnDemandDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTopLevelClassOrInterfaceDeclaration(Java20Parser::TopLevelClassOrInterfaceDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModuleDeclaration(Java20Parser::ModuleDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitModuleDirective(Java20Parser::ModuleDirectiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRequiresModifier(Java20Parser::RequiresModifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassDeclaration(Java20Parser::ClassDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNormalClassDeclaration(Java20Parser::NormalClassDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassModifier(Java20Parser::ClassModifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeParameters(Java20Parser::TypeParametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeParameterList(Java20Parser::TypeParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassExtends(Java20Parser::ClassExtendsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassImplements(Java20Parser::ClassImplementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterfaceTypeList(Java20Parser::InterfaceTypeListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassPermits(Java20Parser::ClassPermitsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassBody(Java20Parser::ClassBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassBodyDeclaration(Java20Parser::ClassBodyDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassMemberDeclaration(Java20Parser::ClassMemberDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFieldDeclaration(Java20Parser::FieldDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFieldModifier(Java20Parser::FieldModifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableDeclaratorList(Java20Parser::VariableDeclaratorListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableDeclarator(Java20Parser::VariableDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableDeclaratorId(Java20Parser::VariableDeclaratorIdContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableInitializer(Java20Parser::VariableInitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnannType(Java20Parser::UnannTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnannPrimitiveType(Java20Parser::UnannPrimitiveTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnannReferenceType(Java20Parser::UnannReferenceTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnannClassOrInterfaceType(Java20Parser::UnannClassOrInterfaceTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUCOIT(Java20Parser::UCOITContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnannClassType(Java20Parser::UnannClassTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnannInterfaceType(Java20Parser::UnannInterfaceTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnannTypeVariable(Java20Parser::UnannTypeVariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnannArrayType(Java20Parser::UnannArrayTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMethodDeclaration(Java20Parser::MethodDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMethodModifier(Java20Parser::MethodModifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMethodHeader(Java20Parser::MethodHeaderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitResult(Java20Parser::ResultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMethodDeclarator(Java20Parser::MethodDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReceiverParameter(Java20Parser::ReceiverParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFormalParameterList(Java20Parser::FormalParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFormalParameter(Java20Parser::FormalParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableArityParameter(Java20Parser::VariableArityParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableModifier(Java20Parser::VariableModifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThrowsT(Java20Parser::ThrowsTContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExceptionTypeList(Java20Parser::ExceptionTypeListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExceptionType(Java20Parser::ExceptionTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMethodBody(Java20Parser::MethodBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInstanceInitializer(Java20Parser::InstanceInitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStaticInitializer(Java20Parser::StaticInitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstructorDeclaration(Java20Parser::ConstructorDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstructorModifier(Java20Parser::ConstructorModifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstructorDeclarator(Java20Parser::ConstructorDeclaratorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSimpleTypeName(Java20Parser::SimpleTypeNameContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstructorBody(Java20Parser::ConstructorBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExplicitConstructorInvocation(Java20Parser::ExplicitConstructorInvocationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumDeclaration(Java20Parser::EnumDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumBody(Java20Parser::EnumBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumConstantList(Java20Parser::EnumConstantListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumConstant(Java20Parser::EnumConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumConstantModifier(Java20Parser::EnumConstantModifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnumBodyDeclarations(Java20Parser::EnumBodyDeclarationsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRecordDeclaration(Java20Parser::RecordDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRecordHeader(Java20Parser::RecordHeaderContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRecordComponentList(Java20Parser::RecordComponentListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRecordComponent(Java20Parser::RecordComponentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableArityRecordComponent(Java20Parser::VariableArityRecordComponentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRecordComponentModifier(Java20Parser::RecordComponentModifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRecordBody(Java20Parser::RecordBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRecordBodyDeclaration(Java20Parser::RecordBodyDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCompactConstructorDeclaration(Java20Parser::CompactConstructorDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterfaceDeclaration(Java20Parser::InterfaceDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNormalInterfaceDeclaration(Java20Parser::NormalInterfaceDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterfaceModifier(Java20Parser::InterfaceModifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterfaceExtends(Java20Parser::InterfaceExtendsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterfacePermits(Java20Parser::InterfacePermitsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterfaceBody(Java20Parser::InterfaceBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterfaceMemberDeclaration(Java20Parser::InterfaceMemberDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstantDeclaration(Java20Parser::ConstantDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstantModifier(Java20Parser::ConstantModifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterfaceMethodDeclaration(Java20Parser::InterfaceMethodDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInterfaceMethodModifier(Java20Parser::InterfaceMethodModifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAnnotationInterfaceDeclaration(Java20Parser::AnnotationInterfaceDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAnnotationInterfaceBody(Java20Parser::AnnotationInterfaceBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAnnotationInterfaceMemberDeclaration(Java20Parser::AnnotationInterfaceMemberDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAnnotationInterfaceElementDeclaration(Java20Parser::AnnotationInterfaceElementDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAnnotationInterfaceElementModifier(Java20Parser::AnnotationInterfaceElementModifierContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefaultValue(Java20Parser::DefaultValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAnnotation(Java20Parser::AnnotationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitNormalAnnotation(Java20Parser::NormalAnnotationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElementValuePairList(Java20Parser::ElementValuePairListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElementValuePair(Java20Parser::ElementValuePairContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElementValue(Java20Parser::ElementValueContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElementValueArrayInitializer(Java20Parser::ElementValueArrayInitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitElementValueList(Java20Parser::ElementValueListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMarkerAnnotation(Java20Parser::MarkerAnnotationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSingleElementAnnotation(Java20Parser::SingleElementAnnotationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayInitializer(Java20Parser::ArrayInitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableInitializerList(Java20Parser::VariableInitializerListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(Java20Parser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlockStatements(Java20Parser::BlockStatementsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlockStatement(Java20Parser::BlockStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLocalClassOrInterfaceDeclaration(Java20Parser::LocalClassOrInterfaceDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLocalVariableDeclaration(Java20Parser::LocalVariableDeclarationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLocalVariableType(Java20Parser::LocalVariableTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLocalVariableDeclarationStatement(Java20Parser::LocalVariableDeclarationStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(Java20Parser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatementNoShortIf(Java20Parser::StatementNoShortIfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatementWithoutTrailingSubstatement(Java20Parser::StatementWithoutTrailingSubstatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEmptyStatement_(Java20Parser::EmptyStatement_Context *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLabeledStatement(Java20Parser::LabeledStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLabeledStatementNoShortIf(Java20Parser::LabeledStatementNoShortIfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpressionStatement(Java20Parser::ExpressionStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatementExpression(Java20Parser::StatementExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfThenStatement(Java20Parser::IfThenStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfThenElseStatement(Java20Parser::IfThenElseStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIfThenElseStatementNoShortIf(Java20Parser::IfThenElseStatementNoShortIfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssertStatement(Java20Parser::AssertStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSwitchStatement(Java20Parser::SwitchStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSwitchBlock(Java20Parser::SwitchBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSwitchRule(Java20Parser::SwitchRuleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSwitchBlockStatementGroup(Java20Parser::SwitchBlockStatementGroupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSwitchLabel(Java20Parser::SwitchLabelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCaseConstant(Java20Parser::CaseConstantContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhileStatement(Java20Parser::WhileStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhileStatementNoShortIf(Java20Parser::WhileStatementNoShortIfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDoStatement(Java20Parser::DoStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForStatement(Java20Parser::ForStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForStatementNoShortIf(Java20Parser::ForStatementNoShortIfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBasicForStatement(Java20Parser::BasicForStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBasicForStatementNoShortIf(Java20Parser::BasicForStatementNoShortIfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForInit(Java20Parser::ForInitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForUpdate(Java20Parser::ForUpdateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatementExpressionList(Java20Parser::StatementExpressionListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnhancedForStatement(Java20Parser::EnhancedForStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEnhancedForStatementNoShortIf(Java20Parser::EnhancedForStatementNoShortIfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBreakStatement(Java20Parser::BreakStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitContinueStatement(Java20Parser::ContinueStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturnStatement(Java20Parser::ReturnStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitThrowStatement(Java20Parser::ThrowStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSynchronizedStatement(Java20Parser::SynchronizedStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTryStatement(Java20Parser::TryStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCatches(Java20Parser::CatchesContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCatchClause(Java20Parser::CatchClauseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCatchFormalParameter(Java20Parser::CatchFormalParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCatchType(Java20Parser::CatchTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFinallyBlock(Java20Parser::FinallyBlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTryWithResourcesStatement(Java20Parser::TryWithResourcesStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitResourceSpecification(Java20Parser::ResourceSpecificationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitResourceList(Java20Parser::ResourceListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitResource(Java20Parser::ResourceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVariableAccess(Java20Parser::VariableAccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitYieldStatement(Java20Parser::YieldStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPattern(Java20Parser::PatternContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypePattern(Java20Parser::TypePatternContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpression(Java20Parser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimary(Java20Parser::PrimaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPrimaryNoNewArray(Java20Parser::PrimaryNoNewArrayContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPNNA(Java20Parser::PNNAContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassLiteral(Java20Parser::ClassLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassInstanceCreationExpression(Java20Parser::ClassInstanceCreationExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnqualifiedClassInstanceCreationExpression(Java20Parser::UnqualifiedClassInstanceCreationExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassOrInterfaceTypeToInstantiate(Java20Parser::ClassOrInterfaceTypeToInstantiateContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeArgumentsOrDiamond(Java20Parser::TypeArgumentsOrDiamondContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayCreationExpression(Java20Parser::ArrayCreationExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayCreationExpressionWithoutInitializer(Java20Parser::ArrayCreationExpressionWithoutInitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayCreationExpressionWithInitializer(Java20Parser::ArrayCreationExpressionWithInitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDimExprs(Java20Parser::DimExprsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDimExpr(Java20Parser::DimExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArrayAccess(Java20Parser::ArrayAccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFieldAccess(Java20Parser::FieldAccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMethodInvocation(Java20Parser::MethodInvocationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgumentList(Java20Parser::ArgumentListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMethodReference(Java20Parser::MethodReferenceContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPostfixExpression(Java20Parser::PostfixExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPfE(Java20Parser::PfEContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPostIncrementExpression(Java20Parser::PostIncrementExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPostDecrementExpression(Java20Parser::PostDecrementExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryExpression(Java20Parser::UnaryExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPreIncrementExpression(Java20Parser::PreIncrementExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPreDecrementExpression(Java20Parser::PreDecrementExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnaryExpressionNotPlusMinus(Java20Parser::UnaryExpressionNotPlusMinusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCastExpression(Java20Parser::CastExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiplicativeExpression(Java20Parser::MultiplicativeExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdditiveExpression(Java20Parser::AdditiveExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitShiftExpression(Java20Parser::ShiftExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelationalExpression(Java20Parser::RelationalExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEqualityExpression(Java20Parser::EqualityExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAndExpression(Java20Parser::AndExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExclusiveOrExpression(Java20Parser::ExclusiveOrExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInclusiveOrExpression(Java20Parser::InclusiveOrExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConditionalAndExpression(Java20Parser::ConditionalAndExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConditionalOrExpression(Java20Parser::ConditionalOrExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConditionalExpression(Java20Parser::ConditionalExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignmentExpression(Java20Parser::AssignmentExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment(Java20Parser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLeftHandSide(Java20Parser::LeftHandSideContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignmentOperator(Java20Parser::AssignmentOperatorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLambdaExpression(Java20Parser::LambdaExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLambdaParameters(Java20Parser::LambdaParametersContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLambdaParameterList(Java20Parser::LambdaParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLambdaParameter(Java20Parser::LambdaParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLambdaParameterType(Java20Parser::LambdaParameterTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLambdaBody(Java20Parser::LambdaBodyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSwitchExpression(Java20Parser::SwitchExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstantExpression(Java20Parser::ConstantExpressionContext *ctx) override {
    return visitChildren(ctx);
  }


};

