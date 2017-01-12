//
// Created by ROUINEB Hamza
//

#ifndef PROJECT_DTYPES_H
#define PROJECT_DTYPES_H

#include "PDVariables.h"

class DTypes : public Holder {

public:
    DTypes();

    DTypes(const string &name);
    DTypes(const string &name, PDVariables *son);

    string translate();

};


#endif //PROJECT_DTYPES_H
