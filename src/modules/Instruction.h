#ifndef INSTRUCTION_H
#define INSTRUCTION_H

#include <string>
#include "Node.h"

//TODO do we have to turn it into an abstract class ?
class Instruction :
        public Node {
protected:

public:

Instruction();
std::string translate();
~Instruction();

};

#endif
