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

class Declaration;

using namespace std;

class Expression : public Instruction{
public :
    Expression();
    ~Expression();

    virtual string SymboleUnaireToString(SymboleUnaire input_symbole);
    virtual string SymboleBinaireToString(SymboleBinaire input_symbole);
    int getTypeExpression();

    void setTypeExpression(TypeExpression atype);

    virtual void resolutionPorteeVariable(string idContexte, vector<string> *pileVar, vector<string> *pileFonct, map<string, Declaration*> *varMap)=0;
    // idContexte : le nom de du contexte à vérifier

private:
    TypeExpression type;
};


#endif //COMPILATEUR_EXPRESSION_H
//#endif //DECLARATION_H
