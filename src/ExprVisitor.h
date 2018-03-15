
// Generated from Expr.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "ExprParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by ExprParser.
 */
class  ExprVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by ExprParser.
   */
    virtual antlrcpp::Any visitProg(ExprParser::ProgContext *context) = 0;

    virtual antlrcpp::Any visitIntVal(ExprParser::IntValContext *context) = 0;

    virtual antlrcpp::Any visitMod(ExprParser::ModContext *context) = 0;

    virtual antlrcpp::Any visitMult(ExprParser::MultContext *context) = 0;

    virtual antlrcpp::Any visitNon(ExprParser::NonContext *context) = 0;

    virtual antlrcpp::Any visitGetTabVal(ExprParser::GetTabValContext *context) = 0;

    virtual antlrcpp::Any visitAffectation(ExprParser::AffectationContext *context) = 0;

    virtual antlrcpp::Any visitGetVarVal(ExprParser::GetVarValContext *context) = 0;

    virtual antlrcpp::Any visitDiv(ExprParser::DivContext *context) = 0;

    virtual antlrcpp::Any visitNot(ExprParser::NotContext *context) = 0;

    virtual antlrcpp::Any visitAnd(ExprParser::AndContext *context) = 0;

    virtual antlrcpp::Any visitXor(ExprParser::XorContext *context) = 0;

    virtual antlrcpp::Any visitRightShift(ExprParser::RightShiftContext *context) = 0;

    virtual antlrcpp::Any visitLeftShift(ExprParser::LeftShiftContext *context) = 0;

    virtual antlrcpp::Any visitPar(ExprParser::ParContext *context) = 0;

    virtual antlrcpp::Any visitAdd(ExprParser::AddContext *context) = 0;

    virtual antlrcpp::Any visitEgal(ExprParser::EgalContext *context) = 0;

    virtual antlrcpp::Any visitOr(ExprParser::OrContext *context) = 0;

    virtual antlrcpp::Any visitSupEgal(ExprParser::SupEgalContext *context) = 0;

    virtual antlrcpp::Any visitOu(ExprParser::OuContext *context) = 0;

    virtual antlrcpp::Any visitCharVal(ExprParser::CharValContext *context) = 0;

    virtual antlrcpp::Any visitStrictSup(ExprParser::StrictSupContext *context) = 0;

    virtual antlrcpp::Any visitDiff(ExprParser::DiffContext *context) = 0;

    virtual antlrcpp::Any visitEt(ExprParser::EtContext *context) = 0;

    virtual antlrcpp::Any visitInfEgal(ExprParser::InfEgalContext *context) = 0;

    virtual antlrcpp::Any visitAppelFonction(ExprParser::AppelFonctionContext *context) = 0;

    virtual antlrcpp::Any visitComma(ExprParser::CommaContext *context) = 0;

    virtual antlrcpp::Any visitNotExpr(ExprParser::NotExprContext *context) = 0;

    virtual antlrcpp::Any visitMoins(ExprParser::MoinsContext *context) = 0;

    virtual antlrcpp::Any visitStrictInf(ExprParser::StrictInfContext *context) = 0;

    virtual antlrcpp::Any visitChar(ExprParser::CharContext *context) = 0;

    virtual antlrcpp::Any visitInt32_t(ExprParser::Int32_tContext *context) = 0;

    virtual antlrcpp::Any visitInt64_t(ExprParser::Int64_tContext *context) = 0;

    virtual antlrcpp::Any visitAffExpr(ExprParser::AffExprContext *context) = 0;

    virtual antlrcpp::Any visitAffExprTableau(ExprParser::AffExprTableauContext *context) = 0;

    virtual antlrcpp::Any visitPostIncrement(ExprParser::PostIncrementContext *context) = 0;

    virtual antlrcpp::Any visitPreIncrement(ExprParser::PreIncrementContext *context) = 0;

    virtual antlrcpp::Any visitPostDecrement(ExprParser::PostDecrementContext *context) = 0;

    virtual antlrcpp::Any visitPreDecrement(ExprParser::PreDecrementContext *context) = 0;

    virtual antlrcpp::Any visitOppose(ExprParser::OpposeContext *context) = 0;

    virtual antlrcpp::Any visitPlusEgal(ExprParser::PlusEgalContext *context) = 0;

    virtual antlrcpp::Any visitMoinsEgal(ExprParser::MoinsEgalContext *context) = 0;

    virtual antlrcpp::Any visitMultEgal(ExprParser::MultEgalContext *context) = 0;

    virtual antlrcpp::Any visitDivEgal(ExprParser::DivEgalContext *context) = 0;

    virtual antlrcpp::Any visitModEgal(ExprParser::ModEgalContext *context) = 0;

    virtual antlrcpp::Any visitAndEgal(ExprParser::AndEgalContext *context) = 0;

    virtual antlrcpp::Any visitOrEgal(ExprParser::OrEgalContext *context) = 0;

    virtual antlrcpp::Any visitXorEgal(ExprParser::XorEgalContext *context) = 0;

    virtual antlrcpp::Any visitIf(ExprParser::IfContext *context) = 0;

    virtual antlrcpp::Any visitWhile(ExprParser::WhileContext *context) = 0;

    virtual antlrcpp::Any visitBloc(ExprParser::BlocContext *context) = 0;

    virtual antlrcpp::Any visitInstruction(ExprParser::InstructionContext *context) = 0;

    virtual antlrcpp::Any visitDecTableau(ExprParser::DecTableauContext *context) = 0;

    virtual antlrcpp::Any visitDecVariable(ExprParser::DecVariableContext *context) = 0;

    virtual antlrcpp::Any visitDecVariableMultiple(ExprParser::DecVariableMultipleContext *context) = 0;

    virtual antlrcpp::Any visitInstrDecl(ExprParser::InstrDeclContext *context) = 0;

    virtual antlrcpp::Any visitInstrPutchar(ExprParser::InstrPutcharContext *context) = 0;

    virtual antlrcpp::Any visitInstrGetchar(ExprParser::InstrGetcharContext *context) = 0;

    virtual antlrcpp::Any visitBreak(ExprParser::BreakContext *context) = 0;

    virtual antlrcpp::Any visitReturn(ExprParser::ReturnContext *context) = 0;

    virtual antlrcpp::Any visitInstrExpr(ExprParser::InstrExprContext *context) = 0;

    virtual antlrcpp::Any visitControle(ExprParser::ControleContext *context) = 0;

    virtual antlrcpp::Any visitDefFonctionType(ExprParser::DefFonctionTypeContext *context) = 0;

    virtual antlrcpp::Any visitDefFonctionVoid(ExprParser::DefFonctionVoidContext *context) = 0;

    virtual antlrcpp::Any visitAppelFonctionExpression(ExprParser::AppelFonctionExpressionContext *context) = 0;


};

