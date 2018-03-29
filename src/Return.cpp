//
// Created by thomas on 15/03/18.
//

#include "Return.h"

Return::Return() {

}

Return::Return(Expression* e) {
    this->expression=e;
}

Expression* Return::getExpression() {
    return this->expression;
}

string Return::toString() {
    return "Return ( " + expression->toString() + " )";
}

string Return::buildIR(CFG *cfg) {

}