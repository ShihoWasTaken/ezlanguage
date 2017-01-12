/**
 * @author Kamal Badri
 */

#include "PDVariables.h"

PDVariables::PDVariables() : Holder("", Holder::TYPES::VAR) {}

PDVariables::PDVariables(const string &name) : Holder(name, Holder::TYPES::VAR) {}

PDVariables::PDVariables(const string &name, PDFunctions *right_son) : Holder(name, Holder::TYPES::VAR) {
    this->set_right_son(right_son);
}

string PDVariables::translate() {
    return "";
}
