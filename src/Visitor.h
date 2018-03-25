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
#include "ExpressionBinaire.h"
#include "Fonction.h"
#include "Instruction.h"
#include "Declaration.h"
#include "Type.h"
#include "ExpressionAppelFonction.h"
#include "ExpressionVariable.h"
#include "Return.h"
#include "Controle.h"
#include "Break.h"
#include "If.h"
#include "IfElseifElse.h"
#include "While.h"
#include "ExpressionElementTableau.h"



using namespace std;
 
 
class  Visitor : public ExprVisitor {
public:
 
    antlrcpp::Any visitProg(ExprParser::ProgContext *ctx) override {

#ifdef DEBUG
        cout << "Passage dans visitprog" <<endl;
#endif
        Program* prog = new Program();

        for(auto i : ctx->declaration()){
            prog->ajouterDeclaration((Declaration*)visit(i));
        }

        for (auto i : ctx->definitionFonction()) {
            prog->ajouterFonction((Fonction*)visit(i));
        }

        return prog;
    }
 
 
    //Expressions Binaires
    antlrcpp::Any visitMod(ExprParser::ModContext *ctx) override {
#ifdef DEBUG
        cout <<"Passage dans visitMod" <<endl;
#endif
        return (Expression*) new
                                       ExpressionBinaire(
                                           (Expression*) visit(ctx->expr(0)),
                                           (Expression*) visit(ctx->expr(1)),
                                           SymboleBinaire::mod
                                       );
    }
 
     antlrcpp::Any visitMult(ExprParser::MultContext *ctx) override {
#ifdef DEBUG
        cout << "Passage dans visit Mult"<< endl;
#endif
        return (Expression*) new
                                       ExpressionBinaire(
                                           (Expression*) visit(ctx->expr(0)),
                                           (Expression*) visit(ctx->expr(1)),
                                           SymboleBinaire::mult
                                       );
    }
 
     antlrcpp::Any visitDiv(ExprParser::DivContext *ctx) override {
#ifdef DEBUG
        cout << "Passage dans visitDiv" << endl;
#endif
            return (Expression*) new
                                           ExpressionBinaire(
                                               (Expression*) visit(ctx->expr(0)),
                                               (Expression*) visit(ctx->expr(1)),
                                               SymboleBinaire::div
                                           );
    }
 
     antlrcpp::Any visitNot(ExprParser::NotContext *ctx) override {
#ifdef DEBUG
         cout << "Passage dans visitNot" <<endl;
#endif

        return (Expression*) new
                                       ExpressionBinaire(
                                           (Expression*) visit(ctx->expr(0)),
                                           (Expression*) visit(ctx->expr(1)),
                                           SymboleBinaire::non
                                       );
    }
 
     antlrcpp::Any visitAnd(ExprParser::AndContext *ctx) override {
#ifdef DEBUG
        cout << "Passage dans visitAnd" <<endl;
#endif
        return (Expression*) new
                                       ExpressionBinaire(
                                           (Expression*) visit(ctx->expr(0)),
                                           (Expression*) visit(ctx->expr(1)),
                                           SymboleBinaire::et
                                       );
    }
 
     antlrcpp::Any visitXor(ExprParser::XorContext *ctx) override {
#ifdef  DEBUG
        cout << "Passage dans visitXor" <<endl;
#endif
        return (Expression*) new
                                       ExpressionBinaire(
                                           (Expression*) visit(ctx->expr(0)),
                                           (Expression*) visit(ctx->expr(1)),
                                           SymboleBinaire::ouex
                                       );
    }
 
     antlrcpp::Any visitRightShift(ExprParser::RightShiftContext *ctx) override {
#ifdef DEBUG
        cout << "Passage dans visitRigthShift"<<endl;
#endif
        return (Expression*) new
                                       ExpressionBinaire(
                                           (Expression*) visit(ctx->expr(0)),
                                           (Expression*) visit(ctx->expr(1)),
                                           SymboleBinaire::rightshift
                                       );
    }
 
     antlrcpp::Any visitLeftShift(ExprParser::LeftShiftContext *ctx) override {
#ifdef  DEBUG
        cout << "Passage dans visitLeftShift" <<endl;
#endif
        return (Expression*) new
                                       ExpressionBinaire(
                                           (Expression*) visit(ctx->expr(0)),
                                           (Expression*) visit(ctx->expr(1)),
                                           SymboleBinaire::leftshift
                                       );
    }
 
