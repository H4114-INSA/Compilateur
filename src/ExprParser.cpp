
// Generated from Expr.g4 by ANTLR 4.7.1


#include "ExprListener.h"
#include "ExprVisitor.h"

#include "ExprParser.h"


using namespace antlrcpp;
using namespace antlr4;

ExprParser::ExprParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

ExprParser::~ExprParser() {
  delete _interpreter;
}

std::string ExprParser::getGrammarFileName() const {
  return "Expr.g4";
}

const std::vector<std::string>& ExprParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& ExprParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgContext ------------------------------------------------------------------

ExprParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<ExprParser::DefinitionFonctionContext *> ExprParser::ProgContext::definitionFonction() {
  return getRuleContexts<ExprParser::DefinitionFonctionContext>();
}

ExprParser::DefinitionFonctionContext* ExprParser::ProgContext::definitionFonction(size_t i) {
  return getRuleContext<ExprParser::DefinitionFonctionContext>(i);
}


size_t ExprParser::ProgContext::getRuleIndex() const {
  return ExprParser::RuleProg;
}

void ExprParser::ProgContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProg(this);
}

void ExprParser::ProgContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProg(this);
}


antlrcpp::Any ExprParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ProgContext* ExprParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, ExprParser::RuleProg);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(21); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(20);
      definitionFonction();
      setState(23); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ExprParser::Char)
      | (1ULL << ExprParser::Int32_t)
      | (1ULL << ExprParser::Int64_t)
      | (1ULL << ExprParser::Void))) != 0));
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

ExprParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::ExprContext::getRuleIndex() const {
  return ExprParser::RuleExpr;
}

void ExprParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- IntValContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::IntValContext::IntVal() {
  return getToken(ExprParser::IntVal, 0);
}

ExprParser::IntValContext::IntValContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprParser::IntValContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntVal(this);
}
void ExprParser::IntValContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntVal(this);
}

antlrcpp::Any ExprParser::IntValContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitIntVal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ModContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::ModContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::ModContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

ExprParser::ModContext::ModContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprParser::ModContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMod(this);
}
void ExprParser::ModContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMod(this);
}

antlrcpp::Any ExprParser::ModContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitMod(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::MultContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::MultContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

ExprParser::MultContext::MultContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprParser::MultContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMult(this);
}
void ExprParser::MultContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMult(this);
}

antlrcpp::Any ExprParser::MultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitMult(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NonContext ------------------------------------------------------------------

ExprParser::ExprContext* ExprParser::NonContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

ExprParser::NonContext::NonContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprParser::NonContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNon(this);
}
void ExprParser::NonContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNon(this);
}

antlrcpp::Any ExprParser::NonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitNon(this);
  else
    return visitor->visitChildren(this);
}
//----------------- GetTabValContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::GetTabValContext::Nom() {
  return getToken(ExprParser::Nom, 0);
}

ExprParser::ExprContext* ExprParser::GetTabValContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

ExprParser::GetTabValContext::GetTabValContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprParser::GetTabValContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGetTabVal(this);
}
void ExprParser::GetTabValContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGetTabVal(this);
}

antlrcpp::Any ExprParser::GetTabValContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitGetTabVal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AffectationContext ------------------------------------------------------------------

ExprParser::AffContext* ExprParser::AffectationContext::aff() {
  return getRuleContext<ExprParser::AffContext>(0);
}

ExprParser::AffectationContext::AffectationContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprParser::AffectationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAffectation(this);
}
void ExprParser::AffectationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAffectation(this);
}

antlrcpp::Any ExprParser::AffectationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitAffectation(this);
  else
    return visitor->visitChildren(this);
}
//----------------- GetVarValContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::GetVarValContext::Nom() {
  return getToken(ExprParser::Nom, 0);
}

ExprParser::GetVarValContext::GetVarValContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprParser::GetVarValContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGetVarVal(this);
}
void ExprParser::GetVarValContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGetVarVal(this);
}

antlrcpp::Any ExprParser::GetVarValContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitGetVarVal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DivContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::DivContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::DivContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

ExprParser::DivContext::DivContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprParser::DivContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDiv(this);
}
void ExprParser::DivContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDiv(this);
}

antlrcpp::Any ExprParser::DivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NotContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::NotContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::NotContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

ExprParser::NotContext::NotContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprParser::NotContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNot(this);
}
void ExprParser::NotContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNot(this);
}

antlrcpp::Any ExprParser::NotContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitNot(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AndContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::AndContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::AndContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

ExprParser::AndContext::AndContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprParser::AndContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnd(this);
}
void ExprParser::AndContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnd(this);
}

antlrcpp::Any ExprParser::AndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitAnd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- XorContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::XorContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::XorContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

ExprParser::XorContext::XorContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprParser::XorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterXor(this);
}
void ExprParser::XorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitXor(this);
}

antlrcpp::Any ExprParser::XorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitXor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RightShiftContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::RightShiftContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::RightShiftContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

ExprParser::RightShiftContext::RightShiftContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprParser::RightShiftContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRightShift(this);
}
void ExprParser::RightShiftContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRightShift(this);
}

antlrcpp::Any ExprParser::RightShiftContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitRightShift(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LeftShiftContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::LeftShiftContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::LeftShiftContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

ExprParser::LeftShiftContext::LeftShiftContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprParser::LeftShiftContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLeftShift(this);
}
void ExprParser::LeftShiftContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLeftShift(this);
}

antlrcpp::Any ExprParser::LeftShiftContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitLeftShift(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParContext ------------------------------------------------------------------

ExprParser::ExprContext* ExprParser::ParContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

ExprParser::ParContext::ParContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprParser::ParContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPar(this);
}
void ExprParser::ParContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPar(this);
}

antlrcpp::Any ExprParser::ParContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitPar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::AddContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::AddContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

ExprParser::AddContext::AddContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprParser::AddContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdd(this);
}
void ExprParser::AddContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdd(this);
}

antlrcpp::Any ExprParser::AddContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitAdd(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EgalContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::EgalContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::EgalContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

ExprParser::EgalContext::EgalContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprParser::EgalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEgal(this);
}
void ExprParser::EgalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEgal(this);
}

antlrcpp::Any ExprParser::EgalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitEgal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OrContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::OrContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::OrContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

ExprParser::OrContext::OrContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprParser::OrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOr(this);
}
void ExprParser::OrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOr(this);
}

antlrcpp::Any ExprParser::OrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitOr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SupEgalContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::SupEgalContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::SupEgalContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

ExprParser::SupEgalContext::SupEgalContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprParser::SupEgalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSupEgal(this);
}
void ExprParser::SupEgalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSupEgal(this);
}

antlrcpp::Any ExprParser::SupEgalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitSupEgal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OuContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::OuContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::OuContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

ExprParser::OuContext::OuContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprParser::OuContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOu(this);
}
void ExprParser::OuContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOu(this);
}

antlrcpp::Any ExprParser::OuContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitOu(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CharValContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::CharValContext::CharVal() {
  return getToken(ExprParser::CharVal, 0);
}

ExprParser::CharValContext::CharValContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprParser::CharValContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCharVal(this);
}
void ExprParser::CharValContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCharVal(this);
}

antlrcpp::Any ExprParser::CharValContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitCharVal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StrictSupContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::StrictSupContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::StrictSupContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

ExprParser::StrictSupContext::StrictSupContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprParser::StrictSupContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStrictSup(this);
}
void ExprParser::StrictSupContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStrictSup(this);
}

antlrcpp::Any ExprParser::StrictSupContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitStrictSup(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DiffContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::DiffContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::DiffContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

ExprParser::DiffContext::DiffContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprParser::DiffContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDiff(this);
}
void ExprParser::DiffContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDiff(this);
}

antlrcpp::Any ExprParser::DiffContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitDiff(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EtContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::EtContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::EtContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

ExprParser::EtContext::EtContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprParser::EtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEt(this);
}
void ExprParser::EtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEt(this);
}

antlrcpp::Any ExprParser::EtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitEt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InfEgalContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::InfEgalContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::InfEgalContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

ExprParser::InfEgalContext::InfEgalContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprParser::InfEgalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInfEgal(this);
}
void ExprParser::InfEgalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInfEgal(this);
}

antlrcpp::Any ExprParser::InfEgalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitInfEgal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AppelFonctionContext ------------------------------------------------------------------

ExprParser::AppelFonctContext* ExprParser::AppelFonctionContext::appelFonct() {
  return getRuleContext<ExprParser::AppelFonctContext>(0);
}

ExprParser::AppelFonctionContext::AppelFonctionContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprParser::AppelFonctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAppelFonction(this);
}
void ExprParser::AppelFonctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAppelFonction(this);
}

antlrcpp::Any ExprParser::AppelFonctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitAppelFonction(this);
  else
    return visitor->visitChildren(this);
}
//----------------- CommaContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::CommaContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::CommaContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

ExprParser::CommaContext::CommaContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprParser::CommaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComma(this);
}
void ExprParser::CommaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComma(this);
}

antlrcpp::Any ExprParser::CommaContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitComma(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NotExprContext ------------------------------------------------------------------

ExprParser::ExprContext* ExprParser::NotExprContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

ExprParser::NotExprContext::NotExprContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprParser::NotExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNotExpr(this);
}
void ExprParser::NotExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNotExpr(this);
}

antlrcpp::Any ExprParser::NotExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitNotExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MoinsContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::MoinsContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::MoinsContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

ExprParser::MoinsContext::MoinsContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprParser::MoinsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMoins(this);
}
void ExprParser::MoinsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMoins(this);
}

antlrcpp::Any ExprParser::MoinsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitMoins(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StrictInfContext ------------------------------------------------------------------

std::vector<ExprParser::ExprContext *> ExprParser::StrictInfContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::StrictInfContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

ExprParser::StrictInfContext::StrictInfContext(ExprContext *ctx) { copyFrom(ctx); }

void ExprParser::StrictInfContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStrictInf(this);
}
void ExprParser::StrictInfContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStrictInf(this);
}

antlrcpp::Any ExprParser::StrictInfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitStrictInf(this);
  else
    return visitor->visitChildren(this);
}

ExprParser::ExprContext* ExprParser::expr() {
   return expr(0);
}

