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


    antlrcpp::Any visitProg(ExprParser::ProgContext *ctx) override {
        return (Program*) visitChildren(ctx);
    }
  
    virtual antlrcpp::Any visitIntVal(ExprParser::IntValContext *ctx) override {
        /*ExpressionConstante a (TypeValeur ::type_int,stoi(ctx->IntVal()->getText()));
        return a;*/
        return visitChildren(ctx);
    }

    //Expressions Binaires
    antlrcpp::Any visitMod(ExprParser::ModContext *ctx) override {
    	return (Expression*) new
    	    	    	               ExpressionBinaire(
    	    	    	                   (Expression*) visit(ctx->expr(0)),
    	    	    	                   (Expression*) visit(ctx->expr(1)),
										   SymboleBinaire::mod
    	    	    	               );
    }

     antlrcpp::Any visitMult(ExprParser::MultContext *ctx) override {
    	return (Expression*) new
    	    	    	               ExpressionBinaire(
    	    	    	                   (Expression*) visit(ctx->expr(0)),
    	    	    	                   (Expression*) visit(ctx->expr(1)),
										   SymboleBinaire::mult
    	    	    	               );
    }

     antlrcpp::Any visitDiv(ExprParser::DivContext *ctx) override {
        	return (Expression*) new
        	    	    	               ExpressionBinaire(
        	    	    	                   (Expression*) visit(ctx->expr(0)),
        	    	    	                   (Expression*) visit(ctx->expr(1)),
    										   SymboleBinaire::div
        	    	    	               );
	}

	 antlrcpp::Any visitNot(ExprParser::NotContext *ctx) override {
		return (Expression*) new
									   ExpressionBinaire(
										   (Expression*) visit(ctx->expr(0)),
										   (Expression*) visit(ctx->expr(1)),
										   SymboleBinaire::non
									   );
	}

	 antlrcpp::Any visitAnd(ExprParser::AndContext *ctx) override {
		return (Expression*) new
									   ExpressionBinaire(
										   (Expression*) visit(ctx->expr(0)),
										   (Expression*) visit(ctx->expr(1)),
										   SymboleBinaire::et
									   );
	}

	 antlrcpp::Any visitXor(ExprParser::XorContext *ctx) override {
		return (Expression*) new
									   ExpressionBinaire(
										   (Expression*) visit(ctx->expr(0)),
										   (Expression*) visit(ctx->expr(1)),
										   SymboleBinaire::ouex
									   );
	}

	 antlrcpp::Any visitRightShift(ExprParser::RightShiftContext *ctx) override {
		return (Expression*) new
									   ExpressionBinaire(
										   (Expression*) visit(ctx->expr(0)),
										   (Expression*) visit(ctx->expr(1)),
										   SymboleBinaire::rightshift
									   );
	}

	 antlrcpp::Any visitLeftShift(ExprParser::LeftShiftContext *ctx) override {
		return (Expression*) new
									   ExpressionBinaire(
										   (Expression*) visit(ctx->expr(0)),
										   (Expression*) visit(ctx->expr(1)),
										   SymboleBinaire::leftshift
									   );
	}

	 antlrcpp::Any visitAdd(ExprParser::AddContext *ctx) override {
			return (Expression*) new
						   ExpressionBinaire(
							   (Expression*) visit(ctx->expr(0)),
							   (Expression*) visit(ctx->expr(1)),
							   SymboleBinaire::plus
						   );
	}

	 antlrcpp::Any visitEgal(ExprParser::EgalContext *ctx) override {
		return (Expression*) new
							   ExpressionBinaire(
								   (Expression*) visit(ctx->expr(0)),
								   (Expression*) visit(ctx->expr(1)),
								   SymboleBinaire::egalegal
							   );
	}

	 antlrcpp::Any visitOr(ExprParser::OrContext *ctx) override {
		return (Expression*) new
							   ExpressionBinaire(
								   (Expression*) visit(ctx->expr(0)),
								   (Expression*) visit(ctx->expr(1)),
								   SymboleBinaire::ou
							   );
	}

	 antlrcpp::Any visitSupEgal(ExprParser::SupEgalContext *ctx) override {
		return (Expression*) new
							   ExpressionBinaire(
								   (Expression*) visit(ctx->expr(0)),
								   (Expression*) visit(ctx->expr(1)),
								   SymboleBinaire::supegal
							   );
	}

	 antlrcpp::Any visitOu(ExprParser::OuContext *ctx) override {
		return (Expression*) new
									   ExpressionBinaire(
										   (Expression*) visit(ctx->expr(0)),
										   (Expression*) visit(ctx->expr(1)),
										   SymboleBinaire::bor
									   );
	}

	 antlrcpp::Any visitStrictSup(ExprParser::StrictSupContext *ctx) override {
			return (Expression*) new
										   ExpressionBinaire(
											   (Expression*) visit(ctx->expr(0)),
											   (Expression*) visit(ctx->expr(1)),
											   SymboleBinaire::strictup
										   );
		}

 antlrcpp::Any visitDiff(ExprParser::DiffContext *ctx) override {
	return (Expression*) new
								   ExpressionBinaire(
									   (Expression*) visit(ctx->expr(0)),
									   (Expression*) visit(ctx->expr(1)),
									   SymboleBinaire::diff
								   );
}

 antlrcpp::Any visitEt(ExprParser::EtContext *ctx) override {
	return (Expression*) new
								   ExpressionBinaire(
									   (Expression*) visit(ctx->expr(0)),
									   (Expression*) visit(ctx->expr(1)),
									   SymboleBinaire::band
								   );
}

 antlrcpp::Any visitInfEgal(ExprParser::InfEgalContext *ctx) override {
	return (Expression*) new
								   ExpressionBinaire(
									   (Expression*) visit(ctx->expr(0)),
									   (Expression*) visit(ctx->expr(1)),
									   SymboleBinaire::infegal
								   );
}

 antlrcpp::Any visitMoins(ExprParser::MoinsContext *ctx) override {
		return (Expression*) new
									   ExpressionBinaire(
										   (Expression*) visit(ctx->expr(0)),
										   (Expression*) visit(ctx->expr(1)),
										   SymboleBinaire::moins
									   );
	}

	 antlrcpp::Any visitStrictInf(ExprParser::StrictInfContext *ctx) override {
		return (Expression*) new
									   ExpressionBinaire(
										   (Expression*) visit(ctx->expr(0)),
										   (Expression*) visit(ctx->expr(1)),
										   SymboleBinaire::strictinf
									   );
	}

     antlrcpp::Any visitComma(ExprParser::CommaContext *ctx) override {
    	return (Expression*) new
									   ExpressionBinaire(
										   (Expression*) visit(ctx->expr(0)),
										   (Expression*) visit(ctx->expr(1)),
										   SymboleBinaire::virgule
									   );
    }

     antlrcpp::Any visitPlusEgal(ExprParser::PlusEgalContext *ctx) override {
    	 return (Expression*) new
									   ExpressionBinaire(
										   (Expression*) visit(ctx->expr(0)),
										   (Expression*) visit(ctx->expr(1)),
										   SymboleBinaire::pluseq
									   );
        }

	 antlrcpp::Any visitMoinsEgal(ExprParser::MoinsEgalContext *ctx) override {
		 return (Expression*) new
									   ExpressionBinaire(
										   (Expression*) visit(ctx->expr(0)),
										   (Expression*) visit(ctx->expr(1)),
										   SymboleBinaire::moinseq
									   );
	}

	 antlrcpp::Any visitMultEgal(ExprParser::MultEgalContext *ctx) override {
		 return (Expression*) new
									   ExpressionBinaire(
										   (Expression*) visit(ctx->expr(0)),
										   (Expression*) visit(ctx->expr(1)),
										   SymboleBinaire::multeq
									   );
	}

	 antlrcpp::Any visitDivEgal(ExprParser::DivEgalContext *ctx) override {
		 return (Expression*) new
									   ExpressionBinaire(
										   (Expression*) visit(ctx->expr(0)),
										   (Expression*) visit(ctx->expr(1)),
										   SymboleBinaire::divseq
									   );
	}

	 antlrcpp::Any visitModEgal(ExprParser::ModEgalContext *ctx) override {
		 return (Expression*) new
									   ExpressionBinaire(
										   (Expression*) visit(ctx->expr(0)),
										   (Expression*) visit(ctx->expr(1)),
										   SymboleBinaire::modeq
									   );
	}

	 antlrcpp::Any visitAndEgal(ExprParser::AndEgalContext *ctx) override {
		 return (Expression*) new
									   ExpressionBinaire(
										   (Expression*) visit(ctx->expr(0)),
										   (Expression*) visit(ctx->expr(1)),
										   SymboleBinaire::ampeq
									   );
	     }

	  antlrcpp::Any visitOrEgal(ExprParser::OrEgalContext *ctx) override {
		  return (Expression*) new
									   ExpressionBinaire(
										   (Expression*) visit(ctx->expr(0)),
										   (Expression*) visit(ctx->expr(1)),
										   SymboleBinaire::boreq
									   );
	 }

	  antlrcpp::Any visitXorEgal(ExprParser::XorEgalContext *ctx) override {
		  return (Expression*) new
									   ExpressionBinaire(
										   (Expression*) visit(ctx->expr(0)),
										   (Expression*) visit(ctx->expr(1)),
										   SymboleBinaire::bxoreq
									   );
	 }


    //Expressions unaires
     antlrcpp::Any visitNon(ExprParser::NonContext *ctx) override {
    	return (Expression*) new
								   ExpressionUnaire(
									   (Expression*) visit(ctx->expr()),
									   SymboleUnaire::non
								   );
    }

     antlrcpp::Any visitNotExpr(ExprParser::NotExprContext *ctx) override {
    	return (Expression*) new
								   ExpressionUnaire(
									   (Expression*) visit(ctx->expr()),
									   SymboleUnaire::bnot
								   );
    }

     antlrcpp::Any visitPostIncrement(ExprParser::PostIncrementContext *ctx) override {
    	return (Expression*) new
								ExpressionUnaire(
										(Expression*) visit(ctx->expr()),
										SymboleUnaire::incr
									);
    }

     antlrcpp::Any visitPreIncrement(ExprParser::PreIncrementContext *ctx) override {
    	 return (Expression*) new
								ExpressionUnaire(
										(Expression*) visit(ctx->expr()),
										SymboleUnaire::incr
									);
    }

     antlrcpp::Any visitPostDecrement(ExprParser::PostDecrementContext *ctx) override {
    	 return (Expression*) new
								ExpressionUnaire(
										(Expression*) visit(ctx->expr()),
										SymboleUnaire::decr
									);
    }

     antlrcpp::Any visitPreDecrement(ExprParser::PreDecrementContext *ctx) override {
    	 return (Expression*) new
									ExpressionUnaire(
											(Expression*) visit(ctx->expr()),
											SymboleUnaire::decr
										);
    }

    //***

     antlrcpp::Any visitIntVal(ExprParser::IntValContext *ctx) override {
             ExpressionConstante a (TypeValeur ::type_int,stoi(ctx->IntVal()->getText()));
             return a;
    }

     antlrcpp::Any visitGetVarVal(ExprParser::GetVarValContext *ctx) override {
             String nom = (ctx->Nom()->getText());
             return nom;
    }

     antlrcpp::Any visitGetTabVal(ExprParser::GetTabValContext *ctx) override {
//*******
         	 return ;
    }

     antlrcpp::Any visitAffectation(ExprParser::AffectationContext *ctx) override {
        return (Expression*)(visit(ctx->aff()));
    }


     antlrcpp::Any visitPar(ExprParser::ParContext *ctx) override {
        return (Expression*)(visit(ctx->expr()));
    }


     antlrcpp::Any visitCharVal(ExprParser::CharValContext *ctx) override {
     	 ExpressionConstante a (TypeValeur :: type_char, ctx->CharVal()->getText());
         return a;
    }


     antlrcpp::Any visitAppelFonction(ExprParser::AppelFonctionContext *ctx) override {
        return visitChildren(ctx);
    }
     //appelFonct : Nom '(' (expr)? ')'  # appelFonctionExpression



     antlrcpp::Any visitChar(ExprParser::CharContext *ctx) override {
        return ctx;
    }

     antlrcpp::Any visitInt32_t(ExprParser::Int32_tContext *ctx) override {
        return ctx;
    }

     antlrcpp::Any visitInt64_t(ExprParser::Int64_tContext *ctx) override {
        return ctx;
    }

     antlrcpp::Any visitAffExpr(ExprParser::AffExprContext *ctx) override {
		 return (Expression*) new
									   ExpressionBinaire(
										   (Expression*) visit(ctx->expr(0)),
										   (Expression*) visit(ctx->expr(1)),
										   SymboleBinaire::egal
									   );
    }

     antlrcpp::Any visitAffExprTableau(ExprParser::AffExprTableauContext *ctx) override {
        return visitChildren(ctx);
        //**************
    }


     antlrcpp::Any visitOppose(ExprParser::OpposeContext *ctx) override {
		 return (Expression*) new
									   ExpressionUnaire(
										   (Expression*) visit(ctx->expr()),
										   SymboleUnaire::moins
									   );
    }


     antlrcpp::Any visitIf(ExprParser::IfContext *ctx) override {
    	 return ctx;
    }

     antlrcpp::Any visitWhile(ExprParser::WhileContext *ctx) override {
    	 return ctx;
    }

     antlrcpp::Any visitBloc(ExprParser::BlocContext *ctx) override {
        return visitChildren(ctx);
        /////////////////::
    }

     antlrcpp::Any visitInstruction(ExprParser::InstructionContext *ctx) override {
        return visitChildren(ctx);
    }

     antlrcpp::Any visitDecTableau(ExprParser::DecTableauContext *ctx) override {
        return visitChildren(ctx);
    }

     antlrcpp::Any visitDecVariable(ExprParser::DecVariableContext *ctx) override {
        return visitChildren(ctx);
    }

     antlrcpp::Any visitDecVariableMultiple(ExprParser::DecVariableMultipleContext *ctx) override {
        return visitChildren(ctx);
    }

     antlrcpp::Any visitInstrDecl(ExprParser::InstrDeclContext *ctx) override {
        return visitChildren(ctx);
    }

     antlrcpp::Any visitInstrPutchar(ExprParser::InstrPutcharContext *ctx) override {
        return visitChildren(ctx);
    }

     antlrcpp::Any visitInstrGetchar(ExprParser::InstrGetcharContext *ctx) override {
        return visitChildren(ctx);
    }

     antlrcpp::Any visitBreak(ExprParser::BreakContext *ctx) override {
        return visitChildren(ctx);
    }

     antlrcpp::Any visitReturn(ExprParser::ReturnContext *ctx) override {
        return visitChildren(ctx);
    }

     antlrcpp::Any visitInstrExpr(ExprParser::InstrExprContext *ctx) override {
        return visitChildren(ctx);
    }

     antlrcpp::Any visitControle(ExprParser::ControleContext *ctx) override {
        return visitChildren(ctx);
    }

     antlrcpp::Any visitDefFonctionType(ExprParser::DefFonctionTypeContext *ctx) override {
        return visitChildren(ctx);
    }

     antlrcpp::Any visitDefFonctionVoid(ExprParser::DefFonctionVoidContext *ctx) override {
        return visitChildren(ctx);
    }

     antlrcpp::Any visitAppelFonctionExpression(ExprParser::AppelFonctionExpressionContext *ctx) override {
        return visitChildren(ctx);
    }


};