     antlrcpp::Any visitAdd(ExprParser::AddContext *ctx) override {
#ifdef DEBUG
        cout << "Passage dans visitAdd" <<endl;
#endif
            return (Expression*)
                    new ExpressionBinaire(
                               (Expression*) visit(ctx->expr(0)),
                               (Expression*) visit(ctx->expr(1)),
                               SymboleBinaire::plus
                           );
    }
 
     antlrcpp::Any visitEgal(ExprParser::EgalContext *ctx) override {
#ifdef DEBUG
        cout << "Passage dans visitEgal" <<endl;
#endif
        return (Expression*) new
                               ExpressionBinaire(
                                   (Expression*) visit(ctx->expr(0)),
                                   (Expression*) visit(ctx->expr(1)),
                                   SymboleBinaire::egalegal
                               );
    }
 
     antlrcpp::Any visitOr(ExprParser::OrContext *ctx) override {
#ifdef DEBUG
        cout << "Passage dans visitOr" <<endl;
#endif
        return (Expression*) new
                               ExpressionBinaire(
                                   (Expression*) visit(ctx->expr(0)),
                                   (Expression*) visit(ctx->expr(1)),
                                   SymboleBinaire::ou
                               );
    }
 
     antlrcpp::Any visitSupEgal(ExprParser::SupEgalContext *ctx) override {
#ifdef DEBUG
        cout << "Passage dans visitSupEgal" <<endl;
#endif
        return (Expression*) new
                               ExpressionBinaire(
                                   (Expression*) visit(ctx->expr(0)),
                                   (Expression*) visit(ctx->expr(1)),
                                   SymboleBinaire::supegal
                               );
    }
 
     antlrcpp::Any visitOu(ExprParser::OuContext *ctx) override {
#ifdef DEBUG
        cout << "Passage dans visitOu" <<endl;
#endif
        return (Expression*) new
                                       ExpressionBinaire(
                                           (Expression*) visit(ctx->expr(0)),
                                           (Expression*) visit(ctx->expr(1)),
                                           SymboleBinaire::bor
                                       );
    }
 
     antlrcpp::Any visitStrictSup(ExprParser::StrictSupContext *ctx) override {
#ifdef DEBUG
        cout << "Passage dans visitStrictSup" <<endl;
#endif
            return (Expression*) new
                                           ExpressionBinaire(
                                               (Expression*) visit(ctx->expr(0)),
                                               (Expression*) visit(ctx->expr(1)),
                                               SymboleBinaire::strictsup
                                           );
        }
 
 antlrcpp::Any visitDiff(ExprParser::DiffContext *ctx) override {
#ifdef DEBUG
        cout << "Passage dans visitDiff" <<endl;
#endif
    return (Expression*) new
                                   ExpressionBinaire(
                                       (Expression*) visit(ctx->expr(0)),
                                       (Expression*) visit(ctx->expr(1)),
                                       SymboleBinaire::diff
                                   );
}
 
 antlrcpp::Any visitEt(ExprParser::EtContext *ctx) override { //&&
#ifdef DEBUG
        cout << "Passage dans visitEt" <<endl;
#endif
    return (Expression*) new
                                   ExpressionBinaire(
                                       (Expression*) visit(ctx->expr(0)),
                                       (Expression*) visit(ctx->expr(1)),
                                       SymboleBinaire::et
                                   );
}
 
 antlrcpp::Any visitInfEgal(ExprParser::InfEgalContext *ctx) override {
#ifdef DEBUG
        cout << "Passage dans visitInfEgal" <<endl;
#endif
    return (Expression*) new
                                   ExpressionBinaire(
                                       (Expression*) visit(ctx->expr(0)),
                                       (Expression*) visit(ctx->expr(1)),
                                       SymboleBinaire::infegal
                                   );
}
 
 antlrcpp::Any visitMoins(ExprParser::MoinsContext *ctx) override {
#ifdef DEBUG
        cout << "Passage dans visitMoins" <<endl;
#endif
        return (Expression*) new
                                       ExpressionBinaire(
                                           (Expression*) visit(ctx->expr(0)),
                                           (Expression*) visit(ctx->expr(1)),
                                           SymboleBinaire::moins
                                       );
    }
 
