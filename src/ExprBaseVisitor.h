
// Generated from Expr.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "ExprVisitor.h"


/**
 * This class provides an empty implementation of ExprVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  ExprBaseVisitor : public ExprVisitor {
public:

  virtual antlrcpp::Any visitProg(ExprParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIntVal(ExprParser::IntValContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMod(ExprParser::ModContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMult(ExprParser::MultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNon(ExprParser::NonContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGetTabVal(ExprParser::GetTabValContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAffectation(ExprParser::AffectationContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGetVarVal(ExprParser::GetVarValContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDiv(ExprParser::DivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNot(ExprParser::NotContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAnd(ExprParser::AndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXor(ExprParser::XorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRightShift(ExprParser::RightShiftContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLeftShift(ExprParser::LeftShiftContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPar(ExprParser::ParContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAdd(ExprParser::AddContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEgal(ExprParser::EgalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOr(ExprParser::OrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitSupEgal(ExprParser::SupEgalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOu(ExprParser::OuContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitCharVal(ExprParser::CharValContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStrictSup(ExprParser::StrictSupContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDiff(ExprParser::DiffContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEt(ExprParser::EtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInfEgal(ExprParser::InfEgalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAppelFonction(ExprParser::AppelFonctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitComma(ExprParser::CommaContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNotExpr(ExprParser::NotExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMoins(ExprParser::MoinsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStrictInf(ExprParser::StrictInfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitChar(ExprParser::CharContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInt32_t(ExprParser::Int32_tContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInt64_t(ExprParser::Int64_tContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAffExpr(ExprParser::AffExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAffExprTableau(ExprParser::AffExprTableauContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPostIncrement(ExprParser::PostIncrementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPreIncrement(ExprParser::PreIncrementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPostDecrement(ExprParser::PostDecrementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPreDecrement(ExprParser::PreDecrementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOppose(ExprParser::OpposeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPlusEgal(ExprParser::PlusEgalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMoinsEgal(ExprParser::MoinsEgalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMultEgal(ExprParser::MultEgalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDivEgal(ExprParser::DivEgalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitModEgal(ExprParser::ModEgalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitAndEgal(ExprParser::AndEgalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitOrEgal(ExprParser::OrEgalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitXorEgal(ExprParser::XorEgalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIf(ExprParser::IfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhile(ExprParser::WhileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBloc(ExprParser::BlocContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInstruction(ExprParser::InstructionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecTableau(ExprParser::DecTableauContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecTableauParametre(ExprParser::DecTableauParametreContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDecVariable(ExprParser::DecVariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInstrDecl(ExprParser::InstrDeclContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInstrPutchar(ExprParser::InstrPutcharContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInstrGetchar(ExprParser::InstrGetcharContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBreak(ExprParser::BreakContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturn(ExprParser::ReturnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInstrExpr(ExprParser::InstrExprContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitControle(ExprParser::ControleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefFonctionType(ExprParser::DefFonctionTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefFonctionVoid(ExprParser::DefFonctionVoidContext *ctx) override {
    return visitChildren(ctx);
  }


};

