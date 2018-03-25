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
#include "ExpressionAppelFonction.h"
#include "IfElseifElse.h"

Fonction::Fonction() {

}
Fonction::Fonction(string nom, string typeRetour, vector<Declaration *> arguments, vector<Instruction*> instructions) {
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

void Fonction::resolutionPorteeVariable(vector<string> *pileVar, vector<string> *pileFonct, map<string, Declaration *> *varMap,
                                        map<string, Fonction *> *fonctMap) {
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
    while(itInstr != instructions.end())
    {
        string idContexte = this->getNom()+"_";

        if(dynamic_cast<Declaration*>(*itInstr)){
            Declaration* dec = (Declaration*)*itInstr;

            // si la variable n'exite pas
            if(varMap->find(idContexte+dec->getNom()) == varMap->end()){
                string nomArgument = idContexte + dec->getNom();
                pileVar->push_back(nomArgument);
                varMap->insert(std::pair<string, Declaration*>(nomArgument,dec));
            } else {
                cerr << "Une variable ayant le même nom a déjà été déclaré : " << dec->getNom() <<endl;
                cerr << "Arrêt de l'exécution" <<endl;
                exit(3);
            }
        } else if(dynamic_cast<Expression*>(*itInstr) || dynamic_cast<ExpressionUnaire*>(*itInstr) || dynamic_cast<ExpressionBinaire*>(*itInstr)
                || dynamic_cast<ExpressionConstante*>(*itInstr) || dynamic_cast<ExpressionVariable*>(*itInstr) || dynamic_cast<ExpressionAppelFonction*>(*itInstr)){
            Expression *e = (Expression*)*itInstr;
            e->resolutionPorteeVariable(idContexte,pileVar,pileFonct,varMap,fonctMap);
            e->typageExpression(idContexte, varMap,fonctMap);
        }
        else if(dynamic_cast<Controle*>(*itInstr)){
            Controle* controle = (Controle*)*itInstr;
            controle->resolutionPorteeVariable(idContexte,pileVar, pileFonct,varMap,fonctMap);
        }
        else if(dynamic_cast<Return*>(*itInstr)){
            Return* ret = (Return*)*itInstr;
            ret->getExpression()->resolutionPorteeVariable(idContexte,pileVar,pileFonct, varMap,fonctMap);
        }
        itInstr++;
    }

}

string Fonction::getTypeRetour() {
    return this->typeRetour;
}

void Fonction::setTypeRetour(string type) {
    this->typeRetour=type;
}

void Fonction::setNom(string nom) {
    this->nom=nom;
}

void Fonction::setArguments(vector<Declaration *> arguments) {
    this->args=arguments;
}

void Fonction::setInstructions(vector<Instruction *> instr) {
    this->instructions=instr;
}

vector<Instruction*> Fonction::getInstructions() {
    return this->instructions;
}

vector<Declaration*> Fonction::getArguments() {
    return this->args;
}

string Fonction::toString() {
    return "Fonction | Type Retour : "+ typeRetour+ " - nom : " + nom +" - Nb args : "+ to_string(args.size()) + " - Nb instructions : " + to_string(instructions.size()) ;
}