     antlrcpp::Any visitStrictInf(ExprParser::StrictInfContext *ctx) override {
#ifdef DEBUG
        cout << "Passage dans visit StrictInf" <<endl;
#endif
        return (Expression*) new
                                       ExpressionBinaire(
                                           (Expression*) visit(ctx->expr(0)),
                                           (Expression*) visit(ctx->expr(1)),
                                           SymboleBinaire::strictinf
                                       );
    }
 
     antlrcpp::Any visitComma(ExprParser::CommaContext *ctx) override {
#ifdef DEBUG
        cout <<"Passage dans visitComma"<<endl;
#endif
        return (Expression*) new
                                       ExpressionBinaire(
                                           (Expression*) visit(ctx->expr(0)),
                                           (Expression*) visit(ctx->expr(1)),
                                           SymboleBinaire::virgule
                                       );
    }
 
     antlrcpp::Any visitPlusEgal(ExprParser::PlusEgalContext *ctx) override {
#ifdef DEBUG
        cout << "Passage dans visitPlusEgal" <<endl;
#endif
         return (Expression*) new
                                       ExpressionBinaire(
                                           (Expression*) new ExpressionVariable(ctx->Nom()->getText()),
                                           (Expression*) visit(ctx->expr()),
                                           SymboleBinaire::pluseq
                                       );
     }
 
     antlrcpp::Any visitMoinsEgal(ExprParser::MoinsEgalContext *ctx) override {
#ifdef DEBUG
        cout << "Passage dans visitMoinsEgal" <<endl;
#endif
         return (Expression*) new
                                       ExpressionBinaire(
                                           (Expression*) new ExpressionVariable(ctx->Nom()->getText()),
                                           (Expression*) visit(ctx->expr()),
                                           SymboleBinaire::moinseq
                                       );
     }
 
     antlrcpp::Any visitMultEgal(ExprParser::MultEgalContext *ctx) override {
#ifdef DEBUG
        cout <<"Passage dans visit MultEgal" <<endl;
#endif
         return (Expression*) new
                                       ExpressionBinaire(
                                           (Expression*) new ExpressionVariable(ctx->Nom()->getText()),
                                           (Expression*) visit(ctx->expr()),
                                           SymboleBinaire::multeq
                                       );
     }
 
     antlrcpp::Any visitDivEgal(ExprParser::DivEgalContext *ctx) override {
#ifdef DEBUG
        cout << "Passage dans visitDivEgal"<<endl;
#endif
         return (Expression*) new
                                       ExpressionBinaire(
                                           (Expression*) new ExpressionVariable(ctx->Nom()->getText()),
                                           (Expression*) visit(ctx->expr()),
                                           SymboleBinaire::diveq
                                       );
    }
 
     antlrcpp::Any visitModEgal(ExprParser::ModEgalContext *ctx) override {
#ifdef DEBUG
        cout << "Passage dans visitModEgal" <<endl;
#endif
         return (Expression*) new
                                       ExpressionBinaire(
                                           (Expression*) new ExpressionVariable(ctx->Nom()->getText()),
                                           (Expression*) visit(ctx->expr()),
                                           SymboleBinaire::modeq
                                       );
    }
 
     antlrcpp::Any visitAndEgal(ExprParser::AndEgalContext *ctx) override {
#ifdef DEBUG
        cout << "Passage dans visitAndEgal" <<endl;
#endif
         return (Expression*) new
                                       ExpressionBinaire(
                                           (Expression*) new ExpressionVariable(ctx->Nom()->getText()),
                                           (Expression*) visit(ctx->expr()),
                                           SymboleBinaire::ampeq
                                       );
         }
 
      antlrcpp::Any visitOrEgal(ExprParser::OrEgalContext *ctx) override {
#ifdef DEBUG
        cout <<"Passage dans visitOrEgal" <<endl;
#endif
          return (Expression*) new
                                       ExpressionBinaire(
                                           (Expression*) new ExpressionVariable(ctx->Nom()->getText()),
                                           (Expression*) visit(ctx->expr()),
                                           SymboleBinaire::boreq
                                       );
     }
 
