//
// Created by ROUINEB Hamza
//

#include "DTypes.h"

DTypes::DTypes() : Holder("", Holder::TYPES::TYPE) {}


DTypes::DTypes(const string &name) : Holder(name, Holder::TYPES::TYPE) {}

DTypes::DTypes(const string &name, PDVariables *son) : Holder(name, Holder::TYPES::TYPE) {
    this->set_right_son(son);
}

string DTypes::translate() {
    // still unclear what to do exactly here !
    return "";
}
