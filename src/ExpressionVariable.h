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

#include <string>

using namespace std;

class ExpressionVariable : public Expression{
public:
    ExpressionVariable(string anom, TypeVariable atype, Variable* valeur);
    ~ExpressionVariable();

    Variable* getValeur();
    string getNom();
    TypeVariable getType();

    void resolutionPorteeVariable(string idContexte, vector<string> *pileVar, vector<string> *pileFonct, map<string, Declaration*> *varMap);

private:
    string nom;
    TypeVariable type;
    Variable * variable;
};


#endif //COMPILATEUR_EXPRESSIONVARIABLE_H