      antlrcpp::Any visitXorEgal(ExprParser::XorEgalContext *ctx) override {
#ifdef DEBUG
        cout << "Passage dans visitXorEgal" <<endl;
#endif
          return (Expression*) new
                                       ExpressionBinaire(
                                           (Expression*) new ExpressionVariable(ctx->Nom()->getText()),
                                           (Expression*) visit(ctx->expr()),
                                           SymboleBinaire::bxoreq
                                       );
     }
 
    //Expressions unaires
     antlrcpp::Any visitNon(ExprParser::NonContext *ctx) override {
#ifdef  DEBUG
        cout <<"Passage dans visitNon" <<endl;
#endif
        return (Expression*) new
                                   ExpressionUnaire(
                                       (Expression*) visit(ctx->expr()),
                                       SymboleUnaire::non
                                   );
    }
 
     antlrcpp::Any visitNotExpr(ExprParser::NotExprContext *ctx) override {
#ifdef DEBUG
        cout << "Passage dans visitNotExpr" <<endl;
#endif
        return (Expression*) new
                                   ExpressionUnaire(
                                       (Expression*) visit(ctx->expr()),
                                       SymboleUnaire::bnot
                                   );
    }
 
     antlrcpp::Any visitPostIncrement(ExprParser::PostIncrementContext *ctx) override {
#ifdef DEBUG
        cout << "Passage dans visitPostIncrement" <<endl;
#endif
        return (Expression*) new
                                ExpressionUnaire(
                                        (Expression*) new ExpressionVariable(ctx->Nom()->getText()),
                                        SymboleUnaire::postincr
                                    );
    }
 
     antlrcpp::Any visitPreIncrement(ExprParser::PreIncrementContext *ctx) override {
#ifdef DEBUG
        cout << "Passage dans visitPreIncrement" <<endl;
#endif
         return (Expression*) new
                                ExpressionUnaire(
                                        (Expression*) new ExpressionVariable(ctx->Nom()->getText()),
                                        SymboleUnaire::preincr
                                    );
    }
 
     antlrcpp::Any visitPostDecrement(ExprParser::PostDecrementContext *ctx) override {
#ifdef DEBUG
        cout << "Passage dans visitPostDecrement" <<endl;
#endif
         return (Expression*) new
                                ExpressionUnaire(
                                        (Expression*) new ExpressionVariable(ctx->Nom()->getText()),
                                        SymboleUnaire::postdecr
                                    );
    }
 
     antlrcpp::Any visitPreDecrement(ExprParser::PreDecrementContext *ctx) override {
#ifdef DEBUG
        cout << "Passage dans visitPreDecrecment" <<endl;
#endif
         return (Expression*) new
                                    ExpressionUnaire(
                                            (Expression*) new ExpressionVariable(ctx->Nom()->getText()),
                                            SymboleUnaire::predecr
                                        );
    }
     
     antlrcpp::Any visitOppose(ExprParser::OpposeContext *ctx) override {
#ifdef DEBUG
        cout << "Passage dans visitOppose" <<endl;
#endif
             return (Expression*) new
                                           ExpressionUnaire(
                                               (Expression*) new ExpressionVariable(ctx->Nom()->getText()),
                                               SymboleUnaire::moins
                                           );
     }
 
     antlrcpp::Any visitIntVal(ExprParser::IntValContext *ctx) override {
#ifdef DEBUG
        cout << "Passage dans visitIntVal" << endl;
#endif
        return (Expression*) new ExpressionConstante("int64_t",stoi(ctx->IntVal()->getText()));
    }
 
     antlrcpp::Any visitGetVarVal(ExprParser::GetVarValContext *ctx) override {
#ifdef DEBUG
        cout <<"Passage GetVarVal" <<endl;
#endif
        return (Expression*) new ExpressionVariable(ctx->Nom()->getText());
    }

     antlrcpp::Any visitAffectation(ExprParser::AffectationContext *ctx) override {
#ifdef DEBUG
        cout << "Passage dans visitAffectation" <<endl;
#endif
        return (Expression*)visit(ctx->aff());
    }
 
 
     antlrcpp::Any visitPar(ExprParser::ParContext *ctx) override {
#ifdef DEBUG
        cout<<"Passage dans visitPar" <<endl;
#endif
        return (Expression*)(visit(ctx->expr()));
    }
 
 
     antlrcpp::Any visitCharVal(ExprParser::CharValContext *ctx) override {
#ifdef DEBUG
        cout<< "Passage dans visitCharVal" <<endl;
#endif
        if((int)ctx->CharVal()->getText()[1] == 92){ // 92 ascii de \ alors on créé un caractère spécial
            return (Expression *) new ExpressionConstante("char", (int) ctx->CharVal()->getText()[2],true);
        } else {
            return (Expression *) new ExpressionConstante("char", (int) ctx->CharVal()->getText()[1]);
        }
    }

