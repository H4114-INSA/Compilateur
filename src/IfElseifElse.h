//
// Created by thomas on 20/03/18.
//

#ifndef COMPILATEUR_IFELSEIFELSE_H
#define COMPILATEUR_IFELSEIFELSE_H

#include "Controle.h"
#include "If.h"

using namespace std;

class IfElseifElse : public Controle{
public:
    IfElseifElse();
    IfElseifElse(vector<If*> successionIf);
    ~IfElseifElse();

    vector<If*> getSuccession();
    void setSuccession(vector<If*> successionIf);

    void resolutionPorteeVariable(string idContexte, vector<string> *pileVar, vector<string> *pileFonct, map<string, Declaration*> *varMap, map<string,Fonction*>* fonctMap);

    string toString();

private:
    // on modélise un if else if else par une succession de if
    // pour le else on aura une expression nulle
    vector<If*> successionIf;

};


#endif //COMPILATEUR_IFELSEIFELSE_H
