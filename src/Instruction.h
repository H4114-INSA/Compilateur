//
// Created by thomas on 15/03/18.
//
#pragma once

#ifndef COMPILATEUR_INSTRUCTION_H
#define COMPILATEUR_INSTRUCTION_H


#include <string>

class CFG;

class Instruction {
public:
    Instruction();
    ~Instruction();

    virtual std::string toString()=0;
    virtual std::string buildIR(CFG *cfg)=0;

private:

};


#endif //COMPILATEUR_INSTRUCTION_H