     antlrcpp::Any visitGetTabVal(ExprParser::GetTabValContext *ctx) override {
#ifdef DEBUG
        cout << "Passage dans GetTabVal" << endl;
#endif
        return (Expression*) new ExpressionElementTableau(stoi(ctx->IntVal()->getText()),ctx->Nom()->getText());
     }

     antlrcpp::Any visitAffExpr(ExprParser::AffExprContext *ctx) override {
#ifdef DEBUG
        cout << "Passage dans AffExpr" <<endl;
#endif
         return dynamic_cast<Expression*>(new ExpressionBinaire(
                 (Expression*)new ExpressionVariable(ctx->Nom()->getText()),
                 (Expression*) visit(ctx->expr()),
                 SymboleBinaire::egal
         ));
      }

     antlrcpp::Any visitAppelFonction(ExprParser::AppelFonctionContext *ctx) override {
#ifdef DEBUG
    	cout<<"Passage dans visitAppelFonction" <<endl;
#endif
    	vector<Expression*> arguments;
    	for(size_t i=0; i<ctx->expr().size(); i++){
    	    arguments.push_back((Expression*)visit(ctx->expr(i)));
    	}

    	Expression* res;
    	return (Expression*) new ExpressionAppelFonction(ctx->Nom()->getText(), arguments);
    }
 
 
     antlrcpp::Any visitChar(ExprParser::CharContext *ctx) override {
#ifdef DEBUG
        cout <<"visitChar" << endl;
#endif
        return (string) ctx->Char()->getText();
    }
 
     antlrcpp::Any visitInt32_t(ExprParser::Int32_tContext *ctx) override {
#ifdef DEBUG
        cout<< "visitInt32" <<endl;
#endif
        return (string) ctx->Int32_t()->getText();
    }
 
     antlrcpp::Any visitInt64_t(ExprParser::Int64_tContext *ctx) override {
#ifdef DEBUG
        cout << "visitInt64" <<endl;
#endif
        return (string) ctx->Int64_t()->getText();
    }

     antlrcpp::Any visitAffExprTableau(ExprParser::AffExprTableauContext *ctx) override {
#ifdef DEBUG
        cout << "Passage dans visitAffExprTableau" <<endl;
#endif
        Expression* e =
                new ExpressionBinaire(
                        (Expression*) new ExpressionElementTableau(stoi(ctx->IntVal()->getText()),ctx->Nom()->getText()),
                        (Expression*)visit(ctx->expr()),
                        SymboleBinaire::egal
                );
        return e;
    }

     antlrcpp::Any visitIf(ExprParser::IfContext *ctx) override {
#ifdef DEBUG
        cout << "Passage dans visitIf" <<endl;
#endif
        IfElseifElse* structureIf = new IfElseifElse();
        vector<If*> successionIf;

        Expression* elseExpression;

        for(size_t i=0; i<ctx->expr().size();i++){
            Expression* expr = (Expression*)visit(ctx->expr(i));

            // partie 2 de la condition permet de savoir si on a un else
            // si le nombre de bloc est plus grand que le nombre de condition c'est qu'on a un else
            if(i ==0 && (ctx->blocControl().size() > ctx->expr().size())){
                elseExpression = new ExpressionUnaire(expr,SymboleUnaire::non);
            }
            //Cette partie sert possiblement à le if (elseif)* else mais n'est pas fonctionnelle en l'état
            /*else if (i!=0 && (ctx->blocControl().size() > ctx->expr().size())){
                Expression* tmp = elseExpression;
                ExpressionUnaire* nonexprcourante = new ExpressionUnaire(expr,SymboleUnaire::non);
                elseExpression = new ExpressionBinaire(tmp, nonexprcourante, SymboleBinaire::et);
            }*/


            vector<Instruction*> bloc = visit(ctx->blocControl(i));
            successionIf.push_back((If*)new If(
                    expr,
                    new BlocControle(bloc)
            ));
        }

        //création du dernier bloc else
        if(ctx->blocControl().size() > ctx->expr().size()){
            vector<Instruction*> elseBloc = visit(ctx->blocControl(ctx->blocControl().size()-1));
            If* elseStatement = new If(elseExpression, new BlocControle(elseBloc));
            successionIf.push_back(elseStatement);
        }

        structureIf->setSuccession(successionIf);

        return (Controle*)structureIf;
     }
 
