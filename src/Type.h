//
// Created by thomas on 15/03/18.
//
#pragma once

#ifndef COMPILATEUR_TYPEEXPRESSION_H
#define COMPILATEUR_TYPEEXPRESSION_H

#endif //COMPILATEUR_TYPEEXPRESSION_H

enum class TypeExpression {unaire, binaire, constante, variable, elementTableau, affectation} ;

enum class SymboleUnaire {egal,  non,  bnot, noexpr, incr, decr };

enum class SymboleBinaire {plus, div, mult, moins, leftshift, rightshift, et, ou, infegal, supegal, band, bor, bxor,
    strictsup, strinctinf, diff, pluseq, moinseq, multeq, diveq, modeq, ampeq, boreq, bxoreq };

enum class TypeValeur {type_int, type_char};

enum class TypeVariable {int32_t, int64_t, char_t };
