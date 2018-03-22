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

using namespace std;
 
 
class  Visitor : public ExprVisitor {
public:
 
    antlrcpp::Any visitProg(ExprParser::ProgContext *ctx) override {
        cout << "Passage dans visitprog" <<endl;
        Program* prog = new Program();
        // construire le programme ici

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
        cout <<"Passage dans visitMod" <<endl;
        return (Expression*) new
                                       ExpressionBinaire(
                                           (Expression*) visit(ctx->expr(0)),
                                           (Expression*) visit(ctx->expr(1)),
                                           SymboleBinaire::mod
                                       );
    }
 
     antlrcpp::Any visitMult(ExprParser::MultContext *ctx) override {
        cout << "Passage dans visit Mult"<< endl;
        return (Expression*) new
                                       ExpressionBinaire(
                                           (Expression*) visit(ctx->expr(0)),
                                           (Expression*) visit(ctx->expr(1)),
                                           SymboleBinaire::mult
                                       );
    }
 
     antlrcpp::Any visitDiv(ExprParser::DivContext *ctx) override {
        cout << "Passage dans visitDiv" << endl;
            return (Expression*) new
                                           ExpressionBinaire(
                                               (Expression*) visit(ctx->expr(0)),
                                               (Expression*) visit(ctx->expr(1)),
                                               SymboleBinaire::div
                                           );
    }
 
     antlrcpp::Any visitNot(ExprParser::NotContext *ctx) override {
        cout << "Passage dans visitNot" <<endl;
        return (Expression*) new
                                       ExpressionBinaire(
                                           (Expression*) visit(ctx->expr(0)),
                                           (Expression*) visit(ctx->expr(1)),
                                           SymboleBinaire::non
                                       );
    }
 
     antlrcpp::Any visitAnd(ExprParser::AndContext *ctx) override {
        cout << "Passage dans visitAnd" <<endl;
        return (Expression*) new
                                       ExpressionBinaire(
                                           (Expression*) visit(ctx->expr(0)),
                                           (Expression*) visit(ctx->expr(1)),
                                           SymboleBinaire::et
                                       );
    }
 
     antlrcpp::Any visitXor(ExprParser::XorContext *ctx) override {
        cout << "Passage dans visitXor" <<endl;
        return (Expression*) new
                                       ExpressionBinaire(
                                           (Expression*) visit(ctx->expr(0)),
                                           (Expression*) visit(ctx->expr(1)),
                                           SymboleBinaire::ouex
                                       );
    }
 
     antlrcpp::Any visitRightShift(ExprParser::RightShiftContext *ctx) override {
        cout << "Passage dans visitRigthShift"<<endl;
        return (Expression*) new
                                       ExpressionBinaire(
                                           (Expression*) visit(ctx->expr(0)),
                                           (Expression*) visit(ctx->expr(1)),
                                           SymboleBinaire::rightshift
                                       );
    }
 
     antlrcpp::Any visitLeftShift(ExprParser::LeftShiftContext *ctx) override {
        cout << "Passage dans visitLeftShift" <<endl;
        return (Expression*) new
                                       ExpressionBinaire(
                                           (Expression*) visit(ctx->expr(0)),
                                           (Expression*) visit(ctx->expr(1)),
                                           SymboleBinaire::leftshift
                                       );
    }
 
     antlrcpp::Any visitAdd(ExprParser::AddContext *ctx) override {
        cout << "Passage dans visitAdd" <<endl;
            return (Expression*)
                    new ExpressionBinaire(
                               (Expression*) visit(ctx->expr(0)),
                               (Expression*) visit(ctx->expr(1)),
                               SymboleBinaire::plus
                           );
    }
 
     antlrcpp::Any visitEgal(ExprParser::EgalContext *ctx) override {
        cout << "Passage dans visitEgal" <<endl;
        return (Expression*) new
                               ExpressionBinaire(
                                   (Expression*) visit(ctx->expr(0)),
                                   (Expression*) visit(ctx->expr(1)),
                                   SymboleBinaire::egalegal
                               );
    }
 
