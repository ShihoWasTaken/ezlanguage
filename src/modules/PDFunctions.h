//
// Created by BADRI Kamal
//

#ifndef DFUNCTIONS_H
#define DFUNCTIONS_H


#include "Holder.h"

/**
 * This class represents the functions declaration part
 */
class PDFunctions : public Holder {

public:
    PDFunctions();

    PDFunctions(const string &name, PDInstructions *right_son);

    PDFunctions(const string &name);

    string translate();

};


#endif
