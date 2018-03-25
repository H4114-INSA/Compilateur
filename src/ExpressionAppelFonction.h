#ifndef APPELFONCTION_H
#define APPELFONCTION_H

#include <vector>
#include "Expression.h"
#include "Declaration.h"
#include "Fonction.h"

using namespace std;

class ExpressionAppelFonction : public Expression {
public:
    ExpressionAppelFonction();
    ExpressionAppelFonction(string nomFonction, vector<Expression*> liste );
    ~ExpressionAppelFonction();

    vector<Expression*> getParametres();
    string getNom();
    void setNom(string nom);

    void resolutionPorteeVariable(string idContexte, vector<string> *pileVar, vector<string> *pileFonct, map<string, Declaration *> *varMap, map<string,Fonction*>* fonctMap);

    string toString();

    string typageExpression(string idContexte, map<string, Declaration *> *varMap, map<string, Fonction *> *fonctMap);
private:
    vector<Expression*> parametres;
    string nomFonction;
};


#endif
