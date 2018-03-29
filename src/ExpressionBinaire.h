//
// Created by thomas on 15/03/18.
//
#pragma once

#ifndef COMPILATEUR_EXPRESSIONBINAIRE_H
#define COMPILATEUR_EXPRESSIONBINAIRE_H

#include "Expression.h"
#include "Type.h"
#include "CFG.h"

class ExpressionBinaire : public Expression{
public:
    ExpressionBinaire();
    ExpressionBinaire(Expression* e1, Expression* e2, SymboleBinaire symb);
    ~ExpressionBinaire();

    Expression* getLeftExpression();
    Expression* getRightExpression();

    void setLeftExpression(Expression* ex);
    void setRightExpression(Expression* ex);

    SymboleBinaire getSymbole();

    string toString();

    void resolutionPorteeVariable(string idContexte, vector<string> *pileVar, vector<string> *pileFonct, map<string, Declaration*> *varMap, map<string,Fonction*>* fonctMap);

    string buildIR(CFG *cfg) override;

    string typageExpression(string idContexte, map<string, Declaration *> *varMap, map<string, Fonction *> *fonctMap);

private:
    Expression* expression1;
    Expression* expression2;
    SymboleBinaire symbole;
};


#endif //COMPILATEUR_EXPRESSIONBINAIRE_H
