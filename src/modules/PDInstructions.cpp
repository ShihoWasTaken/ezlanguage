//
// Created by BADRI Kamal
//

#include "PDInstructions.h"

PDInstructions::PDInstructions() {}

PDInstructions::PDInstructions(const string &name) : name(name),right_son(nullptr), _type(Holder::TYPES::INST) {}

string PDInstructions::translate() {
    return "";
}
