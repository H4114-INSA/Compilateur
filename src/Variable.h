//
// Created by thomas on 19/03/18.
//

#ifndef COMPILATEUR_VARIABLE_H
#define COMPILATEUR_VARIABLE_H

#include <string>

using namespace std;

class Variable {
public:
    Variable(string nomVar);
    ~Variable();

    string getNom();
    void setNom(string nomVar);
private:
    string nomVariable;
};


#endif //COMPILATEUR_VARIABLE_H
