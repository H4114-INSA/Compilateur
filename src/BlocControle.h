//
// Created by thomas on 15/03/18.
//

#ifndef COMPILATEUR_BLOCCONTROLE_H
#define COMPILATEUR_BLOCCONTROLE_H

#include <vector>
#include "Instruction.h"

using namespace std;

class BlocControle {
public:
    BlocControle(vector<Instruction*> aliste);
    ~BlocControle();

    vector<Instruction*> getListeInstruction();
private:
    vector<Instruction*> listeInstructions;
};


#endif //COMPILATEUR_BLOCCONTROLE_H