ExprParser::ExprContext* ExprParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  ExprParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  ExprParser::ExprContext *previousContext = _localctx;
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, ExprParser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(44);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ParContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(26);
      match(ExprParser::T__0);
      setState(27);
      expr(0);
      setState(28);
      match(ExprParser::T__1);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<NonContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(30);
      match(ExprParser::T__17);
      setState(31);
      expr(13);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<NotExprContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(32);
      match(ExprParser::T__21);
      setState(33);
      expr(7);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<GetTabValContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(34);
      match(ExprParser::Nom);
      setState(35);
      match(ExprParser::T__23);
      setState(36);
      expr(0);
      setState(37);
      match(ExprParser::T__24);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<GetVarValContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(39);
      match(ExprParser::Nom);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<IntValContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(40);
      match(ExprParser::IntVal);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<CharValContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(41);
      match(ExprParser::CharVal);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<AppelFonctionContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(42);
      appelFonct();
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<AffectationContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(43);
      aff();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(108);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(106);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<ModContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(46);

          if (!(precpred(_ctx, 28))) throw FailedPredicateException(this, "precpred(_ctx, 28)");
          setState(47);
          match(ExprParser::T__2);
          setState(48);
          expr(29);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MultContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(49);

          if (!(precpred(_ctx, 27))) throw FailedPredicateException(this, "precpred(_ctx, 27)");
          setState(50);
          match(ExprParser::T__3);
          setState(51);
          expr(28);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<DivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(52);

          if (!(precpred(_ctx, 26))) throw FailedPredicateException(this, "precpred(_ctx, 26)");
          setState(53);
          match(ExprParser::T__4);
          setState(54);
          expr(27);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<AddContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(55);

          if (!(precpred(_ctx, 25))) throw FailedPredicateException(this, "precpred(_ctx, 25)");
          setState(56);
          match(ExprParser::T__5);
          setState(57);
          expr(26);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<MoinsContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(58);

          if (!(precpred(_ctx, 24))) throw FailedPredicateException(this, "precpred(_ctx, 24)");
          setState(59);
          match(ExprParser::T__6);
          setState(60);
          expr(25);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<LeftShiftContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(61);

          if (!(precpred(_ctx, 23))) throw FailedPredicateException(this, "precpred(_ctx, 23)");
          setState(62);
          match(ExprParser::T__7);
          setState(63);
          expr(24);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<RightShiftContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(64);

          if (!(precpred(_ctx, 22))) throw FailedPredicateException(this, "precpred(_ctx, 22)");
          setState(65);
          match(ExprParser::T__8);
          setState(66);
          expr(23);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<EtContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(67);

          if (!(precpred(_ctx, 21))) throw FailedPredicateException(this, "precpred(_ctx, 21)");
          setState(68);
          match(ExprParser::T__9);
          setState(69);
          expr(22);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<OuContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(70);

          if (!(precpred(_ctx, 20))) throw FailedPredicateException(this, "precpred(_ctx, 20)");
          setState(71);
          match(ExprParser::T__10);
          setState(72);
          expr(21);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<InfEgalContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(73);

          if (!(precpred(_ctx, 19))) throw FailedPredicateException(this, "precpred(_ctx, 19)");
          setState(74);
          match(ExprParser::T__11);
          setState(75);
          expr(20);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<SupEgalContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(76);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(77);
          match(ExprParser::T__12);
          setState(78);
          expr(19);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<StrictSupContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(79);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(80);
          match(ExprParser::T__13);
          setState(81);
          expr(18);
          break;
        }

        case 13: {
          auto newContext = _tracker.createInstance<StrictInfContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(82);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(83);
          match(ExprParser::T__14);
          setState(84);
          expr(17);
          break;
        }

        case 14: {
          auto newContext = _tracker.createInstance<EgalContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(85);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(86);
          match(ExprParser::T__15);
          setState(87);
          expr(16);
          break;
        }

        case 15: {
          auto newContext = _tracker.createInstance<DiffContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(88);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(89);
          match(ExprParser::T__16);
          setState(90);
          expr(15);
          break;
        }

        case 16: {
          auto newContext = _tracker.createInstance<AndContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(91);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(92);
          match(ExprParser::T__18);
          setState(93);
          expr(13);
          break;
        }

        case 17: {
          auto newContext = _tracker.createInstance<OrContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(94);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(95);
          match(ExprParser::T__19);
          setState(96);
          expr(12);
          break;
        }

        case 18: {
          auto newContext = _tracker.createInstance<XorContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(97);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(98);
          match(ExprParser::T__20);
          setState(99);
          expr(11);
          break;
        }

        case 19: {
          auto newContext = _tracker.createInstance<NotContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(100);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(101);
          match(ExprParser::T__21);
          setState(102);
          expr(10);
          break;
        }

        case 20: {
          auto newContext = _tracker.createInstance<CommaContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(103);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(104);
          match(ExprParser::T__22);
          setState(105);
          expr(9);
          break;
        }

        } 
      }
      setState(110);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

ExprParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::TypeContext::getRuleIndex() const {
  return ExprParser::RuleType;
}

void ExprParser::TypeContext::copyFrom(TypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- CharContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::CharContext::Char() {
  return getToken(ExprParser::Char, 0);
}

ExprParser::CharContext::CharContext(TypeContext *ctx) { copyFrom(ctx); }

void ExprParser::CharContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterChar(this);
}
void ExprParser::CharContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitChar(this);
}

antlrcpp::Any ExprParser::CharContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitChar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Int64_tContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::Int64_tContext::Int64_t() {
  return getToken(ExprParser::Int64_t, 0);
}

ExprParser::Int64_tContext::Int64_tContext(TypeContext *ctx) { copyFrom(ctx); }

void ExprParser::Int64_tContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInt64_t(this);
}
void ExprParser::Int64_tContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInt64_t(this);
}

antlrcpp::Any ExprParser::Int64_tContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitInt64_t(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Int32_tContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::Int32_tContext::Int32_t() {
  return getToken(ExprParser::Int32_t, 0);
}

ExprParser::Int32_tContext::Int32_tContext(TypeContext *ctx) { copyFrom(ctx); }

void ExprParser::Int32_tContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInt32_t(this);
}
void ExprParser::Int32_tContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInt32_t(this);
}

antlrcpp::Any ExprParser::Int32_tContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitInt32_t(this);
  else
    return visitor->visitChildren(this);
}
ExprParser::TypeContext* ExprParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 4, ExprParser::RuleType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(114);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::Char: {
        _localctx = dynamic_cast<TypeContext *>(_tracker.createInstance<ExprParser::CharContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(111);
        match(ExprParser::Char);
        break;
      }

      case ExprParser::Int32_t: {
        _localctx = dynamic_cast<TypeContext *>(_tracker.createInstance<ExprParser::Int32_tContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(112);
        match(ExprParser::Int32_t);
        break;
      }

      case ExprParser::Int64_t: {
        _localctx = dynamic_cast<TypeContext *>(_tracker.createInstance<ExprParser::Int64_tContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(113);
        match(ExprParser::Int64_t);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AffContext ------------------------------------------------------------------

ExprParser::AffContext::AffContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::AffContext::getRuleIndex() const {
  return ExprParser::RuleAff;
}

void ExprParser::AffContext::copyFrom(AffContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- OrEgalContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::OrEgalContext::Nom() {
  return getToken(ExprParser::Nom, 0);
}

ExprParser::ExprContext* ExprParser::OrEgalContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

ExprParser::OrEgalContext::OrEgalContext(AffContext *ctx) { copyFrom(ctx); }

void ExprParser::OrEgalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOrEgal(this);
}
void ExprParser::OrEgalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOrEgal(this);
}

antlrcpp::Any ExprParser::OrEgalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitOrEgal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DivEgalContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::DivEgalContext::Nom() {
  return getToken(ExprParser::Nom, 0);
}

ExprParser::ExprContext* ExprParser::DivEgalContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

ExprParser::DivEgalContext::DivEgalContext(AffContext *ctx) { copyFrom(ctx); }

void ExprParser::DivEgalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDivEgal(this);
}
void ExprParser::DivEgalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDivEgal(this);
}

antlrcpp::Any ExprParser::DivEgalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitDivEgal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PostDecrementContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::PostDecrementContext::Nom() {
  return getToken(ExprParser::Nom, 0);
}

ExprParser::PostDecrementContext::PostDecrementContext(AffContext *ctx) { copyFrom(ctx); }

void ExprParser::PostDecrementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostDecrement(this);
}
void ExprParser::PostDecrementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostDecrement(this);
}

antlrcpp::Any ExprParser::PostDecrementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitPostDecrement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlusEgalContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::PlusEgalContext::Nom() {
  return getToken(ExprParser::Nom, 0);
}

ExprParser::ExprContext* ExprParser::PlusEgalContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

ExprParser::PlusEgalContext::PlusEgalContext(AffContext *ctx) { copyFrom(ctx); }

void ExprParser::PlusEgalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPlusEgal(this);
}
void ExprParser::PlusEgalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPlusEgal(this);
}

antlrcpp::Any ExprParser::PlusEgalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitPlusEgal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MoinsEgalContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::MoinsEgalContext::Nom() {
  return getToken(ExprParser::Nom, 0);
}

ExprParser::ExprContext* ExprParser::MoinsEgalContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

ExprParser::MoinsEgalContext::MoinsEgalContext(AffContext *ctx) { copyFrom(ctx); }

void ExprParser::MoinsEgalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMoinsEgal(this);
}
void ExprParser::MoinsEgalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMoinsEgal(this);
}

antlrcpp::Any ExprParser::MoinsEgalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitMoinsEgal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PreIncrementContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::PreIncrementContext::Nom() {
  return getToken(ExprParser::Nom, 0);
}

ExprParser::PreIncrementContext::PreIncrementContext(AffContext *ctx) { copyFrom(ctx); }

void ExprParser::PreIncrementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreIncrement(this);
}
void ExprParser::PreIncrementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreIncrement(this);
}

antlrcpp::Any ExprParser::PreIncrementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitPreIncrement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PreDecrementContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::PreDecrementContext::Nom() {
  return getToken(ExprParser::Nom, 0);
}

ExprParser::PreDecrementContext::PreDecrementContext(AffContext *ctx) { copyFrom(ctx); }

void ExprParser::PreDecrementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPreDecrement(this);
}
void ExprParser::PreDecrementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPreDecrement(this);
}

antlrcpp::Any ExprParser::PreDecrementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitPreDecrement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultEgalContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::MultEgalContext::Nom() {
  return getToken(ExprParser::Nom, 0);
}

ExprParser::ExprContext* ExprParser::MultEgalContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

ExprParser::MultEgalContext::MultEgalContext(AffContext *ctx) { copyFrom(ctx); }

void ExprParser::MultEgalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultEgal(this);
}
void ExprParser::MultEgalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultEgal(this);
}

antlrcpp::Any ExprParser::MultEgalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitMultEgal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- XorEgalContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::XorEgalContext::Nom() {
  return getToken(ExprParser::Nom, 0);
}

ExprParser::ExprContext* ExprParser::XorEgalContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

ExprParser::XorEgalContext::XorEgalContext(AffContext *ctx) { copyFrom(ctx); }

void ExprParser::XorEgalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterXorEgal(this);
}
void ExprParser::XorEgalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitXorEgal(this);
}

