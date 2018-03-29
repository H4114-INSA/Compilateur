//
// Created by thomas on 15/03/18.
//
#pragma once

#ifndef COMPILATEUR_EXPRESSIONVARIABLE_H
#define COMPILATEUR_EXPRESSIONVARIABLE_H

#include "Type.h"
#include "Expression.h"
#include "Variable.h"
#include "Declaration.h"
#include "CFG.h"

#include <string>

using namespace std;

class ExpressionVariable : public Expression{
public:
    ExpressionVariable(string anom);
    ~ExpressionVariable();

    string getNom();
    void setNom(string nom);

    string toString();

    void resolutionPorteeVariable(string idContexte, vector<string> *pileVar, vector<string> *pileFonct, map<string, Declaration*> *varMap,map<string,Fonction*>* fonctMap);

    string buildIR(CFG *cfg) override;

    string typageExpression(string idContexte, map<string, Declaration *> *varMap, map<string, Fonction *> *fonctMap);

private:
    string nom;
};


#endif //COMPILATEUR_EXPRESSIONVARIABLE_H
