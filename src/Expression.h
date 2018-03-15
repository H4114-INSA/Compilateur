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

    virtual string SymboleUnaireToString(SymboleUnaire input_symbole);
    virtual string SymboleBinaireToString(SymboleBinaire input_symbole);
    int getTypeExpression();

    void setTypeExpression(TypeExpression atype);

private:
    TypeExpression type;
};


#endif //COMPILATEUR_EXPRESSION_H