antlrcpp::Any ExprParser::XorEgalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitXorEgal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AndEgalContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::AndEgalContext::Nom() {
  return getToken(ExprParser::Nom, 0);
}

ExprParser::ExprContext* ExprParser::AndEgalContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

ExprParser::AndEgalContext::AndEgalContext(AffContext *ctx) { copyFrom(ctx); }

void ExprParser::AndEgalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAndEgal(this);
}
void ExprParser::AndEgalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAndEgal(this);
}

antlrcpp::Any ExprParser::AndEgalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitAndEgal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AffExprTableauContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::AffExprTableauContext::Nom() {
  return getToken(ExprParser::Nom, 0);
}

std::vector<ExprParser::ExprContext *> ExprParser::AffExprTableauContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::AffExprTableauContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

ExprParser::AffExprTableauContext::AffExprTableauContext(AffContext *ctx) { copyFrom(ctx); }

void ExprParser::AffExprTableauContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAffExprTableau(this);
}
void ExprParser::AffExprTableauContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAffExprTableau(this);
}

antlrcpp::Any ExprParser::AffExprTableauContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitAffExprTableau(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PostIncrementContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::PostIncrementContext::Nom() {
  return getToken(ExprParser::Nom, 0);
}

ExprParser::PostIncrementContext::PostIncrementContext(AffContext *ctx) { copyFrom(ctx); }

void ExprParser::PostIncrementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostIncrement(this);
}
void ExprParser::PostIncrementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostIncrement(this);
}

antlrcpp::Any ExprParser::PostIncrementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitPostIncrement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OpposeContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::OpposeContext::Nom() {
  return getToken(ExprParser::Nom, 0);
}

ExprParser::OpposeContext::OpposeContext(AffContext *ctx) { copyFrom(ctx); }

void ExprParser::OpposeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOppose(this);
}
void ExprParser::OpposeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOppose(this);
}

antlrcpp::Any ExprParser::OpposeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitOppose(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ModEgalContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::ModEgalContext::Nom() {
  return getToken(ExprParser::Nom, 0);
}

ExprParser::ExprContext* ExprParser::ModEgalContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

ExprParser::ModEgalContext::ModEgalContext(AffContext *ctx) { copyFrom(ctx); }

void ExprParser::ModEgalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModEgal(this);
}
void ExprParser::ModEgalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModEgal(this);
}

antlrcpp::Any ExprParser::ModEgalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitModEgal(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AffExprContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::AffExprContext::Nom() {
  return getToken(ExprParser::Nom, 0);
}

ExprParser::ExprContext* ExprParser::AffExprContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

ExprParser::AffExprContext::AffExprContext(AffContext *ctx) { copyFrom(ctx); }

void ExprParser::AffExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAffExpr(this);
}
void ExprParser::AffExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAffExpr(this);
}

antlrcpp::Any ExprParser::AffExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitAffExpr(this);
  else
    return visitor->visitChildren(this);
}
ExprParser::AffContext* ExprParser::aff() {
  AffContext *_localctx = _tracker.createInstance<AffContext>(_ctx, getState());
  enterRule(_localctx, 6, ExprParser::RuleAff);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(160);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ExprParser::AffExprContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(116);
      match(ExprParser::Nom);
      setState(117);
      match(ExprParser::T__25);
      setState(118);
      expr(0);
      break;
    }

    case 2: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ExprParser::AffExprTableauContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(119);
      match(ExprParser::Nom);
      setState(120);
      match(ExprParser::T__23);
      setState(121);
      expr(0);
      setState(122);
      match(ExprParser::T__24);
      setState(123);
      match(ExprParser::T__25);
      setState(124);
      expr(0);
      break;
    }

    case 3: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ExprParser::PostIncrementContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(126);
      match(ExprParser::Nom);
      setState(127);
      match(ExprParser::T__26);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ExprParser::PreIncrementContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(128);
      match(ExprParser::T__26);
      setState(129);
      match(ExprParser::Nom);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ExprParser::PostDecrementContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(130);
      match(ExprParser::Nom);
      setState(131);
      match(ExprParser::T__27);
      break;
    }

    case 6: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ExprParser::PreDecrementContext>(_localctx));
      enterOuterAlt(_localctx, 6);
      setState(132);
      match(ExprParser::T__27);
      setState(133);
      match(ExprParser::Nom);
      break;
    }

    case 7: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ExprParser::OpposeContext>(_localctx));
      enterOuterAlt(_localctx, 7);
      setState(134);
      match(ExprParser::T__6);
      setState(135);
      match(ExprParser::Nom);
      break;
    }

    case 8: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ExprParser::PlusEgalContext>(_localctx));
      enterOuterAlt(_localctx, 8);
      setState(136);
      match(ExprParser::Nom);
      setState(137);
      match(ExprParser::T__28);
      setState(138);
      expr(0);
      break;
    }

    case 9: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ExprParser::MoinsEgalContext>(_localctx));
      enterOuterAlt(_localctx, 9);
      setState(139);
      match(ExprParser::Nom);
      setState(140);
      match(ExprParser::T__29);
      setState(141);
      expr(0);
      break;
    }

    case 10: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ExprParser::MultEgalContext>(_localctx));
      enterOuterAlt(_localctx, 10);
      setState(142);
      match(ExprParser::Nom);
      setState(143);
      match(ExprParser::T__30);
      setState(144);
      expr(0);
      break;
    }

    case 11: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ExprParser::DivEgalContext>(_localctx));
      enterOuterAlt(_localctx, 11);
      setState(145);
      match(ExprParser::Nom);
      setState(146);
      match(ExprParser::T__31);
      setState(147);
      expr(0);
      break;
    }

    case 12: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ExprParser::ModEgalContext>(_localctx));
      enterOuterAlt(_localctx, 12);
      setState(148);
      match(ExprParser::Nom);
      setState(149);
      match(ExprParser::T__32);
      setState(150);
      expr(0);
      break;
    }

    case 13: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ExprParser::AndEgalContext>(_localctx));
      enterOuterAlt(_localctx, 13);
      setState(151);
      match(ExprParser::Nom);
      setState(152);
      match(ExprParser::T__33);
      setState(153);
      expr(0);
      break;
    }

    case 14: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ExprParser::OrEgalContext>(_localctx));
      enterOuterAlt(_localctx, 14);
      setState(154);
      match(ExprParser::Nom);
      setState(155);
      match(ExprParser::T__34);
      setState(156);
      expr(0);
      break;
    }

    case 15: {
      _localctx = dynamic_cast<AffContext *>(_tracker.createInstance<ExprParser::XorEgalContext>(_localctx));
      enterOuterAlt(_localctx, 15);
      setState(157);
      match(ExprParser::Nom);
      setState(158);
      match(ExprParser::T__35);
      setState(159);
      expr(0);
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ControlContext ------------------------------------------------------------------

ExprParser::ControlContext::ControlContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::ControlContext::getRuleIndex() const {
  return ExprParser::RuleControl;
}

void ExprParser::ControlContext::copyFrom(ControlContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- WhileContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::WhileContext::While() {
  return getToken(ExprParser::While, 0);
}

ExprParser::ExprContext* ExprParser::WhileContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

ExprParser::BlocControlContext* ExprParser::WhileContext::blocControl() {
  return getRuleContext<ExprParser::BlocControlContext>(0);
}

ExprParser::WhileContext::WhileContext(ControlContext *ctx) { copyFrom(ctx); }

void ExprParser::WhileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhile(this);
}
void ExprParser::WhileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhile(this);
}

antlrcpp::Any ExprParser::WhileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitWhile(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::IfContext::If() {
  return getToken(ExprParser::If, 0);
}

ExprParser::ExprContext* ExprParser::IfContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

std::vector<ExprParser::BlocControlContext *> ExprParser::IfContext::blocControl() {
  return getRuleContexts<ExprParser::BlocControlContext>();
}

ExprParser::BlocControlContext* ExprParser::IfContext::blocControl(size_t i) {
  return getRuleContext<ExprParser::BlocControlContext>(i);
}

std::vector<tree::TerminalNode *> ExprParser::IfContext::Elseif() {
  return getTokens(ExprParser::Elseif);
}

tree::TerminalNode* ExprParser::IfContext::Elseif(size_t i) {
  return getToken(ExprParser::Elseif, i);
}

tree::TerminalNode* ExprParser::IfContext::Else() {
  return getToken(ExprParser::Else, 0);
}

ExprParser::IfContext::IfContext(ControlContext *ctx) { copyFrom(ctx); }

void ExprParser::IfContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf(this);
}
void ExprParser::IfContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf(this);
}

antlrcpp::Any ExprParser::IfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitIf(this);
  else
    return visitor->visitChildren(this);
}
ExprParser::ControlContext* ExprParser::control() {
  ControlContext *_localctx = _tracker.createInstance<ControlContext>(_ctx, getState());
  enterRule(_localctx, 8, ExprParser::RuleControl);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(184);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::If: {
        _localctx = dynamic_cast<ControlContext *>(_tracker.createInstance<ExprParser::IfContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(162);
        match(ExprParser::If);
        setState(163);
        match(ExprParser::T__0);
        setState(164);
        expr(0);
        setState(165);
        match(ExprParser::T__1);
        setState(166);
        blocControl();
        setState(171);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(167);
            match(ExprParser::Elseif);
            setState(168);
            blocControl(); 
          }
          setState(173);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
        }
        setState(176);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
        case 1: {
          setState(174);
          match(ExprParser::Else);
          setState(175);
          blocControl();
          break;
        }

        }
        break;
      }

      case ExprParser::While: {
        _localctx = dynamic_cast<ControlContext *>(_tracker.createInstance<ExprParser::WhileContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(178);
        match(ExprParser::While);
        setState(179);
        match(ExprParser::T__0);
        setState(180);
        expr(0);
        setState(181);
        match(ExprParser::T__1);
        setState(182);
        blocControl();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlocControlContext ------------------------------------------------------------------

ExprParser::BlocControlContext::BlocControlContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::BlocControlContext::getRuleIndex() const {
  return ExprParser::RuleBlocControl;
}

void ExprParser::BlocControlContext::copyFrom(BlocControlContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- BlocContext ------------------------------------------------------------------

std::vector<ExprParser::InstrContext *> ExprParser::BlocContext::instr() {
  return getRuleContexts<ExprParser::InstrContext>();
}

ExprParser::InstrContext* ExprParser::BlocContext::instr(size_t i) {
  return getRuleContext<ExprParser::InstrContext>(i);
}

ExprParser::BlocContext::BlocContext(BlocControlContext *ctx) { copyFrom(ctx); }

void ExprParser::BlocContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBloc(this);
}
void ExprParser::BlocContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBloc(this);
}

antlrcpp::Any ExprParser::BlocContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitBloc(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InstructionContext ------------------------------------------------------------------

ExprParser::InstrContext* ExprParser::InstructionContext::instr() {
  return getRuleContext<ExprParser::InstrContext>(0);
}

ExprParser::InstructionContext::InstructionContext(BlocControlContext *ctx) { copyFrom(ctx); }

void ExprParser::InstructionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInstruction(this);
}
void ExprParser::InstructionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInstruction(this);
}

