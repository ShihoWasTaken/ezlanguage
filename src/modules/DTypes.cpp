//
// Created by ROUINEB Hamza
//

using namespace std;

#include "DTypes.h"

DTypes::DTypes() : Holder("", Holder::TYPES::TYPE) {}


DTypes::DTypes(const string &name) : Holder(name, Holder::TYPES::TYPE) {}

string DTypes::translate() const {
    // still unclear what to do exactly here !
    return "";
}