//
// Created by thomas on 15/03/18.
//

#ifndef COMPILATEUR_EXPRESSION_H
#define COMPILATEUR_EXPRESSION_H

#include <iostream>
#include "Type.h"

using namespace std;

class Expression {
public :
    Expression();
    ~Expression();

    virtual void typage() =0;
    virtual string SymboleToString(Symbole input_symbole) = 0;
    int getTypeExpression();

    void setTypeExpression(TypeExpression atype);

private:
    TypeExpression type;
};


#endif //COMPILATEUR_EXPRESSION_H
