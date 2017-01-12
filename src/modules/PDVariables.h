/**
 * @author Kamal Badri
 */

#ifndef PDVARIABLES_H
#define PDVARIABLES_H


#include "PDFunctions.h"

/**
 * This class represents the variables declaration part
 */
class PDVariables : public Holder {

public:
    PDVariables();

    PDVariables(const string &name, PDFunctions *right_son);

    PDVariables(const string &name);

    string translate();

};


#endif
