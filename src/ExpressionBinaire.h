//
// Created by thomas on 15/03/18.
//

#ifndef COMPILATEUR_EXPRESSIONBINAIRE_H
#define COMPILATEUR_EXPRESSIONBINAIRE_H

#include "Expression.h"
#include "Type.h"

class ExpressionBinaire {
public:
    ExpressionBinaire(Expression* e1, Expression* e2, SymboleBinaire symb);
    ~ExpressionBinaire();

    Expression* getLeftExpression();
    Expression* getRightExpression();
    SymboleBinaire getSymbole();

    string toString();

private:
    Expression* expression1;
    Expression* expression2;
    SymboleBinaire symbole;
};


#endif //COMPILATEUR_EXPRESSIONBINAIRE_H