     antlrcpp::Any visitOr(ExprParser::OrContext *ctx) override {
        cout << "Passage dans visitOr" <<endl;
        return (Expression*) new
                               ExpressionBinaire(
                                   (Expression*) visit(ctx->expr(0)),
                                   (Expression*) visit(ctx->expr(1)),
                                   SymboleBinaire::ou
                               );
    }
 
     antlrcpp::Any visitSupEgal(ExprParser::SupEgalContext *ctx) override {
        cout << "Passage dans visitSupEgal" <<endl;
        return (Expression*) new
                               ExpressionBinaire(
                                   (Expression*) visit(ctx->expr(0)),
                                   (Expression*) visit(ctx->expr(1)),
                                   SymboleBinaire::supegal
                               );
    }
 
     antlrcpp::Any visitOu(ExprParser::OuContext *ctx) override {
        cout << "Passage dans visitOu" <<endl;
        return (Expression*) new
                                       ExpressionBinaire(
                                           (Expression*) visit(ctx->expr(0)),
                                           (Expression*) visit(ctx->expr(1)),
                                           SymboleBinaire::bor
                                       );
    }
 
     antlrcpp::Any visitStrictSup(ExprParser::StrictSupContext *ctx) override {
        cout << "Passage dans visitStrictSup" <<endl;
            return (Expression*) new
                                           ExpressionBinaire(
                                               (Expression*) visit(ctx->expr(0)),
                                               (Expression*) visit(ctx->expr(1)),
                                               SymboleBinaire::strictsup
                                           );
        }
 
 antlrcpp::Any visitDiff(ExprParser::DiffContext *ctx) override {
        cout << "Passage dans visitDiff" <<endl;
    return (Expression*) new
                                   ExpressionBinaire(
                                       (Expression*) visit(ctx->expr(0)),
                                       (Expression*) visit(ctx->expr(1)),
                                       SymboleBinaire::diff
                                   );
}
 
 antlrcpp::Any visitEt(ExprParser::EtContext *ctx) override { //&&
        cout << "Passage dans visitEt" <<endl;
    return (Expression*) new
                                   ExpressionBinaire(
                                       (Expression*) visit(ctx->expr(0)),
                                       (Expression*) visit(ctx->expr(1)),
                                       SymboleBinaire::et
                                   );
}
 
 antlrcpp::Any visitInfEgal(ExprParser::InfEgalContext *ctx) override {
        cout << "Passage dans visitInfEgal" <<endl;
    return (Expression*) new
                                   ExpressionBinaire(
                                       (Expression*) visit(ctx->expr(0)),
                                       (Expression*) visit(ctx->expr(1)),
                                       SymboleBinaire::infegal
                                   );
}
 
 antlrcpp::Any visitMoins(ExprParser::MoinsContext *ctx) override {
        cout << "Passage dans visitMoins" <<endl;
        return (Expression*) new
                                       ExpressionBinaire(
                                           (Expression*) visit(ctx->expr(0)),
                                           (Expression*) visit(ctx->expr(1)),
                                           SymboleBinaire::moins
                                       );
    }
 
     antlrcpp::Any visitStrictInf(ExprParser::StrictInfContext *ctx) override {
        cout << "Passage dans visit StrictInf" <<endl;
        return (Expression*) new
                                       ExpressionBinaire(
                                           (Expression*) visit(ctx->expr(0)),
                                           (Expression*) visit(ctx->expr(1)),
                                           SymboleBinaire::strictinf
                                       );
    }
 
     antlrcpp::Any visitComma(ExprParser::CommaContext *ctx) override {
        cout <<"Passage dans visitComma"<<endl;
        return (Expression*) new
                                       ExpressionBinaire(
                                           (Expression*) visit(ctx->expr(0)),
                                           (Expression*) visit(ctx->expr(1)),
                                           SymboleBinaire::virgule
                                       );
    }
 
