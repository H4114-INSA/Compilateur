//
// Created by thomas on 15/03/18.
//

#pragma once

#ifndef COMPILATEUR_DECLARATION_H
#define COMPILATEUR_DECLARATION_H

//#ifndef EXPRESSION_H
//#define EXPRESSION_H

#include <iostream>
#include "Type.h"
#include "Instruction.h"
#include "Expression.h"


using namespace std;

class Declaration : public Instruction{
public:
    Declaration();
    //Declaration(TypeVariable atype, string nom, int tabSize =-1 , Expression* expr = nullptr);
    Declaration(string type, string nom, int tabSize =-1 , Expression* expr = nullptr);
    ~Declaration();

    //TypeVariable getType();
    string getNom();

    string toString();

    void setNom(string nom);

    string getType();
    void setType(string type);

    int getSize();

private:
    //TypeVariable type;
    string type;
    int tabSize;
    string nom ;
    Expression* valeur;
};


#endif //COMPILATEUR_DECLARATION_H
//#endif //EXPRESSION_H
