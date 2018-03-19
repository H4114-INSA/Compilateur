#ifndef APPELFONCTION_H
#define APPELFONCTION_H

#include <vector>
#include "Expression.h"
#include "Declaration.h"

using namespace std;

class ExpressionAppelFonction : public Expression {
public:
    ExpressionAppelFonction(string nomFonction, vector<Declaration*> liste);
    ~ExpressionAppelFonction();

    vector<Declaration*> getParametres();
    string getNom();
    void setNom(string nom);

private:
    vector<Declaration*> parametres;
    string nomFonction;
};


#endif
