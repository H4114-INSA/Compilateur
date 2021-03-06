//
// Created by thomas on 15/03/18.
//
#pragma once

#ifndef COMPILATEUR_EXPRESSIONUNAIRE_H
#define COMPILATEUR_EXPRESSIONUNAIRE_H

#include "Expression.h"
#include "Type.h"
#include "CFG.h"

class ExpressionUnaire : public Expression {

public:
    ExpressionUnaire(Expression* e1, SymboleUnaire symb);
    ~ExpressionUnaire();

    Expression* getExpression();
    SymboleUnaire getSymbole();

    string toString();

    void resolutionPorteeVariable(string idContexte, vector<string> *pileVar, vector<string> *pileFonct, map<string, Declaration*> *varMap,map<string,Fonction*>* fonctMap);

    string buildIR(CFG *cfg) override;

    string typageExpression(string idContexte, map<string, Declaration *> *varMap, map<string, Fonction *> *fonctMap);

private:
    Expression* expression;
    SymboleUnaire symbole;
};


#endif //COMPILATEUR_EXPRESSIONUNAIRE_H
