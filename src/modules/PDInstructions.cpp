/**
 * @author Kamal Badri
 */

#include "PDInstructions.h"

PDInstructions::PDInstructions() {}

PDInstructions::PDInstructions(const string &name) : Holder(name, Holder::TYPES::INST) {
    this->set_right_son(nullptr);
}

string PDInstructions::translate() {
    return "";
}
