//
// author : Lahyani Zakaria
//

#include "DeclarationVariable.h"

using namespace std;

DeclarationVariable::DeclarationVariable(variable var)
{
	var_from_tab_symbol = var;
	next_var = new DeclarationVariable;
}

DeclarationVariable::DeclarationVariable(variable var, DeclarationVariable* _next){
	var_from_tab_symbol = var;
	next_var = _next;
}

void DeclarationVariable::setVariable(variable& var){
	var_from_tab_symbol = var;
}

void DeclarationVariable::setNext(DeclarationVariable* _next){
	next_var = _next;
}

variable DeclarationVariable::getVariable(){
	return var_from_tab_symbol;
}

DeclarationVariable* DeclarationVariable::getNext(){
	return next_var;
}

string DeclarationVariable::translate() {
    string res= "";
    /*
		Need Type & id from var to translate to c++
		just found the type .
    */
    
    //====== TODO : get the identifier of current variable ======\\
   // 															  \\
  //  string identifier  = var_from_tab_symbol.get_identifier();   \\
 // 															    \\
//===================================================================\\

   	res = var_from_tab_symbol.get_type() + " " ; // + identifier + ";"
	
    return res;
}