antlrcpp::Any ExprParser::InstructionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitInstruction(this);
  else
    return visitor->visitChildren(this);
}
ExprParser::BlocControlContext* ExprParser::blocControl() {
  BlocControlContext *_localctx = _tracker.createInstance<BlocControlContext>(_ctx, getState());
  enterRule(_localctx, 10, ExprParser::RuleBlocControl);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(195);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::T__36: {
        _localctx = dynamic_cast<BlocControlContext *>(_tracker.createInstance<ExprParser::BlocContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(186);
        match(ExprParser::T__36);
        setState(190);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << ExprParser::T__0)
          | (1ULL << ExprParser::T__6)
          | (1ULL << ExprParser::T__17)
          | (1ULL << ExprParser::T__21)
          | (1ULL << ExprParser::T__26)
          | (1ULL << ExprParser::T__27)
          | (1ULL << ExprParser::Char)
          | (1ULL << ExprParser::Int32_t)
          | (1ULL << ExprParser::Int64_t)
          | (1ULL << ExprParser::Break)
          | (1ULL << ExprParser::Return)
          | (1ULL << ExprParser::While)
          | (1ULL << ExprParser::If)
          | (1ULL << ExprParser::Putchar)
          | (1ULL << ExprParser::Getchar)
          | (1ULL << ExprParser::Nom)
          | (1ULL << ExprParser::IntVal)
          | (1ULL << ExprParser::CharVal))) != 0)) {
          setState(187);
          instr();
          setState(192);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(193);
        match(ExprParser::T__37);
        break;
      }

      case ExprParser::T__0:
      case ExprParser::T__6:
      case ExprParser::T__17:
      case ExprParser::T__21:
      case ExprParser::T__26:
      case ExprParser::T__27:
      case ExprParser::Char:
      case ExprParser::Int32_t:
      case ExprParser::Int64_t:
      case ExprParser::Break:
      case ExprParser::Return:
      case ExprParser::While:
      case ExprParser::If:
      case ExprParser::Putchar:
      case ExprParser::Getchar:
      case ExprParser::Nom:
      case ExprParser::IntVal:
      case ExprParser::CharVal: {
        _localctx = dynamic_cast<BlocControlContext *>(_tracker.createInstance<ExprParser::InstructionContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(194);
        instr();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DeclarationContext ------------------------------------------------------------------

ExprParser::DeclarationContext::DeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::DeclarationContext::getRuleIndex() const {
  return ExprParser::RuleDeclaration;
}

void ExprParser::DeclarationContext::copyFrom(DeclarationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DecVariableMultipleContext ------------------------------------------------------------------

ExprParser::TypeContext* ExprParser::DecVariableMultipleContext::type() {
  return getRuleContext<ExprParser::TypeContext>(0);
}

std::vector<tree::TerminalNode *> ExprParser::DecVariableMultipleContext::Nom() {
  return getTokens(ExprParser::Nom);
}

tree::TerminalNode* ExprParser::DecVariableMultipleContext::Nom(size_t i) {
  return getToken(ExprParser::Nom, i);
}

ExprParser::DecVariableMultipleContext::DecVariableMultipleContext(DeclarationContext *ctx) { copyFrom(ctx); }

void ExprParser::DecVariableMultipleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecVariableMultiple(this);
}
void ExprParser::DecVariableMultipleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecVariableMultiple(this);
}

antlrcpp::Any ExprParser::DecVariableMultipleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitDecVariableMultiple(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DecVariableContext ------------------------------------------------------------------

ExprParser::TypeContext* ExprParser::DecVariableContext::type() {
  return getRuleContext<ExprParser::TypeContext>(0);
}

tree::TerminalNode* ExprParser::DecVariableContext::Nom() {
  return getToken(ExprParser::Nom, 0);
}

ExprParser::ExprContext* ExprParser::DecVariableContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

ExprParser::DecVariableContext::DecVariableContext(DeclarationContext *ctx) { copyFrom(ctx); }

void ExprParser::DecVariableContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecVariable(this);
}
void ExprParser::DecVariableContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecVariable(this);
}

antlrcpp::Any ExprParser::DecVariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitDecVariable(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DecTableauContext ------------------------------------------------------------------

ExprParser::TypeContext* ExprParser::DecTableauContext::type() {
  return getRuleContext<ExprParser::TypeContext>(0);
}

tree::TerminalNode* ExprParser::DecTableauContext::Nom() {
  return getToken(ExprParser::Nom, 0);
}

std::vector<ExprParser::ExprContext *> ExprParser::DecTableauContext::expr() {
  return getRuleContexts<ExprParser::ExprContext>();
}

ExprParser::ExprContext* ExprParser::DecTableauContext::expr(size_t i) {
  return getRuleContext<ExprParser::ExprContext>(i);
}

ExprParser::DecTableauContext::DecTableauContext(DeclarationContext *ctx) { copyFrom(ctx); }

void ExprParser::DecTableauContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDecTableau(this);
}
void ExprParser::DecTableauContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDecTableau(this);
}

antlrcpp::Any ExprParser::DecTableauContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitDecTableau(this);
  else
    return visitor->visitChildren(this);
}
ExprParser::DeclarationContext* ExprParser::declaration() {
  DeclarationContext *_localctx = _tracker.createInstance<DeclarationContext>(_ctx, getState());
  enterRule(_localctx, 12, ExprParser::RuleDeclaration);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(233);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<DeclarationContext *>(_tracker.createInstance<ExprParser::DecTableauContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(197);
      type();
      setState(198);
      match(ExprParser::Nom);
      setState(199);
      match(ExprParser::T__23);
      setState(201);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << ExprParser::T__0)
        | (1ULL << ExprParser::T__6)
        | (1ULL << ExprParser::T__17)
        | (1ULL << ExprParser::T__21)
        | (1ULL << ExprParser::T__26)
        | (1ULL << ExprParser::T__27)
        | (1ULL << ExprParser::Nom)
        | (1ULL << ExprParser::IntVal)
        | (1ULL << ExprParser::CharVal))) != 0)) {
        setState(200);
        expr(0);
      }
      setState(203);
      match(ExprParser::T__24);
      setState(216);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ExprParser::T__25) {
        setState(204);
        match(ExprParser::T__25);
        setState(205);
        match(ExprParser::T__36);
        setState(206);
        expr(0);
        setState(211);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == ExprParser::T__22) {
          setState(207);
          match(ExprParser::T__22);
          setState(208);
          expr(0);
          setState(213);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(214);
        match(ExprParser::T__37);
      }
      break;
    }

    case 2: {
      _localctx = dynamic_cast<DeclarationContext *>(_tracker.createInstance<ExprParser::DecVariableContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(218);
      type();
      setState(219);
      match(ExprParser::Nom);
      setState(222);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == ExprParser::T__25) {
        setState(220);
        match(ExprParser::T__25);
        setState(221);
        expr(0);
      }
      break;
    }

    case 3: {
      _localctx = dynamic_cast<DeclarationContext *>(_tracker.createInstance<ExprParser::DecVariableMultipleContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(224);
      type();
      setState(225);
      match(ExprParser::Nom);
      setState(230);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(226);
          match(ExprParser::T__22);
          setState(227);
          match(ExprParser::Nom); 
        }
        setState(232);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
      }
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InstrContext ------------------------------------------------------------------

ExprParser::InstrContext::InstrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::InstrContext::getRuleIndex() const {
  return ExprParser::RuleInstr;
}

void ExprParser::InstrContext::copyFrom(InstrContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- BreakContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::BreakContext::Break() {
  return getToken(ExprParser::Break, 0);
}

ExprParser::BreakContext::BreakContext(InstrContext *ctx) { copyFrom(ctx); }

void ExprParser::BreakContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBreak(this);
}
void ExprParser::BreakContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBreak(this);
}

antlrcpp::Any ExprParser::BreakContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitBreak(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InstrExprContext ------------------------------------------------------------------

ExprParser::ExprContext* ExprParser::InstrExprContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

ExprParser::InstrExprContext::InstrExprContext(InstrContext *ctx) { copyFrom(ctx); }

void ExprParser::InstrExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInstrExpr(this);
}
void ExprParser::InstrExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInstrExpr(this);
}

antlrcpp::Any ExprParser::InstrExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitInstrExpr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InstrPutcharContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::InstrPutcharContext::Putchar() {
  return getToken(ExprParser::Putchar, 0);
}

ExprParser::ExprContext* ExprParser::InstrPutcharContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

ExprParser::InstrPutcharContext::InstrPutcharContext(InstrContext *ctx) { copyFrom(ctx); }

void ExprParser::InstrPutcharContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInstrPutchar(this);
}
void ExprParser::InstrPutcharContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInstrPutchar(this);
}

antlrcpp::Any ExprParser::InstrPutcharContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitInstrPutchar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InstrGetcharContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::InstrGetcharContext::Getchar() {
  return getToken(ExprParser::Getchar, 0);
}

ExprParser::ExprContext* ExprParser::InstrGetcharContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

ExprParser::InstrGetcharContext::InstrGetcharContext(InstrContext *ctx) { copyFrom(ctx); }

void ExprParser::InstrGetcharContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInstrGetchar(this);
}
void ExprParser::InstrGetcharContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInstrGetchar(this);
}

antlrcpp::Any ExprParser::InstrGetcharContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitInstrGetchar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ControleContext ------------------------------------------------------------------

ExprParser::ControlContext* ExprParser::ControleContext::control() {
  return getRuleContext<ExprParser::ControlContext>(0);
}

ExprParser::ControleContext::ControleContext(InstrContext *ctx) { copyFrom(ctx); }

void ExprParser::ControleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterControle(this);
}
void ExprParser::ControleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitControle(this);
}

antlrcpp::Any ExprParser::ControleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitControle(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InstrDeclContext ------------------------------------------------------------------

ExprParser::DeclarationContext* ExprParser::InstrDeclContext::declaration() {
  return getRuleContext<ExprParser::DeclarationContext>(0);
}

ExprParser::InstrDeclContext::InstrDeclContext(InstrContext *ctx) { copyFrom(ctx); }

void ExprParser::InstrDeclContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInstrDecl(this);
}
void ExprParser::InstrDeclContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInstrDecl(this);
}

antlrcpp::Any ExprParser::InstrDeclContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitInstrDecl(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ReturnContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::ReturnContext::Return() {
  return getToken(ExprParser::Return, 0);
}

ExprParser::ExprContext* ExprParser::ReturnContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

ExprParser::ReturnContext::ReturnContext(InstrContext *ctx) { copyFrom(ctx); }

void ExprParser::ReturnContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturn(this);
}
void ExprParser::ReturnContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturn(this);
}

