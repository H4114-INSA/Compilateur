

//
// Created by thomas on 15/03/18.
//
#pragma once

#ifndef COMPILATEUR_BREAK_H
#define COMPILATEUR_BREAK_H


#include "Instruction.h"
#include "CFG.h"

class Break : public Instruction {
public:
    Break();
    ~Break();

    string buildIR(CFG *cfg) override;

private:

};


#endif //COMPILATEUR_BREAK_H