     antlrcpp::Any visitPlusEgal(ExprParser::PlusEgalContext *ctx) override {
        cout << "Passage dans visitPlusEgal" <<endl;
         return (Expression*) new
                                       ExpressionBinaire(
                                           (Expression*) new ExpressionVariable(ctx->Nom()->getText()),
                                           (Expression*) visit(ctx->expr()),
                                           SymboleBinaire::pluseq
                                       );
     }
 
     antlrcpp::Any visitMoinsEgal(ExprParser::MoinsEgalContext *ctx) override {
        cout << "Passage dans visitMoinsEgal" <<endl;
         return (Expression*) new
                                       ExpressionBinaire(
                                           (Expression*) new ExpressionVariable(ctx->Nom()->getText()),
                                           (Expression*) visit(ctx->expr()),
                                           SymboleBinaire::moinseq
                                       );
     }
 
     antlrcpp::Any visitMultEgal(ExprParser::MultEgalContext *ctx) override {
        cout <<"Passage dans visit MultEgal" <<endl;
         return (Expression*) new
                                       ExpressionBinaire(
                                           (Expression*) new ExpressionVariable(ctx->Nom()->getText()),
                                           (Expression*) visit(ctx->expr()),
                                           SymboleBinaire::multeq
                                       );
     }
 
     antlrcpp::Any visitDivEgal(ExprParser::DivEgalContext *ctx) override {
        cout << "Passage dans visitDivEgal"<<endl;
         return (Expression*) new
                                       ExpressionBinaire(
                                           (Expression*) new ExpressionVariable(ctx->Nom()->getText()),
                                           (Expression*) visit(ctx->expr()),
                                           SymboleBinaire::diveq
                                       );
    }
 
     antlrcpp::Any visitModEgal(ExprParser::ModEgalContext *ctx) override {
        cout << "Passage dans visitModEgal" <<endl;
         return (Expression*) new
                                       ExpressionBinaire(
                                           (Expression*) new ExpressionVariable(ctx->Nom()->getText()),
                                           (Expression*) visit(ctx->expr()),
                                           SymboleBinaire::modeq
                                       );
    }
 
     antlrcpp::Any visitAndEgal(ExprParser::AndEgalContext *ctx) override {
        cout << "Passage dans visitAndEgal" <<endl;
         return (Expression*) new
                                       ExpressionBinaire(
                                           (Expression*) new ExpressionVariable(ctx->Nom()->getText()),
                                           (Expression*) visit(ctx->expr()),
                                           SymboleBinaire::ampeq
                                       );
         }
 
      antlrcpp::Any visitOrEgal(ExprParser::OrEgalContext *ctx) override {
        cout <<"Passage dans visitOrEgal" <<endl;
          return (Expression*) new
                                       ExpressionBinaire(
                                           (Expression*) new ExpressionVariable(ctx->Nom()->getText()),
                                           (Expression*) visit(ctx->expr()),
                                           SymboleBinaire::boreq
                                       );
     }
 
      antlrcpp::Any visitXorEgal(ExprParser::XorEgalContext *ctx) override {
        cout << "Passage dans visitXorEgal" <<endl;
          return (Expression*) new
                                       ExpressionBinaire(
                                           (Expression*) new ExpressionVariable(ctx->Nom()->getText()),
                                           (Expression*) visit(ctx->expr()),
                                           SymboleBinaire::bxoreq
                                       );
     }
 
    //Expressions unaires
     antlrcpp::Any visitNon(ExprParser::NonContext *ctx) override {
        cout <<"Passage dans visitNon" <<endl;
        return (Expression*) new
                                   ExpressionUnaire(
                                       (Expression*) visit(ctx->expr()),
                                       SymboleUnaire::non
                                   );
    }
 