antlrcpp::Any ExprParser::ReturnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitReturn(this);
  else
    return visitor->visitChildren(this);
}
ExprParser::InstrContext* ExprParser::instr() {
  InstrContext *_localctx = _tracker.createInstance<InstrContext>(_ctx, getState());
  enterRule(_localctx, 14, ExprParser::RuleInstr);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(260);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::Char:
      case ExprParser::Int32_t:
      case ExprParser::Int64_t: {
        _localctx = dynamic_cast<InstrContext *>(_tracker.createInstance<ExprParser::InstrDeclContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(235);
        declaration();
        setState(236);
        match(ExprParser::T__38);
        break;
      }

      case ExprParser::Putchar: {
        _localctx = dynamic_cast<InstrContext *>(_tracker.createInstance<ExprParser::InstrPutcharContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(238);
        match(ExprParser::Putchar);
        setState(239);
        match(ExprParser::T__0);
        setState(240);
        expr(0);
        setState(241);
        match(ExprParser::T__1);
        setState(242);
        match(ExprParser::T__38);
        break;
      }

      case ExprParser::Getchar: {
        _localctx = dynamic_cast<InstrContext *>(_tracker.createInstance<ExprParser::InstrGetcharContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(244);
        match(ExprParser::Getchar);
        setState(245);
        match(ExprParser::T__0);
        setState(246);
        expr(0);
        setState(247);
        match(ExprParser::T__1);
        setState(248);
        match(ExprParser::T__38);
        break;
      }

      case ExprParser::Break: {
        _localctx = dynamic_cast<InstrContext *>(_tracker.createInstance<ExprParser::BreakContext>(_localctx));
        enterOuterAlt(_localctx, 4);
        setState(250);
        match(ExprParser::Break);
        setState(251);
        match(ExprParser::T__38);
        break;
      }

      case ExprParser::Return: {
        _localctx = dynamic_cast<InstrContext *>(_tracker.createInstance<ExprParser::ReturnContext>(_localctx));
        enterOuterAlt(_localctx, 5);
        setState(252);
        match(ExprParser::Return);
        setState(253);
        expr(0);
        setState(254);
        match(ExprParser::T__38);
        break;
      }

      case ExprParser::T__0:
      case ExprParser::T__6:
      case ExprParser::T__17:
      case ExprParser::T__21:
      case ExprParser::T__26:
      case ExprParser::T__27:
      case ExprParser::Nom:
      case ExprParser::IntVal:
      case ExprParser::CharVal: {
        _localctx = dynamic_cast<InstrContext *>(_tracker.createInstance<ExprParser::InstrExprContext>(_localctx));
        enterOuterAlt(_localctx, 6);
        setState(256);
        expr(0);
        setState(257);
        match(ExprParser::T__38);
        break;
      }

      case ExprParser::While:
      case ExprParser::If: {
        _localctx = dynamic_cast<InstrContext *>(_tracker.createInstance<ExprParser::ControleContext>(_localctx));
        enterOuterAlt(_localctx, 7);
        setState(259);
        control();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefinitionFonctionContext ------------------------------------------------------------------

ExprParser::DefinitionFonctionContext::DefinitionFonctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::DefinitionFonctionContext::getRuleIndex() const {
  return ExprParser::RuleDefinitionFonction;
}

void ExprParser::DefinitionFonctionContext::copyFrom(DefinitionFonctionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- DefFonctionTypeContext ------------------------------------------------------------------

ExprParser::TypeContext* ExprParser::DefFonctionTypeContext::type() {
  return getRuleContext<ExprParser::TypeContext>(0);
}

tree::TerminalNode* ExprParser::DefFonctionTypeContext::Nom() {
  return getToken(ExprParser::Nom, 0);
}

std::vector<ExprParser::DeclarationContext *> ExprParser::DefFonctionTypeContext::declaration() {
  return getRuleContexts<ExprParser::DeclarationContext>();
}

ExprParser::DeclarationContext* ExprParser::DefFonctionTypeContext::declaration(size_t i) {
  return getRuleContext<ExprParser::DeclarationContext>(i);
}

std::vector<ExprParser::InstrContext *> ExprParser::DefFonctionTypeContext::instr() {
  return getRuleContexts<ExprParser::InstrContext>();
}

ExprParser::InstrContext* ExprParser::DefFonctionTypeContext::instr(size_t i) {
  return getRuleContext<ExprParser::InstrContext>(i);
}

ExprParser::DefFonctionTypeContext::DefFonctionTypeContext(DefinitionFonctionContext *ctx) { copyFrom(ctx); }

void ExprParser::DefFonctionTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefFonctionType(this);
}
void ExprParser::DefFonctionTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefFonctionType(this);
}

antlrcpp::Any ExprParser::DefFonctionTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitDefFonctionType(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DefFonctionVoidContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::DefFonctionVoidContext::Void() {
  return getToken(ExprParser::Void, 0);
}

tree::TerminalNode* ExprParser::DefFonctionVoidContext::Nom() {
  return getToken(ExprParser::Nom, 0);
}

std::vector<ExprParser::DeclarationContext *> ExprParser::DefFonctionVoidContext::declaration() {
  return getRuleContexts<ExprParser::DeclarationContext>();
}

ExprParser::DeclarationContext* ExprParser::DefFonctionVoidContext::declaration(size_t i) {
  return getRuleContext<ExprParser::DeclarationContext>(i);
}

std::vector<ExprParser::InstrContext *> ExprParser::DefFonctionVoidContext::instr() {
  return getRuleContexts<ExprParser::InstrContext>();
}

ExprParser::InstrContext* ExprParser::DefFonctionVoidContext::instr(size_t i) {
  return getRuleContext<ExprParser::InstrContext>(i);
}

ExprParser::DefFonctionVoidContext::DefFonctionVoidContext(DefinitionFonctionContext *ctx) { copyFrom(ctx); }

void ExprParser::DefFonctionVoidContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefFonctionVoid(this);
}
void ExprParser::DefFonctionVoidContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefFonctionVoid(this);
}

antlrcpp::Any ExprParser::DefFonctionVoidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitDefFonctionVoid(this);
  else
    return visitor->visitChildren(this);
}
ExprParser::DefinitionFonctionContext* ExprParser::definitionFonction() {
  DefinitionFonctionContext *_localctx = _tracker.createInstance<DefinitionFonctionContext>(_ctx, getState());
  enterRule(_localctx, 16, ExprParser::RuleDefinitionFonction);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(306);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case ExprParser::Char:
      case ExprParser::Int32_t:
      case ExprParser::Int64_t: {
        _localctx = dynamic_cast<DefinitionFonctionContext *>(_tracker.createInstance<ExprParser::DefFonctionTypeContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(262);
        type();
        setState(263);
        match(ExprParser::Nom);
        setState(264);
        match(ExprParser::T__0);

        setState(265);
        declaration();
        setState(270);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == ExprParser::T__22) {
          setState(266);
          match(ExprParser::T__22);
          setState(267);
          declaration();
          setState(272);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(273);
        match(ExprParser::T__1);
        setState(274);
        match(ExprParser::T__36);
        setState(278);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << ExprParser::T__0)
          | (1ULL << ExprParser::T__6)
          | (1ULL << ExprParser::T__17)
          | (1ULL << ExprParser::T__21)
          | (1ULL << ExprParser::T__26)
          | (1ULL << ExprParser::T__27)
          | (1ULL << ExprParser::Char)
          | (1ULL << ExprParser::Int32_t)
          | (1ULL << ExprParser::Int64_t)
          | (1ULL << ExprParser::Break)
          | (1ULL << ExprParser::Return)
          | (1ULL << ExprParser::While)
          | (1ULL << ExprParser::If)
          | (1ULL << ExprParser::Putchar)
          | (1ULL << ExprParser::Getchar)
          | (1ULL << ExprParser::Nom)
          | (1ULL << ExprParser::IntVal)
          | (1ULL << ExprParser::CharVal))) != 0)) {
          setState(275);
          instr();
          setState(280);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(281);
        match(ExprParser::T__37);
        break;
      }

      case ExprParser::Void: {
        _localctx = dynamic_cast<DefinitionFonctionContext *>(_tracker.createInstance<ExprParser::DefFonctionVoidContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(283);
        match(ExprParser::Void);
        setState(284);
        match(ExprParser::Nom);
        setState(285);
        match(ExprParser::T__0);
        setState(295);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << ExprParser::Char)
          | (1ULL << ExprParser::Int32_t)
          | (1ULL << ExprParser::Int64_t))) != 0)) {
          setState(291);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
          while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
            if (alt == 1) {
              setState(286);
              declaration();
              setState(287);
              match(ExprParser::T__22); 
            }
            setState(293);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
          }
          setState(294);
          declaration();
        }
        setState(297);
        match(ExprParser::T__1);
        setState(298);
        match(ExprParser::T__36);
        setState(302);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << ExprParser::T__0)
          | (1ULL << ExprParser::T__6)
          | (1ULL << ExprParser::T__17)
          | (1ULL << ExprParser::T__21)
          | (1ULL << ExprParser::T__26)
          | (1ULL << ExprParser::T__27)
          | (1ULL << ExprParser::Char)
          | (1ULL << ExprParser::Int32_t)
          | (1ULL << ExprParser::Int64_t)
          | (1ULL << ExprParser::Break)
          | (1ULL << ExprParser::Return)
          | (1ULL << ExprParser::While)
          | (1ULL << ExprParser::If)
          | (1ULL << ExprParser::Putchar)
          | (1ULL << ExprParser::Getchar)
          | (1ULL << ExprParser::Nom)
          | (1ULL << ExprParser::IntVal)
          | (1ULL << ExprParser::CharVal))) != 0)) {
          setState(299);
          instr();
          setState(304);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(305);
        match(ExprParser::T__37);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AppelFonctContext ------------------------------------------------------------------

ExprParser::AppelFonctContext::AppelFonctContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t ExprParser::AppelFonctContext::getRuleIndex() const {
  return ExprParser::RuleAppelFonct;
}

void ExprParser::AppelFonctContext::copyFrom(AppelFonctContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- AppelFonctionExpressionContext ------------------------------------------------------------------

tree::TerminalNode* ExprParser::AppelFonctionExpressionContext::Nom() {
  return getToken(ExprParser::Nom, 0);
}

ExprParser::ExprContext* ExprParser::AppelFonctionExpressionContext::expr() {
  return getRuleContext<ExprParser::ExprContext>(0);
}

ExprParser::AppelFonctionExpressionContext::AppelFonctionExpressionContext(AppelFonctContext *ctx) { copyFrom(ctx); }

void ExprParser::AppelFonctionExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAppelFonctionExpression(this);
}
void ExprParser::AppelFonctionExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<ExprListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAppelFonctionExpression(this);
}

