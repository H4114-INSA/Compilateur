//
// Created by thomas on 15/03/18.
//

#include "Return.h"

Return::Return(Expression* e) {
    this->expression=e;
}

Expression* Return::getExpression() {
    return this->expression;
}