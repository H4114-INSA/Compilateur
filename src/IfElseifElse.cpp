//
// Created by thomas on 20/03/18.
//

#include "IfElseifElse.h"

IfElseifElse::IfElseifElse(vector<If *> successionIf) {
    this->successionIf = successionIf;
}

IfElseifElse::~IfElseifElse() {

}

vector<If *> IfElseifElse::getSuccession() {
    return this->successionIf;
}

void IfElseifElse::setSuccession(vector<If*> successionIf) {
    this->successionIf = successionIf;
}