     antlrcpp::Any visitWhile(ExprParser::WhileContext *ctx) override {
#ifdef DEBUG
        cout << "Passage dans visitWhile" << endl;
#endif
         vector<Instruction*> bloc = visit(ctx->blocControl());
         While* resVisitWhile = new While(
                 (Expression*)visit(ctx->expr()),
                 new BlocControle(bloc)
         );
         return (Controle*)resVisitWhile;
    }
 
     antlrcpp::Any visitBloc(ExprParser::BlocContext *ctx) override {
#ifdef DEBUG
        cout <<"Passage dans visitBloc" <<endl;
#endif
        //return (vector<Instruction*>)visitChildren(ctx);
         vector<Instruction*> instructions;
         for (size_t i = 0; i < ctx->instr().size(); ++i) {
             instructions.push_back((Instruction*)visit(ctx->instr(i)));
         }
         return instructions;
    }
 
     antlrcpp::Any visitInstruction(ExprParser::InstructionContext *ctx) override {
#ifdef DEBUG
        cout<< "Passage dans visitInstruction" << endl;
#endif
         vector<Instruction*> instructions;
         instructions.push_back((Instruction*)visit(ctx->instr()));
         return instructions;
    }
 
     antlrcpp::Any visitDecTableau(ExprParser::DecTableauContext *ctx) override {
#ifdef DEBUG
        cout << "Passage dans visitDecTableau" << endl;
#endif
        Declaration* d =
            new Declaration(
                 visit(ctx->type()),
                 ctx->Nom()->getText(),
                 stoi(ctx->IntVal()->getText())
            );
        return d;
    }

    antlrcpp::Any visitDecTableauParametre(ExprParser::DecTableauParametreContext *ctx) override {
#ifdef DEBUG
        cout << "Passage dans visitDecTableauParametre" << endl;
#endif
        Declaration* d =
                new Declaration(
                        visit(ctx->type()),
                        ctx->Nom()->getText(),
                        true
                );
        return d;
    }
 
     antlrcpp::Any visitDecVariable(ExprParser::DecVariableContext *ctx) override {
#ifdef DEBUG
        cout << "Passage dans visitDecVariable" <<endl;
#endif
        Declaration* d;
        if(ctx->expr() == nullptr){
            d= new Declaration(
                    visit(ctx->type()),
                    ctx->Nom()->getText(),
                    -1
            );
        } else {
            Expression* expr = (Expression*) visit(ctx->expr());
            d= new Declaration(
                    visit(ctx->type()),
                    ctx->Nom()->getText(),
                    -1,
                    expr
            );
        }
        return d;
    }
 
     /*antlrcpp::Any visitDecVariableMultiple(ExprParser::DecVariableMultipleContext *ctx) override {
        cout << "Passage dans visitDecVariableMultiple" << endl;
        string type = visit(ctx->type());
        cout << "Type Variable : " << type << endl;
        vector<Declaration*> declarations;
        for(int i=0; i<ctx->Nom().size(); i++){
            declarations.push_back(new Declaration(type, ctx->Nom(i)->getText(),-1));
            cout << declarations.at(i)->toString() << endl;
        }
        return visitChildren(ctx);
    }*/
 
     antlrcpp::Any visitInstrDecl(ExprParser::InstrDeclContext *ctx) override {
#ifdef DEBUG
        cout << "Passage dans visitInstrDecl"<<endl;
#endif
        return dynamic_cast<Instruction*>((Declaration*)visit(ctx->declaration()));
    }
 
