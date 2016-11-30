//
// Created by BADRI Kamal
//

#include "PDVariables.h"

PDVariables::PDVariables() {}

PDVariables::PDVariables(const string &name) : name(name), _type(Holder::TYPES::VAR) {}

PDVariables::PDVariables(const string &name, PDFunctions *right_son) : name(name),right_son(right_son), _type(Holder::TYPES::VAR) {}

string PDVariables::translate() {
    return "";
}
