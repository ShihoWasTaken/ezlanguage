//
// Created by BADRI Kamal
//

#include "PDFunctions.h"

PDFunctions::PDFunctions() {}

PDFunctions::PDFunctions(const string &name) : name(name), _type(Holder::TYPES::FUNC) {}

PDFunctions::PDFunctions(const string &name, PDInstructions *right_son) : name(name),right_son(right_son), _type(Holder::TYPES::FUNC) {}

string PDFunctions::translate() {
    return "";
}
