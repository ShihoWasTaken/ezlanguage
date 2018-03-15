#include "Procedure.h"

using namespace std;

Procedure::Procedure(const string & name, Node * parameters, Node * left):
	Method(name, parameters, left)
{}

std::string Procedure::preTranslate() const {
    std::string res = "";
	
	// TODO correct main function check (main name is the program name, not mandatory "main")
	res+= "void " + getProcedureName() + "(";

	//translation of the parameters
	if (mParameters != nullptr) res+= mParameters->translate();

	res += ") {\n";
    return res;
}

string Procedure::postTranslate() const
{
    return "}\n";
}
