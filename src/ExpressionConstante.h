//
// Created by thomas on 15/03/18.
//
#pragma once

#ifndef COMPILATEUR_EXPRESSIONCONSTANTE_H
#define COMPILATEUR_EXPRESSIONCONSTANTE_H

#include <iostream>
#include "Expression.h"

using namespace std;

class ExpressionConstante : public Expression{

public :
    ExpressionConstante(string atypeValeur, int avaleur, bool isSpecial = false);
    ~ExpressionConstante();

    string toString();

    string getTypeValeur();
    int getValeur();

    void resolutionPorteeVariable(string idContexte, vector<string> *pileVar, vector<string> *pileFonct, map<string, Declaration*> *varMap, map<string,Fonction*>* fonctMap);
    string typageExpression(string idContexte, map<string, Declaration *> *varMap, map<string, Fonction *> *fonctMap);

private:
    string typeValeur;
    int valeur;
    bool isSpecial;

};


#endif //COMPILATEUR_EXPRESSIONCONSTANTE_H
