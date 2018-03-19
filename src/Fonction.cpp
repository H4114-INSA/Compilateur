//
// Created by thomas on 15/03/18.
//

#include "Fonction.h"
#include "ExpressionConstante.h"
#include "ExpressionVariable.h"
#include "ExpressionBinaire.h"
#include "ExpressionConstante.h"
#include "Controle.h"
#include "If.h"
#include "While.h"
#include "Return.h"


Fonction::Fonction(string nom, TypeVariable typeRetour, vector<Declaration *> arguments, vector<Instruction*> instructions) {
    this->nom = nom;
    this-> typeRetour=typeRetour;
    this->args = arguments;
    this->instructions = instructions;
}

Fonction::~Fonction() {
    delete (&args);
}

string Fonction::getNom() {
    return this->nom;
}

void Fonction::resolutionPorteeVariable(vector<string> *pileVar, vector<string> *pileFonct,
                                        map<string, Declaration *> *varMap) {

    //resolution portée pour les arguments
    vector<Declaration*>::iterator itArg;
    for (itArg = args.begin(); itArg != args.end() ; itArg++) {
        string nomArgument = this->nom+ "_"+(*itArg)->getNom();
        (*itArg)->setNom(nomArgument);

        pileVar->push_back(nomArgument);
        varMap->insert(std::pair<string, Declaration*>(nomArgument,(*itArg)));
    }

    // resolution portée pour les instructions
    vector<Instruction*>::iterator itInstr = instructions.begin();
    while(itInstr != instructions.end()){
        string idContexte = this->getNom()+"_";

        if(dynamic_cast<Declaration*>(*itInstr)){
            Declaration* dec = (Declaration*)*itInstr;

            string nomArgument = idContexte + dec->getNom();
            dec->setNom(nomArgument);

            pileVar->push_back(nomArgument);
            varMap->insert(std::pair<string, Declaration*>(nomArgument,dec));
        }
        if(dynamic_cast<Expression*>(*itInstr) || dynamic_cast<ExpressionUnaire*>(*itInstr) || dynamic_cast<ExpressionBinaire*>(*itInstr)
                || dynamic_cast<ExpressionConstante*>(*itInstr) || dynamic_cast<ExpressionVariable*>(*itInstr)){
            Expression *e = (Expression*)*itInstr;
            e->resolutionPorteeVariable(idContexte,pileVar,pileFonct,varMap);
        }
        if(dynamic_cast<Controle*>(*itInstr) || dynamic_cast<If*>(*itInstr) || dynamic_cast<While*>(*itInstr)){
            Controle* controle = (Controle*)*itInstr;
            controle->resolutionPorteeVariable(idContexte, pileVar, pileFonct, varMap);
        }
        if(dynamic_cast<Return*>(*itInstr)){
            Return* ret = (Return*)*itInstr;
            ret->getExpression()->resolutionPorteeVariable(idContexte,pileVar,pileFonct, varMap);
        }
        itInstr++;
    }

}