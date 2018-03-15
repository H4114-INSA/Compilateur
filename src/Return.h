//
// Created by thomas on 15/03/18.
//

#ifndef COMPILATEUR_RETURN_H
#define COMPILATEUR_RETURN_H

#include "Expression.h"

class Return {
public:
    Return(Expression* e);
    ~Return();

    Expression* getExpression();

private:
    Expression* expression;
};


#endif //COMPILATEUR_RETURN_H
