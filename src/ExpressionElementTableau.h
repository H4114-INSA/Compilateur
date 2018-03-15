//
// Created by thomas on 15/03/18.
//

#ifndef COMPILATEUR_EXPRESSIONELEMENTTABLEAU_H
#define COMPILATEUR_EXPRESSIONELEMENTTABLEAU_H


#include "Type.h"

#include "Expression.h"

class ExpressionElementTableau : public Expression{

public:
    ExpressionElementTableau(TypeVariable atype, int indice, string nom);
    ~ExpressionElementTableau();

    int getIndice();
    TypeVariable getType();
    string getNom();

private:
    TypeVariable type;
    int indice;
    string nom;
};


#endif //COMPILATEUR_EXPRESSIONELEMENTTABLEAU_H
