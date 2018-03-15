//
// Created by thomas on 15/03/18.
//

#ifndef COMPILATEUR_DECLARATION_H
#define COMPILATEUR_DECLARATION_H

#include <iostream>
#include "Type.h"
#include "Instruction.h"
#include "ExpressionAffectation.h"

using namespace std;

class Declaration : public Instruction{
public:
    Declaration();
    Declaration(TypeVariable atype, string nom, int tabSize =-1 , Expression* expr = nullptr);
    ~Declaration();

    TypeVariable getType();
    string getNom();

    string toString();

private:
    TypeVariable type;
    int tabSize;
    string nom ;
    Expression* valeur;
};


#endif //COMPILATEUR_DECLARATION_H
