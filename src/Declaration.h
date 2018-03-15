//
// Created by thomas on 15/03/18.
//

#ifndef COMPILATEUR_DECLARATION_H
#define COMPILATEUR_DECLARATION_H

#include <iostream>

using namespace std;

class Declaration {
public:
    Declaration();
    ~Declaration();

    int getType();
    string getNom();

private:
    int type;
    string nom ;
};


#endif //COMPILATEUR_DECLARATION_H
