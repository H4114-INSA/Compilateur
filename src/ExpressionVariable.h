//
// Created by thomas on 15/03/18.
//

#ifndef COMPILATEUR_EXPRESSIONVARIABLE_H
#define COMPILATEUR_EXPRESSIONVARIABLE_H

#include "Type.h"
#include "Expression.h"

#include <string>

using namespace std;

class ExpressionVariable : public Expression{
public:
    ExpressionVariable(string anom, TypeVariable atype, int valeur);
    ~ExpressionVariable();

    int getValeur();
    string getNom();
    TypeVariable getType();

private:
    string nom;
    TypeVariable type;
    int valeur;
};


#endif //COMPILATEUR_EXPRESSIONVARIABLE_H
