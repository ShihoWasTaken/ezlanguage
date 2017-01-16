//
// author : Lahyani Zakaria
//

#include "DeclarationFunction.h"

using namespace std;

DeclarationFunction::DeclarationFunction()
{
    next = NULL;
}


DeclarationFunction::DeclarationFunction(Function func)
{
	func_from_symbol = func;
	next = new DeclarationFunction;
}

DeclarationFunction::DeclarationFunction(Function func, DeclarationFunction* _next){
	func_from_symbol = func;
	next = next;
}

void DeclarationFunction::setFunction(Function& func){
	func_from_symbol = func;
}

void DeclarationFunction::setNext(DeclarationFunction* _next){
	next = _next;
}

DeclarationFunction* DeclarationFunction::getNext(){
	return next;
}

Function DeclarationFunction::getFunction(){
	return func_from_symbol;
}


string DeclarationFunction::translate() {
    string res= "";
    
    string return_type = func_from_symbol.get_returnType();

/* 
    TODO : get the identifier from Function class 

    string identifier  = func_from_symbol.get_identifier(); 
*/
  
    vector<string> params = func_from_symbol.get_param();

    string str = "";
    for (auto it = params.begin(); it != params.end(); ++it)
    {
    	str.append(*it);
    	if (std::next(it) != params.end())
    	{
    		str.append(",");
    	}
    }

	res = return_type + "(" + str + ");"  ;
    
    return res;
}