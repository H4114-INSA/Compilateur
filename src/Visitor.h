//
// Created by thomas on 15/03/18.
//

#ifndef COMPILATEUR_VISITOR_H
#define COMPILATEUR_VISITOR_H

#endif //COMPILATEUR_VISITOR_H


#pragma once


#include "antlr4-runtime/antlr4-runtime.h"
#include "ExprVisitor.h"
#include "Program.h"
#include "Expression.h"
#include "ExpressionConstante.h"
#include "Fonction.h"
#include "Instruction.h"
#include "Declaration.h"
#include "Type.h"

using namespace std;


class  Visitor : public ExprVisitor {
public:

    virtual antlrcpp::Any visitProg(ExprParser::ProgContext *ctx) override {
        return (Program*) visitChildren(ctx);
    }

    virtual antlrcpp::Any visitIntVal(ExprParser::IntValContext *ctx) override {
        ExpressionConstante a (TypeValeur ::type_int,stoi(ctx->IntVal()->getText()));
        return a;
    }

    virtual antlrcpp::Any visitMod(ExprParser::ModContext *ctx) override {
        //return (Expression) (visitChildren(ctx->expr(0)) % visitChildren(ctx->expr(1)));
    	return (Expression*) new
    	    	    	               ExpressionBinaire(
    	    	    	                   (Expression*) visit(ctx->expr(0)),
    	    	    	                   (Expression*) visit(ctx->expr(1)),
										   SymboleBinaire::mod
    	    	    	               );
    }

    virtual antlrcpp::Any visitMult(ExprParser::MultContext *ctx) override {
    	return (Expression*) new
    	    	    	               ExpressionBinaire(
    	    	    	                   (Expression*) visit(ctx->expr(0)),
    	    	    	                   (Expression*) visit(ctx->expr(1)),
										   SymboleBinaire::mult
    	    	    	               );
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
    	return (Expression*) new
    	    	    	               ExpressionBinaire(
    	    	    	                   (Expression*) visit(ctx->expr(0)),
    	    	    	                   (Expression*) visit(ctx->expr(1)),
										   SymboleBinaire::div
    	    	    	               );
    }

    virtual antlrcpp::Any visitNot(ExprParser::NotContext *ctx) override {
    	return (Expression*) new
    	    	    	               ExpressionBinaire(
    	    	    	                   (Expression*) visit(ctx->expr(0)),
    	    	    	                   (Expression*) visit(ctx->expr(1)),
										   SymboleBinaire::non
    	    	    	               );
    }

    virtual antlrcpp::Any visitAnd(ExprParser::AndContext *ctx) override {
    	return (Expression*) new
    	    	    	               ExpressionBinaire(
    	    	    	                   (Expression*) visit(ctx->expr(0)),
    	    	    	                   (Expression*) visit(ctx->expr(1)),
										   SymboleBinaire::et
    	    	    	               );
    }

    virtual antlrcpp::Any visitXor(ExprParser::XorContext *ctx) override {
    	return (Expression*) new
    	    	    	               ExpressionBinaire(
    	    	    	                   (Expression*) visit(ctx->expr(0)),
    	    	    	                   (Expression*) visit(ctx->expr(1)),
										   SymboleBinaire::ouex
    	    	    	               );
    }

    virtual antlrcpp::Any visitRightShift(ExprParser::RightShiftContext *ctx) override {
    	return (Expression*) new
    	    	    	               ExpressionBinaire(
    	    	    	                   (Expression*) visit(ctx->expr(0)),
    	    	    	                   (Expression*) visit(ctx->expr(1))
    	    	    	               );
    }

    virtual antlrcpp::Any visitLeftShift(ExprParser::LeftShiftContext *ctx) override {
    	return (Expression*) new
    	    	    	               ExpressionBinaire(
    	    	    	                   (Expression*) visit(ctx->expr(0)),
    	    	    	                   (Expression*) visit(ctx->expr(1))
    	    	    	               );
    }

    virtual antlrcpp::Any visitPar(ExprParser::ParContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitAdd(ExprParser::AddContext *ctx) override {
    	return (Expression*) new
    	               ExpressionBinaire(
    	                   (Expression*) visit(ctx->expr(0)),
    	                   (Expression*) visit(ctx->expr(1))
    	               );
    }

    virtual antlrcpp::Any visitEgal(ExprParser::EgalContext *ctx) override {
    	return (Expression*) new
    	    	               ExpressionBinaire(
    	    	                   (Expression*) visit(ctx->expr(0)),
    	    	                   (Expression*) visit(ctx->expr(1))
    	    	               );
    }

    virtual antlrcpp::Any visitOr(ExprParser::OrContext *ctx) override {
    	return (Expression*) new
    	    	               ExpressionBinaire(
    	    	                   (Expression*) visit(ctx->expr(0)),
    	    	                   (Expression*) visit(ctx->expr(1))
    	    	               );
    }

    virtual antlrcpp::Any visitSupEgal(ExprParser::SupEgalContext *ctx) override {
    	return (Expression*) new
    	    	               ExpressionBinaire(
    	    	                   (Expression*) visit(ctx->expr(0)),
    	    	                   (Expression*) visit(ctx->expr(1))
    	    	               );
    }

    virtual antlrcpp::Any visitOu(ExprParser::OuContext *ctx) override {
    	return (Expression*) new
    	    	    	               ExpressionBinaire(
    	    	    	                   (Expression*) visit(ctx->expr(0)),
    	    	    	                   (Expression*) visit(ctx->expr(1))
    	    	    	               );
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

    virtual antlrcpp::Any visitDecVariable(ExprParser::DecVariableContext *ctx) override {
        return visitChildren(ctx);
    }

    virtual antlrcpp::Any visitDecVariableMultiple(ExprParser::DecVariableMultipleContext *ctx) override {
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

    virtual antlrcpp::Any visitAppelFonctionExpression(ExprParser::AppelFonctionExpressionContext *ctx) override {
        return visitChildren(ctx);
    }


};

