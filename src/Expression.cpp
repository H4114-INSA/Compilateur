//
// Created by thomas on 15/03/18.
//

#include "Expression.h"

Expression::Expression() {
    this->typeExpression =TypeExpression ::no_type_expression;
}

Expression::~Expression() {}

string Expression::SymboleBinaireToString(SymboleBinaire input_symbole) {
    string string_symbole ="";

    switch(input_symbole)
    {

        case SymboleBinaire ::plus       : string_symbole = "+";  break;
        case SymboleBinaire ::div        : string_symbole = "/";  break;
        case SymboleBinaire ::mult       : string_symbole = "*";  break;
        case SymboleBinaire ::moins      : string_symbole = "-";  break;
        case SymboleBinaire ::leftshift  : string_symbole = "<<"; break;
        case SymboleBinaire ::rightshift : string_symbole = ">>"; break;
        case SymboleBinaire ::et         : string_symbole = "&&"; break;
        case SymboleBinaire ::ou         : string_symbole = "||"; break;
        case SymboleBinaire ::infegal    : string_symbole = "<="; break;
        case SymboleBinaire ::supegal    : string_symbole = ">="; break;
        case SymboleBinaire ::strictsup  : string_symbole = ">";  break;
        case SymboleBinaire ::diff       : string_symbole = "!="; break;
        case SymboleBinaire ::egalegal   : string_symbole = "=="; break;
        case SymboleBinaire ::band       : string_symbole = "&";  break;
        case SymboleBinaire ::bor        : string_symbole = "|";  break;
        case SymboleBinaire ::bxor       : string_symbole = "^";  break;
        case SymboleBinaire ::egal       : string_symbole = "=";  break;



        case SymboleBinaire ::pluseq     : string_symbole = "+="; break;
        case SymboleBinaire ::moinseq    : string_symbole = "-="; break;
        case SymboleBinaire ::multeq     : string_symbole = "*="; break;
        case SymboleBinaire ::diveq      : string_symbole = "/="; break;
        case SymboleBinaire ::modeq      : string_symbole = "%="; break;
        case SymboleBinaire ::ampeq      : string_symbole = "&="; break;
        case SymboleBinaire ::boreq      : string_symbole = "|="; break;
        case SymboleBinaire ::bxoreq     : string_symbole = "^="; break;
    }
    return string_symbole;
}

string Expression::SymboleUnaireToString(SymboleUnaire input_symbole) {
    string string_symbole ="";
//non,  bnot, noexpr,preincr, postincr, predecr, postdecr,moins
    switch(input_symbole){
        case SymboleUnaire ::non        : string_symbole = "!";  break;
        case SymboleUnaire ::bnot       : string_symbole = "~";  break;
        case SymboleUnaire ::noexpr     : string_symbole = "~";  break;
        case SymboleUnaire ::postincr       : string_symbole = "++"; break;
        case SymboleUnaire ::preincr       : string_symbole = "++"; break;
        case SymboleUnaire ::predecr       : string_symbole = "--"; break;
        case SymboleUnaire ::postdecr       : string_symbole = "--"; break;
        case SymboleUnaire ::moins       : string_symbole = "-"; break;
    }
    return string_symbole;
}


void Expression::setTypeExpression(TypeExpression atype) {
    this->typeExpression =atype;
}

int Expression::getTypeExpression() {
    return (int)typeExpression;
}

string Expression::getTypeRetour() {
    return this->typeRetour;
}

void Expression::setTypeRetourExpression(string typeRetour) {
    this->typeRetour = typeRetour;
}

