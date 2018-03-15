//
// Created by thomas on 15/03/18.
//

#ifndef COMPILATEUR_EXPRESSIONCONSTANTE_H
#define COMPILATEUR_EXPRESSIONCONSTANTE_H

#include <iostream>
#include "Expression.h"

using namespace std;

class ExpressionConstante : public Expression{

public :
    ExpressionConstante(TypeExpression atypeExpression, TypeValeur atypeValeur, int avaleur);
    ~ExpressionConstante();

    string toString();

    TypeValeur getTypeValeur();
    in getValeur();

private:
    TypeValeur typeValeur;
    int valeur;

};


#endif //COMPILATEUR_EXPRESSIONCONSTANTE_H
