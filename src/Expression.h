//
// Created by thomas on 15/03/18.
//
#pragma once

#ifndef COMPILATEUR_EXPRESSION_H
#define COMPILATEUR_EXPRESSION_H

//#ifndef DECLARATION_H
//#define DECLARATION_H

#include <iostream>
#include <vector>
#include <map>
#include "Type.h"
#include "Instruction.h"

class Fonction;
class Declaration;
class CFG;

using namespace std;

class Expression : public Instruction{
public :
    Expression();
    ~Expression();

    virtual string SymboleUnaireToString(SymboleUnaire input_symbole);
    virtual string SymboleBinaireToString(SymboleBinaire input_symbole);
    int getTypeExpression();
    string getTypeRetour();

    void setTypeExpression(TypeExpression atype);
    void setTypeRetourExpression(string typeRetour);

    virtual void resolutionPorteeVariable(string idContexte, vector<string> *pileVar, vector<string> *pileFonct, map<string, Declaration*> *varMap,map<string,Fonction*>* fonctMap)=0;
    // idContexte : le nom de du contexte à vérifier

    virtual string typageExpression(string idContexte, map<string, Declaration *> *varMap, map<string, Fonction *> *fonctMap)=0;

    virtual string buildIR(CFG *cfg) =0;

private:
    TypeExpression typeExpression;
    string typeRetour;
};


#endif //COMPILATEUR_EXPRESSION_H
//#endif //DECLARATION_H
