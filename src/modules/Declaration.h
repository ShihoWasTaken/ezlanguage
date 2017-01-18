#ifndef DECLARATION_H
#define DECLARATION_H

#include "Node.h"

/** 
 * @brief 
 * @author : GINISTY Valentin
 * 
 *exemple : ma_super_variable is integer             *
 * variable correspond à la variable
 * faire attention au type qui peut être un type objet
 * faire attention à la portée de la variable
 * faire attention si la variable est constante ou non
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
    
    /**
     * @brief Translation of the instruction into it's C++ counterpart
     * @return a string containing the C++ code of the declaration instruction
     * 
     * The instance will be translated with it's C++ equivalent using its informations
     * The translation corresponds to its specifications, specificities and values
     */
    string translate();
};
#endif
