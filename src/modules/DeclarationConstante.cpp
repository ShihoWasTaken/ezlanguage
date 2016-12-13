//
// author : Lahyani Zakaria
//

#include "DeclarationConstante.h"

using namespace std;


DeclarationConstante::DeclarationConstante(variable constante)
{
	const_from_variable = constante;
	next_const = new DeclarationConstante;
}

DeclarationConstante::DeclarationConstante(variable constante, DeclarationConstante* _next){
	const_from_variable = constante;
	next_const = _next;
}

void DeclarationConstante::setConstante(variable& constante){
	const_from_variable = constante;
}

void DeclarationConstante::setNext(DeclarationConstante* _next){
	next_const = _next;
}

variable DeclarationConstante::getConstante(){
	return const_from_variable;
}

DeclarationConstante* DeclarationConstante::getNext(){
	return next_const;
}

string DeclarationConstante::translate() {
    string res= "";
    /*
		Need Type & id from var to translate to c++
		just found the type .
    */
    
    //====== TODO : get the identifier of current variable ======\\
   // 															  \\
  //  string identifier  = const_from_variable.get_identifier();   \\
 // 															    \\
//===================================================================\\

   	res = "const " + const_from_variable.get_type() + " " ; // + identifier + ";"
	
    return res;
}