//
// Created by thomas on 15/03/18.
//
#pragma once

#ifndef COMPILATEUR_EXPRESSIONELEMENTTABLEAU_H
#define COMPILATEUR_EXPRESSIONELEMENTTABLEAU_H


#include "Type.h"

#include "Expression.h"

class ExpressionElementTableau : public Expression{

public:
    ExpressionElementTableau();
    ExpressionElementTableau(int indice, string nom);
    ~ExpressionElementTableau();

    int getIndice();
    string getNom();

    string toString();

    void resolutionPorteeVariable(string idContexte, vector<string> *pileVar, vector<string> *pileFonct, map<string, Declaration*> *varMap);

private:
    int indice;
    string nom;
};


#endif //COMPILATEUR_EXPRESSIONELEMENTTABLEAU_H
