//
// Created by thomas on 15/03/18.
//
#pragma once

#ifndef COMPILATEUR_TYPEEXPRESSION_H
#define COMPILATEUR_TYPEEXPRESSION_H

#endif //COMPILATEUR_TYPEEXPRESSION_H

enum class TypeExpression {unaire, binaire, constante, variable, elementTableau, affectation} ;

enum class SymboleUnaire {non,  bnot, noexpr,incr, decr, moins };

enum class SymboleBinaire {egal, egalegal, plus, div, mult, moins, mod, ouex, leftshift, rightshift, et, ou, infegal, supegal, band, bor, bxor,
    non,strictsup, strictinf, diff, pluseq, moinseq, multeq, diveq, modeq, ampeq, boreq, bxoreq,  virgule};

enum class TypeValeur {type_int, type_char};

enum class TypeVariable {int32_t, int64_t, char_t };
