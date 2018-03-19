#ifndef APPELFONCTION_H
#define APPELFONCTION_H

#include <vector>
#include "Expression.h"

using namespace std;

class ExpressionAppelFonction : public Expression {
public:
    ExpressionAppelFonction(vector<Expression*> liste);
    ~ExpressionAppelFonction();

    vector<Expression*> getListeInstruction();

private:
    vector<Expression*> parametres;
};


#endif
