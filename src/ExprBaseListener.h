
// Generated from Expr.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "ExprListener.h"


/**
 * This class provides an empty implementation of ExprListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  ExprBaseListener : public ExprListener {
public:

  virtual void enterProg(ExprParser::ProgContext * /*ctx*/) override { }
  virtual void exitProg(ExprParser::ProgContext * /*ctx*/) override { }

  virtual void enterIntVal(ExprParser::IntValContext * /*ctx*/) override { }
  virtual void exitIntVal(ExprParser::IntValContext * /*ctx*/) override { }

  virtual void enterMod(ExprParser::ModContext * /*ctx*/) override { }
  virtual void exitMod(ExprParser::ModContext * /*ctx*/) override { }

  virtual void enterMult(ExprParser::MultContext * /*ctx*/) override { }
  virtual void exitMult(ExprParser::MultContext * /*ctx*/) override { }

  virtual void enterNon(ExprParser::NonContext * /*ctx*/) override { }
  virtual void exitNon(ExprParser::NonContext * /*ctx*/) override { }

  virtual void enterGetTabVal(ExprParser::GetTabValContext * /*ctx*/) override { }
  virtual void exitGetTabVal(ExprParser::GetTabValContext * /*ctx*/) override { }

  virtual void enterAffectation(ExprParser::AffectationContext * /*ctx*/) override { }
  virtual void exitAffectation(ExprParser::AffectationContext * /*ctx*/) override { }

  virtual void enterGetVarVal(ExprParser::GetVarValContext * /*ctx*/) override { }
  virtual void exitGetVarVal(ExprParser::GetVarValContext * /*ctx*/) override { }

  virtual void enterDiv(ExprParser::DivContext * /*ctx*/) override { }
  virtual void exitDiv(ExprParser::DivContext * /*ctx*/) override { }

  virtual void enterNot(ExprParser::NotContext * /*ctx*/) override { }
  virtual void exitNot(ExprParser::NotContext * /*ctx*/) override { }

  virtual void enterAnd(ExprParser::AndContext * /*ctx*/) override { }
  virtual void exitAnd(ExprParser::AndContext * /*ctx*/) override { }

  virtual void enterXor(ExprParser::XorContext * /*ctx*/) override { }
  virtual void exitXor(ExprParser::XorContext * /*ctx*/) override { }

  virtual void enterRightShift(ExprParser::RightShiftContext * /*ctx*/) override { }
  virtual void exitRightShift(ExprParser::RightShiftContext * /*ctx*/) override { }

  virtual void enterLeftShift(ExprParser::LeftShiftContext * /*ctx*/) override { }
  virtual void exitLeftShift(ExprParser::LeftShiftContext * /*ctx*/) override { }

  virtual void enterPar(ExprParser::ParContext * /*ctx*/) override { }
  virtual void exitPar(ExprParser::ParContext * /*ctx*/) override { }

  virtual void enterAdd(ExprParser::AddContext * /*ctx*/) override { }
  virtual void exitAdd(ExprParser::AddContext * /*ctx*/) override { }

  virtual void enterEgal(ExprParser::EgalContext * /*ctx*/) override { }
  virtual void exitEgal(ExprParser::EgalContext * /*ctx*/) override { }

  virtual void enterOr(ExprParser::OrContext * /*ctx*/) override { }
  virtual void exitOr(ExprParser::OrContext * /*ctx*/) override { }

  virtual void enterSupEgal(ExprParser::SupEgalContext * /*ctx*/) override { }
  virtual void exitSupEgal(ExprParser::SupEgalContext * /*ctx*/) override { }

  virtual void enterOu(ExprParser::OuContext * /*ctx*/) override { }
  virtual void exitOu(ExprParser::OuContext * /*ctx*/) override { }

  virtual void enterCharVal(ExprParser::CharValContext * /*ctx*/) override { }
  virtual void exitCharVal(ExprParser::CharValContext * /*ctx*/) override { }

  virtual void enterStrictSup(ExprParser::StrictSupContext * /*ctx*/) override { }
  virtual void exitStrictSup(ExprParser::StrictSupContext * /*ctx*/) override { }

  virtual void enterDiff(ExprParser::DiffContext * /*ctx*/) override { }
  virtual void exitDiff(ExprParser::DiffContext * /*ctx*/) override { }

  virtual void enterEt(ExprParser::EtContext * /*ctx*/) override { }
  virtual void exitEt(ExprParser::EtContext * /*ctx*/) override { }

  virtual void enterInfEgal(ExprParser::InfEgalContext * /*ctx*/) override { }
  virtual void exitInfEgal(ExprParser::InfEgalContext * /*ctx*/) override { }

  virtual void enterAppelFonction(ExprParser::AppelFonctionContext * /*ctx*/) override { }
  virtual void exitAppelFonction(ExprParser::AppelFonctionContext * /*ctx*/) override { }

  virtual void enterComma(ExprParser::CommaContext * /*ctx*/) override { }
  virtual void exitComma(ExprParser::CommaContext * /*ctx*/) override { }

  virtual void enterNotExpr(ExprParser::NotExprContext * /*ctx*/) override { }
  virtual void exitNotExpr(ExprParser::NotExprContext * /*ctx*/) override { }

  virtual void enterMoins(ExprParser::MoinsContext * /*ctx*/) override { }
  virtual void exitMoins(ExprParser::MoinsContext * /*ctx*/) override { }

  virtual void enterStrictInf(ExprParser::StrictInfContext * /*ctx*/) override { }
  virtual void exitStrictInf(ExprParser::StrictInfContext * /*ctx*/) override { }

  virtual void enterChar(ExprParser::CharContext * /*ctx*/) override { }
  virtual void exitChar(ExprParser::CharContext * /*ctx*/) override { }

  virtual void enterInt32_t(ExprParser::Int32_tContext * /*ctx*/) override { }
  virtual void exitInt32_t(ExprParser::Int32_tContext * /*ctx*/) override { }

  virtual void enterInt64_t(ExprParser::Int64_tContext * /*ctx*/) override { }
  virtual void exitInt64_t(ExprParser::Int64_tContext * /*ctx*/) override { }

  virtual void enterAffExpr(ExprParser::AffExprContext * /*ctx*/) override { }
  virtual void exitAffExpr(ExprParser::AffExprContext * /*ctx*/) override { }

  virtual void enterAffExprTableau(ExprParser::AffExprTableauContext * /*ctx*/) override { }
  virtual void exitAffExprTableau(ExprParser::AffExprTableauContext * /*ctx*/) override { }

  virtual void enterPostIncrement(ExprParser::PostIncrementContext * /*ctx*/) override { }
  virtual void exitPostIncrement(ExprParser::PostIncrementContext * /*ctx*/) override { }

  virtual void enterPreIncrement(ExprParser::PreIncrementContext * /*ctx*/) override { }
  virtual void exitPreIncrement(ExprParser::PreIncrementContext * /*ctx*/) override { }

  virtual void enterPostDecrement(ExprParser::PostDecrementContext * /*ctx*/) override { }
  virtual void exitPostDecrement(ExprParser::PostDecrementContext * /*ctx*/) override { }

  virtual void enterPreDecrement(ExprParser::PreDecrementContext * /*ctx*/) override { }
  virtual void exitPreDecrement(ExprParser::PreDecrementContext * /*ctx*/) override { }

  virtual void enterOppose(ExprParser::OpposeContext * /*ctx*/) override { }
  virtual void exitOppose(ExprParser::OpposeContext * /*ctx*/) override { }

  virtual void enterPlusEgal(ExprParser::PlusEgalContext * /*ctx*/) override { }
  virtual void exitPlusEgal(ExprParser::PlusEgalContext * /*ctx*/) override { }

  virtual void enterMoinsEgal(ExprParser::MoinsEgalContext * /*ctx*/) override { }
  virtual void exitMoinsEgal(ExprParser::MoinsEgalContext * /*ctx*/) override { }

  virtual void enterMultEgal(ExprParser::MultEgalContext * /*ctx*/) override { }
  virtual void exitMultEgal(ExprParser::MultEgalContext * /*ctx*/) override { }

  virtual void enterDivEgal(ExprParser::DivEgalContext * /*ctx*/) override { }
  virtual void exitDivEgal(ExprParser::DivEgalContext * /*ctx*/) override { }

  virtual void enterModEgal(ExprParser::ModEgalContext * /*ctx*/) override { }
  virtual void exitModEgal(ExprParser::ModEgalContext * /*ctx*/) override { }

  virtual void enterAndEgal(ExprParser::AndEgalContext * /*ctx*/) override { }
  virtual void exitAndEgal(ExprParser::AndEgalContext * /*ctx*/) override { }

  virtual void enterOrEgal(ExprParser::OrEgalContext * /*ctx*/) override { }
  virtual void exitOrEgal(ExprParser::OrEgalContext * /*ctx*/) override { }

  virtual void enterXorEgal(ExprParser::XorEgalContext * /*ctx*/) override { }
  virtual void exitXorEgal(ExprParser::XorEgalContext * /*ctx*/) override { }

  virtual void enterIf(ExprParser::IfContext * /*ctx*/) override { }
  virtual void exitIf(ExprParser::IfContext * /*ctx*/) override { }

  virtual void enterWhile(ExprParser::WhileContext * /*ctx*/) override { }
  virtual void exitWhile(ExprParser::WhileContext * /*ctx*/) override { }

  virtual void enterBloc(ExprParser::BlocContext * /*ctx*/) override { }
  virtual void exitBloc(ExprParser::BlocContext * /*ctx*/) override { }

  virtual void enterInstruction(ExprParser::InstructionContext * /*ctx*/) override { }
  virtual void exitInstruction(ExprParser::InstructionContext * /*ctx*/) override { }

  virtual void enterDecTableau(ExprParser::DecTableauContext * /*ctx*/) override { }
  virtual void exitDecTableau(ExprParser::DecTableauContext * /*ctx*/) override { }

  virtual void enterDecVariable(ExprParser::DecVariableContext * /*ctx*/) override { }
  virtual void exitDecVariable(ExprParser::DecVariableContext * /*ctx*/) override { }

  virtual void enterDecVariableMultiple(ExprParser::DecVariableMultipleContext * /*ctx*/) override { }
  virtual void exitDecVariableMultiple(ExprParser::DecVariableMultipleContext * /*ctx*/) override { }

  virtual void enterInstrDecl(ExprParser::InstrDeclContext * /*ctx*/) override { }
  virtual void exitInstrDecl(ExprParser::InstrDeclContext * /*ctx*/) override { }

  virtual void enterInstrPutchar(ExprParser::InstrPutcharContext * /*ctx*/) override { }
  virtual void exitInstrPutchar(ExprParser::InstrPutcharContext * /*ctx*/) override { }

  virtual void enterInstrGetchar(ExprParser::InstrGetcharContext * /*ctx*/) override { }
  virtual void exitInstrGetchar(ExprParser::InstrGetcharContext * /*ctx*/) override { }

  virtual void enterBreak(ExprParser::BreakContext * /*ctx*/) override { }
  virtual void exitBreak(ExprParser::BreakContext * /*ctx*/) override { }

  virtual void enterReturn(ExprParser::ReturnContext * /*ctx*/) override { }
  virtual void exitReturn(ExprParser::ReturnContext * /*ctx*/) override { }

  virtual void enterInstrExpr(ExprParser::InstrExprContext * /*ctx*/) override { }
  virtual void exitInstrExpr(ExprParser::InstrExprContext * /*ctx*/) override { }

  virtual void enterControle(ExprParser::ControleContext * /*ctx*/) override { }
  virtual void exitControle(ExprParser::ControleContext * /*ctx*/) override { }

  virtual void enterDefFonctionType(ExprParser::DefFonctionTypeContext * /*ctx*/) override { }
  virtual void exitDefFonctionType(ExprParser::DefFonctionTypeContext * /*ctx*/) override { }

  virtual void enterDefFonctionVoid(ExprParser::DefFonctionVoidContext * /*ctx*/) override { }
  virtual void exitDefFonctionVoid(ExprParser::DefFonctionVoidContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

