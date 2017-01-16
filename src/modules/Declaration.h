#ifndef DECLARATION_H
#define DECLARATION_H

#include "Node.h"

/** 
 * @author : GINISTY Valentin
 */
class Declaration :
        public Node {
protected:
    string variable;
    string type;
    string scope;
    bool isconst;
public:
    Declaration(string, string, string, bool);
    string translate();
};
#endif