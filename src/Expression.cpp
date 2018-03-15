//
// Created by thomas on 15/03/18.
//

#include "Expression.h"

Expression::Expression() {
    this->type =(TypeExpression)-1;
}

Expression::~Expression() {}

string Expression::SymboleToString(Symbole input_symbole) {
    string string_symbole;

    switch(input_symbole)
    {
        case Symbole ::egal       : string_symbole = "=";  break;
        case Symbole ::plus       : string_symbole = "+";  break;
        case Symbole ::div        : string_symbole = "/":  break;
        case Symbole ::mult       : string_symbole = "*";  break;
        case Symbole ::moins      : string_symbole = "-";  break;
        case Symbole ::leftshift  : string_symbole = "<<"; break;
        case Symbole ::rightshift : string_symbole = ">>"; break;
        case Symbole ::et         : string_symbole = "&&"; break;
        case Symbole ::ou         : string_symbole = "||"; break;
        case Symbole ::infegal    : string_symbole = "<="; break;
        case Symbole ::supegal    : string_symbole = ">="; break;
        case Symbole ::strictsup  : string_symbole = ">";  break;
        case Symbole ::strinctinf : string_symbole = "<";  break;
        case Symbole ::diff       : string_symbole = "!="; break;
        case Symbole ::non        : string_symbole = "!";  break;
        case Symbole ::band       : string_symbole = "&";  break;
        case Symbole ::bor        : string_symbole = "|";  break;
        case Symbole ::bxor       : string_symbole = "^";  break;
        case Symbole ::bnot       : string_symbole = "~";  break;
        case Symbole ::comma      : string_symbole = ",";  break;
        case Symbole ::noexpr     : string_symbole = "~";  break;
        case Symbole ::incr       : string_symbole = "++"; break;
        case Symbole ::decr       : string_symbole = "--"; break;
        case Symbole ::pluseq     : string_symbole = "+="; break;
        case Symbole ::moinseq    : string_symbole = "-="; break;
        case Symbole ::multeq     : string_symbole = "*="; break;
        case Symbole ::diveq      : string_symbole = "/="; break;
        case Symbole ::modeq      : string_symbole = "%="; break;
        case Symbole ::ampeq      : string_symbole = "&="; break;
        case Symbole ::boreq      : string_symbole = "|="; break;
        case Symbole ::bxoreq     : string_symbole = "^="; break;
    }
}

void Expression::setTypeExpression(TypeExpression atype) {
    this->type =atype;
}

int Expression::getTypeExpression() {
    return (int)type;
}