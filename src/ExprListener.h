
// Generated from Expr.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "ExprParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by ExprParser.
 */
class  ExprListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProg(ExprParser::ProgContext *ctx) = 0;
  virtual void exitProg(ExprParser::ProgContext *ctx) = 0;

  virtual void enterIntVal(ExprParser::IntValContext *ctx) = 0;
  virtual void exitIntVal(ExprParser::IntValContext *ctx) = 0;

  virtual void enterMod(ExprParser::ModContext *ctx) = 0;
  virtual void exitMod(ExprParser::ModContext *ctx) = 0;

  virtual void enterMult(ExprParser::MultContext *ctx) = 0;
  virtual void exitMult(ExprParser::MultContext *ctx) = 0;

  virtual void enterNon(ExprParser::NonContext *ctx) = 0;
  virtual void exitNon(ExprParser::NonContext *ctx) = 0;

  virtual void enterGetTabVal(ExprParser::GetTabValContext *ctx) = 0;
  virtual void exitGetTabVal(ExprParser::GetTabValContext *ctx) = 0;

  virtual void enterAffectation(ExprParser::AffectationContext *ctx) = 0;
  virtual void exitAffectation(ExprParser::AffectationContext *ctx) = 0;

  virtual void enterGetVarVal(ExprParser::GetVarValContext *ctx) = 0;
  virtual void exitGetVarVal(ExprParser::GetVarValContext *ctx) = 0;

  virtual void enterDiv(ExprParser::DivContext *ctx) = 0;
  virtual void exitDiv(ExprParser::DivContext *ctx) = 0;

  virtual void enterNot(ExprParser::NotContext *ctx) = 0;
  virtual void exitNot(ExprParser::NotContext *ctx) = 0;

  virtual void enterAnd(ExprParser::AndContext *ctx) = 0;
  virtual void exitAnd(ExprParser::AndContext *ctx) = 0;

  virtual void enterXor(ExprParser::XorContext *ctx) = 0;
  virtual void exitXor(ExprParser::XorContext *ctx) = 0;

  virtual void enterRightShift(ExprParser::RightShiftContext *ctx) = 0;
  virtual void exitRightShift(ExprParser::RightShiftContext *ctx) = 0;

  virtual void enterLeftShift(ExprParser::LeftShiftContext *ctx) = 0;
  virtual void exitLeftShift(ExprParser::LeftShiftContext *ctx) = 0;

  virtual void enterPar(ExprParser::ParContext *ctx) = 0;
  virtual void exitPar(ExprParser::ParContext *ctx) = 0;

  virtual void enterAdd(ExprParser::AddContext *ctx) = 0;
  virtual void exitAdd(ExprParser::AddContext *ctx) = 0;

  virtual void enterEgal(ExprParser::EgalContext *ctx) = 0;
  virtual void exitEgal(ExprParser::EgalContext *ctx) = 0;

  virtual void enterOr(ExprParser::OrContext *ctx) = 0;
  virtual void exitOr(ExprParser::OrContext *ctx) = 0;

  virtual void enterSupEgal(ExprParser::SupEgalContext *ctx) = 0;
  virtual void exitSupEgal(ExprParser::SupEgalContext *ctx) = 0;

  virtual void enterOu(ExprParser::OuContext *ctx) = 0;
  virtual void exitOu(ExprParser::OuContext *ctx) = 0;

  virtual void enterCharVal(ExprParser::CharValContext *ctx) = 0;
  virtual void exitCharVal(ExprParser::CharValContext *ctx) = 0;

  virtual void enterStrictSup(ExprParser::StrictSupContext *ctx) = 0;
  virtual void exitStrictSup(ExprParser::StrictSupContext *ctx) = 0;

  virtual void enterDiff(ExprParser::DiffContext *ctx) = 0;
  virtual void exitDiff(ExprParser::DiffContext *ctx) = 0;

  virtual void enterEt(ExprParser::EtContext *ctx) = 0;
  virtual void exitEt(ExprParser::EtContext *ctx) = 0;

  virtual void enterInfEgal(ExprParser::InfEgalContext *ctx) = 0;
  virtual void exitInfEgal(ExprParser::InfEgalContext *ctx) = 0;

  virtual void enterAppelFonction(ExprParser::AppelFonctionContext *ctx) = 0;
  virtual void exitAppelFonction(ExprParser::AppelFonctionContext *ctx) = 0;

  virtual void enterComma(ExprParser::CommaContext *ctx) = 0;
  virtual void exitComma(ExprParser::CommaContext *ctx) = 0;

  virtual void enterNotExpr(ExprParser::NotExprContext *ctx) = 0;
  virtual void exitNotExpr(ExprParser::NotExprContext *ctx) = 0;

  virtual void enterMoins(ExprParser::MoinsContext *ctx) = 0;
  virtual void exitMoins(ExprParser::MoinsContext *ctx) = 0;

  virtual void enterStrictInf(ExprParser::StrictInfContext *ctx) = 0;
  virtual void exitStrictInf(ExprParser::StrictInfContext *ctx) = 0;

  virtual void enterChar(ExprParser::CharContext *ctx) = 0;
  virtual void exitChar(ExprParser::CharContext *ctx) = 0;

  virtual void enterInt32_t(ExprParser::Int32_tContext *ctx) = 0;
  virtual void exitInt32_t(ExprParser::Int32_tContext *ctx) = 0;

  virtual void enterInt64_t(ExprParser::Int64_tContext *ctx) = 0;
  virtual void exitInt64_t(ExprParser::Int64_tContext *ctx) = 0;

  virtual void enterAffExpr(ExprParser::AffExprContext *ctx) = 0;
  virtual void exitAffExpr(ExprParser::AffExprContext *ctx) = 0;

  virtual void enterAffExprTableau(ExprParser::AffExprTableauContext *ctx) = 0;
  virtual void exitAffExprTableau(ExprParser::AffExprTableauContext *ctx) = 0;

  virtual void enterPostIncrement(ExprParser::PostIncrementContext *ctx) = 0;
  virtual void exitPostIncrement(ExprParser::PostIncrementContext *ctx) = 0;

  virtual void enterPreIncrement(ExprParser::PreIncrementContext *ctx) = 0;
  virtual void exitPreIncrement(ExprParser::PreIncrementContext *ctx) = 0;

  virtual void enterPostDecrement(ExprParser::PostDecrementContext *ctx) = 0;
  virtual void exitPostDecrement(ExprParser::PostDecrementContext *ctx) = 0;

  virtual void enterPreDecrement(ExprParser::PreDecrementContext *ctx) = 0;
  virtual void exitPreDecrement(ExprParser::PreDecrementContext *ctx) = 0;

  virtual void enterOppose(ExprParser::OpposeContext *ctx) = 0;
  virtual void exitOppose(ExprParser::OpposeContext *ctx) = 0;

  virtual void enterPlusEgal(ExprParser::PlusEgalContext *ctx) = 0;
  virtual void exitPlusEgal(ExprParser::PlusEgalContext *ctx) = 0;

  virtual void enterMoinsEgal(ExprParser::MoinsEgalContext *ctx) = 0;
  virtual void exitMoinsEgal(ExprParser::MoinsEgalContext *ctx) = 0;

  virtual void enterMultEgal(ExprParser::MultEgalContext *ctx) = 0;
  virtual void exitMultEgal(ExprParser::MultEgalContext *ctx) = 0;

  virtual void enterDivEgal(ExprParser::DivEgalContext *ctx) = 0;
  virtual void exitDivEgal(ExprParser::DivEgalContext *ctx) = 0;

  virtual void enterModEgal(ExprParser::ModEgalContext *ctx) = 0;
  virtual void exitModEgal(ExprParser::ModEgalContext *ctx) = 0;

  virtual void enterAndEgal(ExprParser::AndEgalContext *ctx) = 0;
  virtual void exitAndEgal(ExprParser::AndEgalContext *ctx) = 0;

  virtual void enterOrEgal(ExprParser::OrEgalContext *ctx) = 0;
  virtual void exitOrEgal(ExprParser::OrEgalContext *ctx) = 0;

  virtual void enterXorEgal(ExprParser::XorEgalContext *ctx) = 0;
  virtual void exitXorEgal(ExprParser::XorEgalContext *ctx) = 0;

  virtual void enterIf(ExprParser::IfContext *ctx) = 0;
  virtual void exitIf(ExprParser::IfContext *ctx) = 0;

  virtual void enterWhile(ExprParser::WhileContext *ctx) = 0;
  virtual void exitWhile(ExprParser::WhileContext *ctx) = 0;

  virtual void enterBloc(ExprParser::BlocContext *ctx) = 0;
  virtual void exitBloc(ExprParser::BlocContext *ctx) = 0;

  virtual void enterInstruction(ExprParser::InstructionContext *ctx) = 0;
  virtual void exitInstruction(ExprParser::InstructionContext *ctx) = 0;

  virtual void enterDecTableau(ExprParser::DecTableauContext *ctx) = 0;
  virtual void exitDecTableau(ExprParser::DecTableauContext *ctx) = 0;

  virtual void enterDecVariable(ExprParser::DecVariableContext *ctx) = 0;
  virtual void exitDecVariable(ExprParser::DecVariableContext *ctx) = 0;

  virtual void enterDecVariableMultiple(ExprParser::DecVariableMultipleContext *ctx) = 0;
  virtual void exitDecVariableMultiple(ExprParser::DecVariableMultipleContext *ctx) = 0;

  virtual void enterInstrDecl(ExprParser::InstrDeclContext *ctx) = 0;
  virtual void exitInstrDecl(ExprParser::InstrDeclContext *ctx) = 0;

  virtual void enterInstrPutchar(ExprParser::InstrPutcharContext *ctx) = 0;
  virtual void exitInstrPutchar(ExprParser::InstrPutcharContext *ctx) = 0;

  virtual void enterInstrGetchar(ExprParser::InstrGetcharContext *ctx) = 0;
  virtual void exitInstrGetchar(ExprParser::InstrGetcharContext *ctx) = 0;

  virtual void enterBreak(ExprParser::BreakContext *ctx) = 0;
  virtual void exitBreak(ExprParser::BreakContext *ctx) = 0;

  virtual void enterReturn(ExprParser::ReturnContext *ctx) = 0;
  virtual void exitReturn(ExprParser::ReturnContext *ctx) = 0;

  virtual void enterInstrExpr(ExprParser::InstrExprContext *ctx) = 0;
  virtual void exitInstrExpr(ExprParser::InstrExprContext *ctx) = 0;

  virtual void enterControle(ExprParser::ControleContext *ctx) = 0;
  virtual void exitControle(ExprParser::ControleContext *ctx) = 0;

  virtual void enterDefFonctionType(ExprParser::DefFonctionTypeContext *ctx) = 0;
  virtual void exitDefFonctionType(ExprParser::DefFonctionTypeContext *ctx) = 0;

  virtual void enterDefFonctionVoid(ExprParser::DefFonctionVoidContext *ctx) = 0;
  virtual void exitDefFonctionVoid(ExprParser::DefFonctionVoidContext *ctx) = 0;


};