     antlrcpp::Any visitInstrPutchar(ExprParser::InstrPutcharContext *ctx) override {
#ifdef DEBUG
        cout << "Passage dans visitInstrPutchar" << endl;
#endif
        Instruction* putchar;
        vector<Expression*> arguments;

        if(ctx->CharVal() != nullptr){
            if((int)ctx->CharVal()->getText()[1] == 92){ // caractère spécial
                arguments.push_back(new ExpressionConstante("char",(int)ctx->CharVal()->getText()[2],true));
            }else {
                arguments.push_back(new ExpressionConstante("char",(int)ctx->CharVal()->getText()[1]));
            }

            putchar = (Expression*) new ExpressionAppelFonction(ctx->Putchar()->getText(),arguments);

        }else if(ctx->Nom() != nullptr){ //Si l'argument est une variable
            arguments.push_back(new ExpressionVariable(ctx->Nom()->getText()));
            putchar = (Expression*) new ExpressionAppelFonction(ctx->Putchar()->getText(),arguments);
        }
        return (Instruction*)putchar;

    }
 
     antlrcpp::Any visitInstrGetchar(ExprParser::InstrGetcharContext *ctx) override {
#ifdef DEBUG
        cout << "visitInstrGetChar" <<endl;
#endif
         vector<Expression*> a;
        return (Instruction*) new ExpressionAppelFonction(ctx->Getchar()->getText(), a);
     }
 
     antlrcpp::Any visitBreak(ExprParser::BreakContext *ctx) override {
        return ctx->Break()->getText();
     }
 
     antlrcpp::Any visitReturn(ExprParser::ReturnContext *ctx) override {
#ifdef DEBUG
        cout << "Passage dans visitReturn" <<endl;
#endif
        return (Instruction*) new Return((Expression*)visit(ctx->expr()));
    }
 
     antlrcpp::Any visitInstrExpr(ExprParser::InstrExprContext *ctx) override {
#ifdef DEBUG
        cout << endl <<"Passage dans visitInstrExpr" <<endl;
#endif
        return dynamic_cast<Instruction*>((Expression*)visit(ctx->expr()));
    }
 
     antlrcpp::Any visitControle(ExprParser::ControleContext *ctx) override {
#ifdef DEBUG
        cout << "Passage dans visitControle" <<endl;
#endif
        return dynamic_cast<Instruction*>((Controle*)visit(ctx->control()));
     }
 
     antlrcpp::Any visitDefFonctionType(ExprParser::DefFonctionTypeContext *ctx) override {
#ifdef DEBUG
        cout << "Passage dans visitDefFonctionType" <<endl;
#endif
        Fonction* fonction = new Fonction();

        string typeRetour ;
        fonction->setTypeRetour(visit(ctx->type()));

        fonction->setNom(ctx->Nom()->getText());

        // gestion des argments
        vector<Declaration*> arguments;
        if(ctx->declaration().size() != 0){
            for(size_t i=0; i<ctx->declaration().size();i++){
                arguments.push_back((Declaration*)visit(ctx->declaration(i)));
            }
            fonction->setArguments(arguments);
        }

         // on créé les instructions de notre fonction
         vector<Instruction*> instructions;
         if(ctx->instr().size() != 0){
             for (size_t i = 0; i < ctx->instr().size(); i++) {
                instructions.push_back((Instruction*)visit(ctx->instr(i)));
             }
             fonction->setInstructions(instructions);
         }

        return fonction;
     }
 
     antlrcpp::Any visitDefFonctionVoid(ExprParser::DefFonctionVoidContext *ctx) override {
#ifdef DEBUG
         cout << "Passage dans visitDefFonctionVoid" <<endl;
#endif
         Fonction* fonction = new Fonction();

         string typeRetour ;
         fonction->setTypeRetour("void");

         fonction->setNom(ctx->Nom()->getText());

         // gestion des argments
         vector<Declaration*> arguments;
         if(ctx->declaration().size() != 0){
             for(size_t i=0; i<ctx->declaration().size();i++){
                 arguments.push_back((Declaration*)visit(ctx->declaration(i)));
             }
             fonction->setArguments(arguments);
         }

         // on créé les instructions de notre fonction
         vector<Instruction*> instructions;
         if(ctx->instr().size() != 0){
             for (size_t i = 0; i < ctx->instr().size(); i++) {
                 instructions.push_back((Instruction*)visit(ctx->instr(i)));
             }
             fonction->setInstructions(instructions);
         }


         return fonction;
     }
 
};
