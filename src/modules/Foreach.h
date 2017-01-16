#ifndef FOREACH_H
#define FOREACH_H

#include "Iterative_instruction.h"
#include "String_addon.h"

using namespace std;

/**
 * @brief 
 * 
 * @details using example : foreach v in vector (it is translated in c++ like this : for(auto v : vector))
 * 
 * @author : GINISTY Valentin
 */
class Foreach :
        public Iterative_instruction {
protected:
    string element;
    string vector;
public:
    Foreach(string element, string vector);
    std::string translate();
};

#endif
