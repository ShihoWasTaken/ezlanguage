#ifndef FORALL_H
#define FORALL_H

#include "Iterative_instruction.h"
#include <string>
#include "String_addon.h"

/**
 * @brief 
 * 
 * @details example : forall i in 1..10 step 2 (step is optionnal)
 * Use Declaration, Condition and Instruction
 * 
 * @author : GINISTY Valentin
 */
class Forall
        : public Iterative_instruction {
protected:
    int ind_begin;
    int ind_end;
    int step;
    int imbrication;
public:
    Forall(int ind_begin, int ind_end, int step, int imbrication);
    std::string translate();
};

#endif