     antlrcpp::Any visitNotExpr(ExprParser::NotExprContext *ctx) override {
        cout << "Passage dans visitNotExpr" <<endl;
        return (Expression*) new
                                   ExpressionUnaire(
                                       (Expression*) visit(ctx->expr()),
                                       SymboleUnaire::bnot
                                   );
    }
 
     antlrcpp::Any visitPostIncrement(ExprParser::PostIncrementContext *ctx) override {
        cout << "Passage dans visitPostIncrement" <<endl;
        return (Expression*) new
                                ExpressionUnaire(
                                        (Expression*) new ExpressionVariable(ctx->Nom()->getText()),
                                        SymboleUnaire::postincr
                                    );
    }
 
     antlrcpp::Any visitPreIncrement(ExprParser::PreIncrementContext *ctx) override {
        cout << "Passage dans visitPreIncrement" <<endl;
         return (Expression*) new
                                ExpressionUnaire(
                                        (Expression*) new ExpressionVariable(ctx->Nom()->getText()),
                                        SymboleUnaire::preincr
                                    );
    }
 
     antlrcpp::Any visitPostDecrement(ExprParser::PostDecrementContext *ctx) override {
        cout << "Passage dans visitPostDecrement" <<endl;
         return (Expression*) new
                                ExpressionUnaire(
                                        (Expression*) new ExpressionVariable(ctx->Nom()->getText()),
                                        SymboleUnaire::postdecr
                                    );
    }
 
     antlrcpp::Any visitPreDecrement(ExprParser::PreDecrementContext *ctx) override {
        cout << "Passage dans visitPreDecrecment" <<endl;
         return (Expression*) new
                                    ExpressionUnaire(
                                            (Expression*) new ExpressionVariable(ctx->Nom()->getText()),
                                            SymboleUnaire::predecr
                                        );
    }
     
     antlrcpp::Any visitOppose(ExprParser::OpposeContext *ctx) override {
        cout << "Passage dans visitOppose" <<endl;
             return (Expression*) new
                                           ExpressionUnaire(
                                               (Expression*) new ExpressionVariable(ctx->Nom()->getText()),
                                               SymboleUnaire::moins
                                           );
     }
 
     antlrcpp::Any visitIntVal(ExprParser::IntValContext *ctx) override {
        cout << "Passage dans visitIntVal" << endl;
         cout << "valeur intval"<< ctx->IntVal()->getText() <<endl;
        return (Expression*) new ExpressionConstante("int32_t",stoi(ctx->IntVal()->getText()));
    }
 
     antlrcpp::Any visitGetVarVal(ExprParser::GetVarValContext *ctx) override {
        cout <<"Passage GetVarVal" <<endl;
        string nom = (ctx->Nom()->getText());
        return (Expression*) new ExpressionVariable(ctx->Nom()->getText());
    }

     antlrcpp::Any visitAffectation(ExprParser::AffectationContext *ctx) override {
        cout << "Passage dans visitAffectation" <<endl;
        return (Expression*)visit(ctx->aff());
    }
 
 
     antlrcpp::Any visitPar(ExprParser::ParContext *ctx) override {
        cout<<"Passage dans visitPar" <<endl;
        return (Expression*)(visit(ctx->expr()));
    }
 
 
     antlrcpp::Any visitCharVal(ExprParser::CharValContext *ctx) override {
         return new ExpressionConstante("char", stoi(ctx->CharVal()->getText()));
    }

     antlrcpp::Any visitGetTabVal(ExprParser::GetTabValContext *ctx) override {
        	     /*string nom = visit(ctx->Nom());
        	     int indice =(int)(visit(ctx->expr()));
             	 return ;*/
        	     return nullptr;
      }

     antlrcpp::Any visitAffExpr(ExprParser::AffExprContext *ctx) override {
        cout << "Passage dans AffExpr" <<endl;
         return dynamic_cast<Expression*>(new ExpressionBinaire(
                 (Expression*)new ExpressionVariable(ctx->Nom()->getText()),
                 (Expression*) visit(ctx->expr()),
                 SymboleBinaire::egal
         ));
      }

