#ifndef CONDITION_H
#define CONDITION_H

#include <string>
#include "Node.h"

/**
 * @brief 
 * 
 * @details boolean value (used in the loop)
 * @author Antoine GARNIER
 */
class Condition :
        public Node {
protected:

public:
    Condition();

    std::string translate();

};

#endif