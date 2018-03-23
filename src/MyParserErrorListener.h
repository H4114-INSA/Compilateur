//
// Created by thomas on 23/03/18.
//

#ifndef COMPILATEUR_MYPARSERERRORLISTENER_H
#define COMPILATEUR_MYPARSERERRORLISTENER_H

#endif //COMPILATEUR_MYPARSERERRORLISTENER_H

#include "antlr4-runtime/antlr4-runtime.h"

using namespace std;
using namespace antlr4;

class MyParserErrorListener : public BaseErrorListener {
    // source : https://github.com/antlr/antlr4/issues/1887

    void syntaxError(Recognizer *recognizer, Token * offendingSymbol, size_t line, size_t charPositionInLine,
                     const string &msg, std::exception_ptr e) override
    {
        string s =  "Line(" + to_string((long)line) + ":" + to_string((long)charPositionInLine) + ") Error(" + msg + ")";
        throw std::invalid_argument(s);
    }

};