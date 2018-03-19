//
// Created by thomas on 15/03/18.
//

#include "Expression.h"

Expression::Expression() {
    this->type =(TypeExpression)-1;
}

Expression::~Expression() {}

string Expression::SymboleBinaireToString(SymboleBinaire input_symbole) {
    string string_symbole ="";
/*
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
        case SymboleBinaire ::strinctinf : string_symbole = "<";  break;
        case SymboleBinaire ::diff       : string_symbole = "!="; break;

        case SymboleBinaire ::band       : string_symbole = "&";  break;
        case SymboleBinaire ::bor        : string_symbole = "|";  break;
        case SymboleBinaire ::bxor       : string_symbole = "^";  break;



        case SymboleBinaire ::pluseq     : string_symbole = "+="; break;
        case SymboleBinaire ::moinseq    : string_symbole = "-="; break;
        case SymboleBinaire ::multeq     : string_symbole = "*="; break;
        case SymboleBinaire ::diveq      : string_symbole = "/="; break;
        case SymboleBinaire ::modeq      : string_symbole = "%="; break;
        case SymboleBinaire ::ampeq      : string_symbole = "&="; break;
        case SymboleBinaire ::boreq      : string_symbole = "|="; break;
        case SymboleBinaire ::bxoreq     : string_symbole = "^="; break;
    }*/
    return string_symbole;
}

string Expression::SymboleUnaireToString(SymboleUnaire input_symbole) {
    string string_symbole ="";
/*
    switch(input_symbole){
        case SymboleUnaire ::egal       : string_symbole = "=";  break;
        case SymboleUnaire ::non        : string_symbole = "!";  break;
        case SymboleUnaire ::bnot       : string_symbole = "~";  break;
        case SymboleUnaire ::noexpr     : string_symbole = "~";  break;
        case SymboleUnaire ::incr       : string_symbole = "++"; break;
        case SymboleUnaire ::decr       : string_symbole = "--"; break;
    }*/
    return string_symbole;
}


void Expression::setTypeExpression(TypeExpression atype) {
    this->type =atype;
}

int Expression::getTypeExpression() {
    return (int)type;
}