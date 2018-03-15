//
// Created by thomas on 15/03/18.
//

#ifndef COMPILATEUR_TYPEEXPRESSION_H
#define COMPILATEUR_TYPEEXPRESSION_H

#endif //COMPILATEUR_TYPEEXPRESSION_H

enum class TypeExpression {unaire, binaire, constante, variable, variableTableau, affectation} ;

enum class Symbole {egal, plus, div, mult, moins, leftshift, rightshift, et, ou, infegal, supegal,
strictsup, strinctinf, diff, non, band, bor, bxor, bnot, comma, noexpr, incr, decr, pluseq, moinseq, multeq, diveq, modeq, ampeq, boreq, bxoreq };

enum class TypeValeur {type_int, type_char};