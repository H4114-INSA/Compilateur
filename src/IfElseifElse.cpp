//
// Created by thomas on 20/03/18.
//

#include "IfElseifElse.h"

IfElseifElse::IfElseifElse() {

}

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

void IfElseifElse::resolutionPorteeVariable(string idContexte, vector<string> *pileVar, vector<string> *pileFonct,
                                            map<string, Declaration *> *varMap) {

}

string IfElseifElse::toString() {
    string res =  "IfElseifElse | " + to_string(successionIf.size());
    for (int i=0; i<successionIf.size();i++) {
        res += " "  +successionIf.at(i)->toString();

    }
    return res;
}