     antlrcpp::Any visitAppelFonction(ExprParser::AppelFonctionContext *ctx) override {
    	/*return (Expression*) new ExpressionAppelFonction(
    	                            ctx->Nom(),
                                    );*/
        return ctx;
    }
 
 
     antlrcpp::Any visitChar(ExprParser::CharContext *ctx) override {
        cout <<"visitChar" << endl;
        return (string) ctx->Char()->getText();
         //return (TypeVariable) TypeVariable ::char_t;
    }
 
     antlrcpp::Any visitInt32_t(ExprParser::Int32_tContext *ctx) override {
        return (string) ctx->Int32_t()->getText();
    }
 
     antlrcpp::Any visitInt64_t(ExprParser::Int64_tContext *ctx) override {
        return (string) ctx->Int64_t()->getText();
    }

     antlrcpp::Any visitAffExprTableau(ExprParser::AffExprTableauContext *ctx) override {
        return visitChildren(ctx);

    }

     antlrcpp::Any visitIf(ExprParser::IfContext *ctx) override {
        cout << "Passage dans visitIf" <<endl;
        IfElseifElse* structureIf = new IfElseifElse();
        vector<If*> successionIf;

        Expression* elseExpression;

        for(size_t i=0; i<ctx->expr().size();i++){
            Expression* expr = visit(ctx->expr(i));

            // partie 2 de la condition permet de savoir si on a un else
            // si le nombre de bloc est plus grand que le nombre de condition c'est qu'on a un else
            cout << "nombre de condition : " << ctx->expr().size() <<endl;
            cout << "nombre de blocs : " << ctx->blocControl().size() <<endl;
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

        cout << structureIf->toString() << endl;

        return (Controle*)structureIf;
     }
 
     antlrcpp::Any visitWhile(ExprParser::WhileContext *ctx) override {
        cout << "Passage dans visitWhile" << endl;
         vector<Instruction*> bloc = visit(ctx->blocControl());
         While* resVisitWhile = new While(
                 (Expression*)visit(ctx->expr()),
                 new BlocControle(bloc)
         );
         return (Controle*)resVisitWhile;
    }
 
     antlrcpp::Any visitBloc(ExprParser::BlocContext *ctx) override {
        cout <<"Passage dans visitBloc" <<endl;
        //return (vector<Instruction*>)visitChildren(ctx);
         vector<Instruction*> instructions;
         for (size_t i = 0; i < ctx->instr().size(); ++i) {
             instructions.push_back((Instruction*)visit(ctx->instr(i)));
         }
         return instructions;
    }
 
     antlrcpp::Any visitInstruction(ExprParser::InstructionContext *ctx) override {
        cout<< "Passage dans visitInstruction" << endl;
         vector<Instruction*> instructions;
         instructions.push_back((Instruction*)visit(ctx->instr()));
         return instructions;
    }
 
     antlrcpp::Any visitDecTableau(ExprParser::DecTableauContext *ctx) override {
        Declaration* d =
            new Declaration(
                 visit(ctx->type()),
                 ctx->Nom()->getText(),
                 stoi(ctx->IntVal()->getText())
            );
        return d;
    }
 
     antlrcpp::Any visitDecVariable(ExprParser::DecVariableContext *ctx) override {
        cout << "Passage dans visitDecVariable" <<endl;
        Declaration* d;
        if(ctx->expr() == nullptr){
            cout << "expression nulle" <<endl;
            d= new Declaration(
                    visit(ctx->type()),
                    ctx->Nom()->getText(),
                    -1
            );
        } else {
            cout << "expression non nulle" << endl;
            Expression* expr = (Expression*) visit(ctx->expr());
            d= new Declaration(
                    visit(ctx->type()),
                    ctx->Nom()->getText(),
                    -1,
                    expr
            );
        }
        cout << d->getType() << endl;
        cout << d->getNom() <<endl;
        return d;
    }
 
     antlrcpp::Any visitDecVariableMultiple(ExprParser::DecVariableMultipleContext *ctx) override {
        return visitChildren(ctx);
    }
 
     antlrcpp::Any visitInstrDecl(ExprParser::InstrDeclContext *ctx) override {
        cout << "Passage dans visitInstrDecl"<<endl;
        return dynamic_cast<Instruction*>((Declaration*)visit(ctx->declaration()));
    }
 
     antlrcpp::Any visitInstrPutchar(ExprParser::InstrPutcharContext *ctx) override {
        return visitChildren(ctx);
    }
 
     antlrcpp::Any visitInstrGetchar(ExprParser::InstrGetcharContext *ctx) override {
        //return ctx->Getchar()->getText();
        return ctx;
     }
 
     antlrcpp::Any visitBreak(ExprParser::BreakContext *ctx) override {
        return ctx->Break()->getText();
     }
 
     antlrcpp::Any visitReturn(ExprParser::ReturnContext *ctx) override {
        return (Return*) new Return((Expression*)visit(ctx->expr()));
    }
 
     antlrcpp::Any visitInstrExpr(ExprParser::InstrExprContext *ctx) override {
        cout << endl <<"Passage dans visitInstrExpr" <<endl;
        return dynamic_cast<Instruction*>((Expression*)visit(ctx->expr()));
    }
 
     antlrcpp::Any visitControle(ExprParser::ControleContext *ctx) override {
        cout << "Passage dans visitControle" <<endl;
        return dynamic_cast<Instruction*>((Controle*)visit(ctx->control()));
     }
 
     antlrcpp::Any visitDefFonctionType(ExprParser::DefFonctionTypeContext *ctx) override {
        cout << "Passage dans visitDefFonctionType" <<endl;
        Fonction* fonction = new Fonction();

        string typeRetour ;
        fonction->setTypeRetour(visit(ctx->type()));

        fonction->setNom(ctx->Nom()->getText());

        cout << "gestion des arguments" <<endl;
        // gestion des argments
        vector<Declaration*> arguments;
        if(ctx->declaration().size() != 0){
            for(size_t i=0; i<ctx->declaration().size();i++){
                arguments.push_back((Declaration*)visit(ctx->declaration(i)));
            }
            fonction->setArguments(arguments);
        }

        cout << "gestion des instructions" << endl;
         // on créé les instructions de notre fonction
         vector<Instruction*> instructions;
         if(ctx->instr().size() != 0){
             for (size_t i = 0; i < ctx->instr().size(); i++) {
                instructions.push_back((Instruction*)visit(ctx->instr(i)));
             }
             fonction->setInstructions(instructions);
         }

         cout <<fonction->toString() <<endl;

        return fonction;
     }
 
     antlrcpp::Any visitDefFonctionVoid(ExprParser::DefFonctionVoidContext *ctx) override {
         cout << "Passage dans visitDefFonctionVoid" <<endl;
         Fonction* fonction = new Fonction();

         string typeRetour ;
         fonction->setTypeRetour("void");

         fonction->setNom(ctx->Nom()->getText());

         cout << "gestion des arguments" <<endl;
         // gestion des argments
         vector<Declaration*> arguments;
         if(ctx->declaration().size() != 0){
             for(size_t i=0; i<ctx->declaration().size();i++){
                 arguments.push_back((Declaration*)visit(ctx->declaration(i)));
             }
             fonction->setArguments(arguments);
         }

         cout << "gestion des instructions" << endl;
         // on créé les instructions de notre fonction
         vector<Instruction*> instructions;
         if(ctx->instr().size() != 0){
             for (size_t i = 0; i < ctx->instr().size(); i++) {
                 instructions.push_back((Instruction*)visit(ctx->instr(i)));
             }
             fonction->setInstructions(instructions);
         }

         cout <<fonction->toString() <<endl;

         return fonction;
     }

 
 
};