antlrcpp::Any ExprParser::AppelFonctionExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<ExprVisitor*>(visitor))
    return parserVisitor->visitAppelFonctionExpression(this);
  else
    return visitor->visitChildren(this);
}
ExprParser::AppelFonctContext* ExprParser::appelFonct() {
  AppelFonctContext *_localctx = _tracker.createInstance<AppelFonctContext>(_ctx, getState());
  enterRule(_localctx, 18, ExprParser::RuleAppelFonct);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    _localctx = dynamic_cast<AppelFonctContext *>(_tracker.createInstance<ExprParser::AppelFonctionExpressionContext>(_localctx));
    enterOuterAlt(_localctx, 1);
    setState(308);
    match(ExprParser::Nom);
    setState(309);
    match(ExprParser::T__0);
    setState(311);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << ExprParser::T__0)
      | (1ULL << ExprParser::T__6)
      | (1ULL << ExprParser::T__17)
      | (1ULL << ExprParser::T__21)
      | (1ULL << ExprParser::T__26)
      | (1ULL << ExprParser::T__27)
      | (1ULL << ExprParser::Nom)
      | (1ULL << ExprParser::IntVal)
      | (1ULL << ExprParser::CharVal))) != 0)) {
      setState(310);
      expr(0);
    }
    setState(313);
    match(ExprParser::T__1);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool ExprParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool ExprParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 28);
    case 1: return precpred(_ctx, 27);
    case 2: return precpred(_ctx, 26);
    case 3: return precpred(_ctx, 25);
    case 4: return precpred(_ctx, 24);
    case 5: return precpred(_ctx, 23);
    case 6: return precpred(_ctx, 22);
    case 7: return precpred(_ctx, 21);
    case 8: return precpred(_ctx, 20);
    case 9: return precpred(_ctx, 19);
    case 10: return precpred(_ctx, 18);
    case 11: return precpred(_ctx, 17);
    case 12: return precpred(_ctx, 16);
    case 13: return precpred(_ctx, 15);
    case 14: return precpred(_ctx, 14);
    case 15: return precpred(_ctx, 12);
    case 16: return precpred(_ctx, 11);
    case 17: return precpred(_ctx, 10);
    case 18: return precpred(_ctx, 9);
    case 19: return precpred(_ctx, 8);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> ExprParser::_decisionToDFA;
atn::PredictionContextCache ExprParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN ExprParser::_atn;
std::vector<uint16_t> ExprParser::_serializedATN;

std::vector<std::string> ExprParser::_ruleNames = {
  "prog", "expr", "type", "aff", "control", "blocControl", "declaration", 
  "instr", "definitionFonction", "appelFonct"
};

std::vector<std::string> ExprParser::_literalNames = {
  "", "'('", "')'", "'%'", "'*'", "'/'", "'+'", "'-'", "'<<'", "'>>'", "'&&'", 
  "'||'", "'<='", "'>='", "'>'", "'<'", "'=='", "'!='", "'!'", "'&'", "'|'", 
  "'^'", "'~'", "','", "'['", "']'", "'='", "'++'", "'--'", "'+='", "'-='", 
  "'*='", "'/='", "'%='", "'&='", "'|='", "'^='", "'{'", "'}'", "';'", "", 
  "'char'", "'int32_t'", "'int64_t'", "'break'", "'return'", "'while'", 
  "'if'", "'else'", "'elseif'", "'void'", "'putchar'", "'getchar'"
};

std::vector<std::string> ExprParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "Include", "Char", "Int32_t", "Int64_t", "Break", "Return", 
  "While", "If", "Else", "Elseif", "Void", "Putchar", "Getchar", "Nom", 
  "IntVal", "CharVal", "WS"
};

dfa::Vocabulary ExprParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> ExprParser::_tokenNames;

ExprParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x3a, 0x13e, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
    0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 
    0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 
    0x9, 0xb, 0x3, 0x2, 0x6, 0x2, 0x18, 0xa, 0x2, 0xd, 0x2, 0xe, 0x2, 0x19, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x5, 0x3, 0x2f, 0xa, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x6d, 0xa, 0x3, 
    0xc, 0x3, 0xe, 0x3, 0x70, 0xb, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 
    0x4, 0x75, 0xa, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 
    0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x5, 0x5, 0xa3, 0xa, 0x5, 0x3, 
    0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x7, 
    0x6, 0xac, 0xa, 0x6, 0xc, 0x6, 0xe, 0x6, 0xaf, 0xb, 0x6, 0x3, 0x6, 0x3, 
    0x6, 0x5, 0x6, 0xb3, 0xa, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 
    0x3, 0x6, 0x3, 0x6, 0x5, 0x6, 0xbb, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x7, 
    0x7, 0xbf, 0xa, 0x7, 0xc, 0x7, 0xe, 0x7, 0xc2, 0xb, 0x7, 0x3, 0x7, 0x3, 
    0x7, 0x5, 0x7, 0xc6, 0xa, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x5, 0x8, 0xcc, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x7, 0x8, 0xd4, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0xd7, 0xb, 
    0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xdb, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0xe1, 0xa, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 
    0x8, 0x3, 0x8, 0x7, 0x8, 0xe7, 0xa, 0x8, 0xc, 0x8, 0xe, 0x8, 0xea, 0xb, 
    0x8, 0x5, 0x8, 0xec, 0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 
    0x5, 0x9, 0x107, 0xa, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 
    0xa, 0x3, 0xa, 0x7, 0xa, 0x10f, 0xa, 0xa, 0xc, 0xa, 0xe, 0xa, 0x112, 
    0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x117, 0xa, 0xa, 0xc, 
    0xa, 0xe, 0xa, 0x11a, 0xb, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x124, 0xa, 0xa, 0xc, 
    0xa, 0xe, 0xa, 0x127, 0xb, 0xa, 0x3, 0xa, 0x5, 0xa, 0x12a, 0xa, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x7, 0xa, 0x12f, 0xa, 0xa, 0xc, 0xa, 0xe, 
    0xa, 0x132, 0xb, 0xa, 0x3, 0xa, 0x5, 0xa, 0x135, 0xa, 0xa, 0x3, 0xb, 
    0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x13a, 0xa, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 
    0xb, 0x2, 0x3, 0x4, 0xc, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 
    0x14, 0x2, 0x2, 0x2, 0x179, 0x2, 0x17, 0x3, 0x2, 0x2, 0x2, 0x4, 0x2e, 
    0x3, 0x2, 0x2, 0x2, 0x6, 0x74, 0x3, 0x2, 0x2, 0x2, 0x8, 0xa2, 0x3, 0x2, 
    0x2, 0x2, 0xa, 0xba, 0x3, 0x2, 0x2, 0x2, 0xc, 0xc5, 0x3, 0x2, 0x2, 0x2, 
    0xe, 0xeb, 0x3, 0x2, 0x2, 0x2, 0x10, 0x106, 0x3, 0x2, 0x2, 0x2, 0x12, 
    0x134, 0x3, 0x2, 0x2, 0x2, 0x14, 0x136, 0x3, 0x2, 0x2, 0x2, 0x16, 0x18, 
    0x5, 0x12, 0xa, 0x2, 0x17, 0x16, 0x3, 0x2, 0x2, 0x2, 0x18, 0x19, 0x3, 
    0x2, 0x2, 0x2, 0x19, 0x17, 0x3, 0x2, 0x2, 0x2, 0x19, 0x1a, 0x3, 0x2, 
    0x2, 0x2, 0x1a, 0x3, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x1c, 0x8, 0x3, 0x1, 
    0x2, 0x1c, 0x1d, 0x7, 0x3, 0x2, 0x2, 0x1d, 0x1e, 0x5, 0x4, 0x3, 0x2, 
    0x1e, 0x1f, 0x7, 0x4, 0x2, 0x2, 0x1f, 0x2f, 0x3, 0x2, 0x2, 0x2, 0x20, 
    0x21, 0x7, 0x14, 0x2, 0x2, 0x21, 0x2f, 0x5, 0x4, 0x3, 0xf, 0x22, 0x23, 
    0x7, 0x18, 0x2, 0x2, 0x23, 0x2f, 0x5, 0x4, 0x3, 0x9, 0x24, 0x25, 0x7, 
    0x37, 0x2, 0x2, 0x25, 0x26, 0x7, 0x1a, 0x2, 0x2, 0x26, 0x27, 0x5, 0x4, 
    0x3, 0x2, 0x27, 0x28, 0x7, 0x1b, 0x2, 0x2, 0x28, 0x2f, 0x3, 0x2, 0x2, 
    0x2, 0x29, 0x2f, 0x7, 0x37, 0x2, 0x2, 0x2a, 0x2f, 0x7, 0x38, 0x2, 0x2, 
    0x2b, 0x2f, 0x7, 0x39, 0x2, 0x2, 0x2c, 0x2f, 0x5, 0x14, 0xb, 0x2, 0x2d, 
    0x2f, 0x5, 0x8, 0x5, 0x2, 0x2e, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x20, 
    0x3, 0x2, 0x2, 0x2, 0x2e, 0x22, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x24, 0x3, 
    0x2, 0x2, 0x2, 0x2e, 0x29, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2a, 0x3, 0x2, 
    0x2, 0x2, 0x2e, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x2c, 0x3, 0x2, 0x2, 
    0x2, 0x2e, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x6e, 0x3, 0x2, 0x2, 0x2, 
    0x30, 0x31, 0xc, 0x1e, 0x2, 0x2, 0x31, 0x32, 0x7, 0x5, 0x2, 0x2, 0x32, 
    0x6d, 0x5, 0x4, 0x3, 0x1f, 0x33, 0x34, 0xc, 0x1d, 0x2, 0x2, 0x34, 0x35, 
    0x7, 0x6, 0x2, 0x2, 0x35, 0x6d, 0x5, 0x4, 0x3, 0x1e, 0x36, 0x37, 0xc, 
    0x1c, 0x2, 0x2, 0x37, 0x38, 0x7, 0x7, 0x2, 0x2, 0x38, 0x6d, 0x5, 0x4, 
    0x3, 0x1d, 0x39, 0x3a, 0xc, 0x1b, 0x2, 0x2, 0x3a, 0x3b, 0x7, 0x8, 0x2, 
    0x2, 0x3b, 0x6d, 0x5, 0x4, 0x3, 0x1c, 0x3c, 0x3d, 0xc, 0x1a, 0x2, 0x2, 
    0x3d, 0x3e, 0x7, 0x9, 0x2, 0x2, 0x3e, 0x6d, 0x5, 0x4, 0x3, 0x1b, 0x3f, 
    0x40, 0xc, 0x19, 0x2, 0x2, 0x40, 0x41, 0x7, 0xa, 0x2, 0x2, 0x41, 0x6d, 
    0x5, 0x4, 0x3, 0x1a, 0x42, 0x43, 0xc, 0x18, 0x2, 0x2, 0x43, 0x44, 0x7, 
    0xb, 0x2, 0x2, 0x44, 0x6d, 0x5, 0x4, 0x3, 0x19, 0x45, 0x46, 0xc, 0x17, 
    0x2, 0x2, 0x46, 0x47, 0x7, 0xc, 0x2, 0x2, 0x47, 0x6d, 0x5, 0x4, 0x3, 
    0x18, 0x48, 0x49, 0xc, 0x16, 0x2, 0x2, 0x49, 0x4a, 0x7, 0xd, 0x2, 0x2, 
    0x4a, 0x6d, 0x5, 0x4, 0x3, 0x17, 0x4b, 0x4c, 0xc, 0x15, 0x2, 0x2, 0x4c, 
    0x4d, 0x7, 0xe, 0x2, 0x2, 0x4d, 0x6d, 0x5, 0x4, 0x3, 0x16, 0x4e, 0x4f, 
    0xc, 0x14, 0x2, 0x2, 0x4f, 0x50, 0x7, 0xf, 0x2, 0x2, 0x50, 0x6d, 0x5, 
    0x4, 0x3, 0x15, 0x51, 0x52, 0xc, 0x13, 0x2, 0x2, 0x52, 0x53, 0x7, 0x10, 
    0x2, 0x2, 0x53, 0x6d, 0x5, 0x4, 0x3, 0x14, 0x54, 0x55, 0xc, 0x12, 0x2, 
    0x2, 0x55, 0x56, 0x7, 0x11, 0x2, 0x2, 0x56, 0x6d, 0x5, 0x4, 0x3, 0x13, 
    0x57, 0x58, 0xc, 0x11, 0x2, 0x2, 0x58, 0x59, 0x7, 0x12, 0x2, 0x2, 0x59, 
    0x6d, 0x5, 0x4, 0x3, 0x12, 0x5a, 0x5b, 0xc, 0x10, 0x2, 0x2, 0x5b, 0x5c, 
    0x7, 0x13, 0x2, 0x2, 0x5c, 0x6d, 0x5, 0x4, 0x3, 0x11, 0x5d, 0x5e, 0xc, 
    0xe, 0x2, 0x2, 0x5e, 0x5f, 0x7, 0x15, 0x2, 0x2, 0x5f, 0x6d, 0x5, 0x4, 
    0x3, 0xf, 0x60, 0x61, 0xc, 0xd, 0x2, 0x2, 0x61, 0x62, 0x7, 0x16, 0x2, 
    0x2, 0x62, 0x6d, 0x5, 0x4, 0x3, 0xe, 0x63, 0x64, 0xc, 0xc, 0x2, 0x2, 
    0x64, 0x65, 0x7, 0x17, 0x2, 0x2, 0x65, 0x6d, 0x5, 0x4, 0x3, 0xd, 0x66, 
    0x67, 0xc, 0xb, 0x2, 0x2, 0x67, 0x68, 0x7, 0x18, 0x2, 0x2, 0x68, 0x6d, 
    0x5, 0x4, 0x3, 0xc, 0x69, 0x6a, 0xc, 0xa, 0x2, 0x2, 0x6a, 0x6b, 0x7, 
    0x19, 0x2, 0x2, 0x6b, 0x6d, 0x5, 0x4, 0x3, 0xb, 0x6c, 0x30, 0x3, 0x2, 
    0x2, 0x2, 0x6c, 0x33, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x36, 0x3, 0x2, 0x2, 
    0x2, 0x6c, 0x39, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x3c, 0x3, 0x2, 0x2, 0x2, 
    0x6c, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x42, 0x3, 0x2, 0x2, 0x2, 0x6c, 
    0x45, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x48, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x4b, 
    0x3, 0x2, 0x2, 0x2, 0x6c, 0x4e, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x51, 0x3, 
    0x2, 0x2, 0x2, 0x6c, 0x54, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x57, 0x3, 0x2, 
    0x2, 0x2, 0x6c, 0x5a, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x5d, 0x3, 0x2, 0x2, 
    0x2, 0x6c, 0x60, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x63, 0x3, 0x2, 0x2, 0x2, 
    0x6c, 0x66, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x69, 0x3, 0x2, 0x2, 0x2, 0x6d, 
    0x70, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6f, 
    0x3, 0x2, 0x2, 0x2, 0x6f, 0x5, 0x3, 0x2, 0x2, 0x2, 0x70, 0x6e, 0x3, 
    0x2, 0x2, 0x2, 0x71, 0x75, 0x7, 0x2b, 0x2, 0x2, 0x72, 0x75, 0x7, 0x2c, 
    0x2, 0x2, 0x73, 0x75, 0x7, 0x2d, 0x2, 0x2, 0x74, 0x71, 0x3, 0x2, 0x2, 
    0x2, 0x74, 0x72, 0x3, 0x2, 0x2, 0x2, 0x74, 0x73, 0x3, 0x2, 0x2, 0x2, 
    0x75, 0x7, 0x3, 0x2, 0x2, 0x2, 0x76, 0x77, 0x7, 0x37, 0x2, 0x2, 0x77, 
    0x78, 0x7, 0x1c, 0x2, 0x2, 0x78, 0xa3, 0x5, 0x4, 0x3, 0x2, 0x79, 0x7a, 
    0x7, 0x37, 0x2, 0x2, 0x7a, 0x7b, 0x7, 0x1a, 0x2, 0x2, 0x7b, 0x7c, 0x5, 
    0x4, 0x3, 0x2, 0x7c, 0x7d, 0x7, 0x1b, 0x2, 0x2, 0x7d, 0x7e, 0x7, 0x1c, 
    0x2, 0x2, 0x7e, 0x7f, 0x5, 0x4, 0x3, 0x2, 0x7f, 0xa3, 0x3, 0x2, 0x2, 
    0x2, 0x80, 0x81, 0x7, 0x37, 0x2, 0x2, 0x81, 0xa3, 0x7, 0x1d, 0x2, 0x2, 
    0x82, 0x83, 0x7, 0x1d, 0x2, 0x2, 0x83, 0xa3, 0x7, 0x37, 0x2, 0x2, 0x84, 
    0x85, 0x7, 0x37, 0x2, 0x2, 0x85, 0xa3, 0x7, 0x1e, 0x2, 0x2, 0x86, 0x87, 
    0x7, 0x1e, 0x2, 0x2, 0x87, 0xa3, 0x7, 0x37, 0x2, 0x2, 0x88, 0x89, 0x7, 
    0x9, 0x2, 0x2, 0x89, 0xa3, 0x7, 0x37, 0x2, 0x2, 0x8a, 0x8b, 0x7, 0x37, 
    0x2, 0x2, 0x8b, 0x8c, 0x7, 0x1f, 0x2, 0x2, 0x8c, 0xa3, 0x5, 0x4, 0x3, 
    0x2, 0x8d, 0x8e, 0x7, 0x37, 0x2, 0x2, 0x8e, 0x8f, 0x7, 0x20, 0x2, 0x2, 
    0x8f, 0xa3, 0x5, 0x4, 0x3, 0x2, 0x90, 0x91, 0x7, 0x37, 0x2, 0x2, 0x91, 
    0x92, 0x7, 0x21, 0x2, 0x2, 0x92, 0xa3, 0x5, 0x4, 0x3, 0x2, 0x93, 0x94, 
    0x7, 0x37, 0x2, 0x2, 0x94, 0x95, 0x7, 0x22, 0x2, 0x2, 0x95, 0xa3, 0x5, 
    0x4, 0x3, 0x2, 0x96, 0x97, 0x7, 0x37, 0x2, 0x2, 0x97, 0x98, 0x7, 0x23, 
    0x2, 0x2, 0x98, 0xa3, 0x5, 0x4, 0x3, 0x2, 0x99, 0x9a, 0x7, 0x37, 0x2, 
    0x2, 0x9a, 0x9b, 0x7, 0x24, 0x2, 0x2, 0x9b, 0xa3, 0x5, 0x4, 0x3, 0x2, 
    0x9c, 0x9d, 0x7, 0x37, 0x2, 0x2, 0x9d, 0x9e, 0x7, 0x25, 0x2, 0x2, 0x9e, 
    0xa3, 0x5, 0x4, 0x3, 0x2, 0x9f, 0xa0, 0x7, 0x37, 0x2, 0x2, 0xa0, 0xa1, 
    0x7, 0x26, 0x2, 0x2, 0xa1, 0xa3, 0x5, 0x4, 0x3, 0x2, 0xa2, 0x76, 0x3, 
    0x2, 0x2, 0x2, 0xa2, 0x79, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x80, 0x3, 0x2, 
    0x2, 0x2, 0xa2, 0x82, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x84, 0x3, 0x2, 0x2, 
    0x2, 0xa2, 0x86, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x88, 0x3, 0x2, 0x2, 0x2, 
    0xa2, 0x8a, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x8d, 0x3, 0x2, 0x2, 0x2, 0xa2, 
    0x90, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x93, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x96, 
    0x3, 0x2, 0x2, 0x2, 0xa2, 0x99, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x9c, 0x3, 
    0x2, 0x2, 0x2, 0xa2, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xa3, 0x9, 0x3, 0x2, 
    0x2, 0x2, 0xa4, 0xa5, 0x7, 0x31, 0x2, 0x2, 0xa5, 0xa6, 0x7, 0x3, 0x2, 
    0x2, 0xa6, 0xa7, 0x5, 0x4, 0x3, 0x2, 0xa7, 0xa8, 0x7, 0x4, 0x2, 0x2, 
    0xa8, 0xad, 0x5, 0xc, 0x7, 0x2, 0xa9, 0xaa, 0x7, 0x33, 0x2, 0x2, 0xaa, 
    0xac, 0x5, 0xc, 0x7, 0x2, 0xab, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xac, 0xaf, 
    0x3, 0x2, 0x2, 0x2, 0xad, 0xab, 0x3, 0x2, 0x2, 0x2, 0xad, 0xae, 0x3, 
    0x2, 0x2, 0x2, 0xae, 0xb2, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xad, 0x3, 0x2, 
    0x2, 0x2, 0xb0, 0xb1, 0x7, 0x32, 0x2, 0x2, 0xb1, 0xb3, 0x5, 0xc, 0x7, 
    0x2, 0xb2, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb3, 0x3, 0x2, 0x2, 0x2, 
    0xb3, 0xbb, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb5, 0x7, 0x30, 0x2, 0x2, 0xb5, 
    0xb6, 0x7, 0x3, 0x2, 0x2, 0xb6, 0xb7, 0x5, 0x4, 0x3, 0x2, 0xb7, 0xb8, 
    0x7, 0x4, 0x2, 0x2, 0xb8, 0xb9, 0x5, 0xc, 0x7, 0x2, 0xb9, 0xbb, 0x3, 
    0x2, 0x2, 0x2, 0xba, 0xa4, 0x3, 0x2, 0x2, 0x2, 0xba, 0xb4, 0x3, 0x2, 
    0x2, 0x2, 0xbb, 0xb, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xc0, 0x7, 0x27, 0x2, 
    0x2, 0xbd, 0xbf, 0x5, 0x10, 0x9, 0x2, 0xbe, 0xbd, 0x3, 0x2, 0x2, 0x2, 
    0xbf, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc0, 0xbe, 0x3, 0x2, 0x2, 0x2, 0xc0, 
    0xc1, 0x3, 0x2, 0x2, 0x2, 0xc1, 0xc3, 0x3, 0x2, 0x2, 0x2, 0xc2, 0xc0, 
    0x3, 0x2, 0x2, 0x2, 0xc3, 0xc6, 0x7, 0x28, 0x2, 0x2, 0xc4, 0xc6, 0x5, 
    0x10, 0x9, 0x2, 0xc5, 0xbc, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc4, 0x3, 0x2, 
    0x2, 0x2, 0xc6, 0xd, 0x3, 0x2, 0x2, 0x2, 0xc7, 0xc8, 0x5, 0x6, 0x4, 
    0x2, 0xc8, 0xc9, 0x7, 0x37, 0x2, 0x2, 0xc9, 0xcb, 0x7, 0x1a, 0x2, 0x2, 
    0xca, 0xcc, 0x5, 0x4, 0x3, 0x2, 0xcb, 0xca, 0x3, 0x2, 0x2, 0x2, 0xcb, 
    0xcc, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xda, 
    0x7, 0x1b, 0x2, 0x2, 0xce, 0xcf, 0x7, 0x1c, 0x2, 0x2, 0xcf, 0xd0, 0x7, 
    0x27, 0x2, 0x2, 0xd0, 0xd5, 0x5, 0x4, 0x3, 0x2, 0xd1, 0xd2, 0x7, 0x19, 
    0x2, 0x2, 0xd2, 0xd4, 0x5, 0x4, 0x3, 0x2, 0xd3, 0xd1, 0x3, 0x2, 0x2, 
    0x2, 0xd4, 0xd7, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd3, 0x3, 0x2, 0x2, 0x2, 
    0xd5, 0xd6, 0x3, 0x2, 0x2, 0x2, 0xd6, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xd7, 
    0xd5, 0x3, 0x2, 0x2, 0x2, 0xd8, 0xd9, 0x7, 0x28, 0x2, 0x2, 0xd9, 0xdb, 
    0x3, 0x2, 0x2, 0x2, 0xda, 0xce, 0x3, 0x2, 0x2, 0x2, 0xda, 0xdb, 0x3, 
    0x2, 0x2, 0x2, 0xdb, 0xec, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdd, 0x5, 0x6, 
    0x4, 0x2, 0xdd, 0xe0, 0x7, 0x37, 0x2, 0x2, 0xde, 0xdf, 0x7, 0x1c, 0x2, 
    0x2, 0xdf, 0xe1, 0x5, 0x4, 0x3, 0x2, 0xe0, 0xde, 0x3, 0x2, 0x2, 0x2, 
    0xe0, 0xe1, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xec, 0x3, 0x2, 0x2, 0x2, 0xe2, 
    0xe3, 0x5, 0x6, 0x4, 0x2, 0xe3, 0xe8, 0x7, 0x37, 0x2, 0x2, 0xe4, 0xe5, 
    0x7, 0x19, 0x2, 0x2, 0xe5, 0xe7, 0x7, 0x37, 0x2, 0x2, 0xe6, 0xe4, 0x3, 
    0x2, 0x2, 0x2, 0xe7, 0xea, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe6, 0x3, 0x2, 
    0x2, 0x2, 0xe8, 0xe9, 0x3, 0x2, 0x2, 0x2, 0xe9, 0xec, 0x3, 0x2, 0x2, 
    0x2, 0xea, 0xe8, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xc7, 0x3, 0x2, 0x2, 0x2, 
    0xeb, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xeb, 0xe2, 0x3, 0x2, 0x2, 0x2, 0xec, 
    0xf, 0x3, 0x2, 0x2, 0x2, 0xed, 0xee, 0x5, 0xe, 0x8, 0x2, 0xee, 0xef, 
    0x7, 0x29, 0x2, 0x2, 0xef, 0x107, 0x3, 0x2, 0x2, 0x2, 0xf0, 0xf1, 0x7, 
    0x35, 0x2, 0x2, 0xf1, 0xf2, 0x7, 0x3, 0x2, 0x2, 0xf2, 0xf3, 0x5, 0x4, 
    0x3, 0x2, 0xf3, 0xf4, 0x7, 0x4, 0x2, 0x2, 0xf4, 0xf5, 0x7, 0x29, 0x2, 
    0x2, 0xf5, 0x107, 0x3, 0x2, 0x2, 0x2, 0xf6, 0xf7, 0x7, 0x36, 0x2, 0x2, 
    0xf7, 0xf8, 0x7, 0x3, 0x2, 0x2, 0xf8, 0xf9, 0x5, 0x4, 0x3, 0x2, 0xf9, 
    0xfa, 0x7, 0x4, 0x2, 0x2, 0xfa, 0xfb, 0x7, 0x29, 0x2, 0x2, 0xfb, 0x107, 
    0x3, 0x2, 0x2, 0x2, 0xfc, 0xfd, 0x7, 0x2e, 0x2, 0x2, 0xfd, 0x107, 0x7, 
    0x29, 0x2, 0x2, 0xfe, 0xff, 0x7, 0x2f, 0x2, 0x2, 0xff, 0x100, 0x5, 0x4, 
    0x3, 0x2, 0x100, 0x101, 0x7, 0x29, 0x2, 0x2, 0x101, 0x107, 0x3, 0x2, 
    0x2, 0x2, 0x102, 0x103, 0x5, 0x4, 0x3, 0x2, 0x103, 0x104, 0x7, 0x29, 
    0x2, 0x2, 0x104, 0x107, 0x3, 0x2, 0x2, 0x2, 0x105, 0x107, 0x5, 0xa, 
    0x6, 0x2, 0x106, 0xed, 0x3, 0x2, 0x2, 0x2, 0x106, 0xf0, 0x3, 0x2, 0x2, 
    0x2, 0x106, 0xf6, 0x3, 0x2, 0x2, 0x2, 0x106, 0xfc, 0x3, 0x2, 0x2, 0x2, 
    0x106, 0xfe, 0x3, 0x2, 0x2, 0x2, 0x106, 0x102, 0x3, 0x2, 0x2, 0x2, 0x106, 
    0x105, 0x3, 0x2, 0x2, 0x2, 0x107, 0x11, 0x3, 0x2, 0x2, 0x2, 0x108, 0x109, 
    0x5, 0x6, 0x4, 0x2, 0x109, 0x10a, 0x7, 0x37, 0x2, 0x2, 0x10a, 0x10b, 
    0x7, 0x3, 0x2, 0x2, 0x10b, 0x110, 0x5, 0xe, 0x8, 0x2, 0x10c, 0x10d, 
    0x7, 0x19, 0x2, 0x2, 0x10d, 0x10f, 0x5, 0xe, 0x8, 0x2, 0x10e, 0x10c, 
    0x3, 0x2, 0x2, 0x2, 0x10f, 0x112, 0x3, 0x2, 0x2, 0x2, 0x110, 0x10e, 
    0x3, 0x2, 0x2, 0x2, 0x110, 0x111, 0x3, 0x2, 0x2, 0x2, 0x111, 0x113, 
    0x3, 0x2, 0x2, 0x2, 0x112, 0x110, 0x3, 0x2, 0x2, 0x2, 0x113, 0x114, 
    0x7, 0x4, 0x2, 0x2, 0x114, 0x118, 0x7, 0x27, 0x2, 0x2, 0x115, 0x117, 
    0x5, 0x10, 0x9, 0x2, 0x116, 0x115, 0x3, 0x2, 0x2, 0x2, 0x117, 0x11a, 
    0x3, 0x2, 0x2, 0x2, 0x118, 0x116, 0x3, 0x2, 0x2, 0x2, 0x118, 0x119, 
    0x3, 0x2, 0x2, 0x2, 0x119, 0x11b, 0x3, 0x2, 0x2, 0x2, 0x11a, 0x118, 
    0x3, 0x2, 0x2, 0x2, 0x11b, 0x11c, 0x7, 0x28, 0x2, 0x2, 0x11c, 0x135, 
    0x3, 0x2, 0x2, 0x2, 0x11d, 0x11e, 0x7, 0x34, 0x2, 0x2, 0x11e, 0x11f, 
    0x7, 0x37, 0x2, 0x2, 0x11f, 0x129, 0x7, 0x3, 0x2, 0x2, 0x120, 0x121, 
    0x5, 0xe, 0x8, 0x2, 0x121, 0x122, 0x7, 0x19, 0x2, 0x2, 0x122, 0x124, 
    0x3, 0x2, 0x2, 0x2, 0x123, 0x120, 0x3, 0x2, 0x2, 0x2, 0x124, 0x127, 
    0x3, 0x2, 0x2, 0x2, 0x125, 0x123, 0x3, 0x2, 0x2, 0x2, 0x125, 0x126, 
    0x3, 0x2, 0x2, 0x2, 0x126, 0x128, 0x3, 0x2, 0x2, 0x2, 0x127, 0x125, 
    0x3, 0x2, 0x2, 0x2, 0x128, 0x12a, 0x5, 0xe, 0x8, 0x2, 0x129, 0x125, 
    0x3, 0x2, 0x2, 0x2, 0x129, 0x12a, 0x3, 0x2, 0x2, 0x2, 0x12a, 0x12b, 
    0x3, 0x2, 0x2, 0x2, 0x12b, 0x12c, 0x7, 0x4, 0x2, 0x2, 0x12c, 0x130, 
    0x7, 0x27, 0x2, 0x2, 0x12d, 0x12f, 0x5, 0x10, 0x9, 0x2, 0x12e, 0x12d, 
    0x3, 0x2, 0x2, 0x2, 0x12f, 0x132, 0x3, 0x2, 0x2, 0x2, 0x130, 0x12e, 
    0x3, 0x2, 0x2, 0x2, 0x130, 0x131, 0x3, 0x2, 0x2, 0x2, 0x131, 0x133, 
    0x3, 0x2, 0x2, 0x2, 0x132, 0x130, 0x3, 0x2, 0x2, 0x2, 0x133, 0x135, 
    0x7, 0x28, 0x2, 0x2, 0x134, 0x108, 0x3, 0x2, 0x2, 0x2, 0x134, 0x11d, 
    0x3, 0x2, 0x2, 0x2, 0x135, 0x13, 0x3, 0x2, 0x2, 0x2, 0x136, 0x137, 0x7, 
    0x37, 0x2, 0x2, 0x137, 0x139, 0x7, 0x3, 0x2, 0x2, 0x138, 0x13a, 0x5, 
    0x4, 0x3, 0x2, 0x139, 0x138, 0x3, 0x2, 0x2, 0x2, 0x139, 0x13a, 0x3, 
    0x2, 0x2, 0x2, 0x13a, 0x13b, 0x3, 0x2, 0x2, 0x2, 0x13b, 0x13c, 0x7, 
    0x4, 0x2, 0x2, 0x13c, 0x15, 0x3, 0x2, 0x2, 0x2, 0x1b, 0x19, 0x2e, 0x6c, 
    0x6e, 0x74, 0xa2, 0xad, 0xb2, 0xba, 0xc0, 0xc5, 0xcb, 0xd5, 0xda, 0xe0, 
    0xe8, 0xeb, 0x106, 0x110, 0x118, 0x125, 0x129, 0x130, 0x134, 0x139, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

ExprParser::Initializer ExprParser::_init;
