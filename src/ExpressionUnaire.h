//
// Created by thomas on 15/03/18.
//

#ifndef COMPILATEUR_EXPRESSIONUNAIRE_H
#define COMPILATEUR_EXPRESSIONUNAIRE_H

#include "Expression.h"
#include "Type.h"

class ExpressionUnaire : public Expression {

public:
    ExpressionUnaire(Expression* e1, SymboleUnaire symb);
    ~ExpressionUnaire();

    Expression* getExpression();
    SymboleUnaire getSymbole();

    string toString();

private:
    Expression* expression;
    SymboleUnaire symbole;
};


#endif //COMPILATEUR_EXPRESSIONUNAIRE_H
