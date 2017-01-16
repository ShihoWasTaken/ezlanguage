//
// author : Lahyani Zakaria
//

#include "DeclarationConstante.h"

using namespace std;


DeclarationConstante::DeclarationConstante()
{
	next_const = NULL;
}

DeclarationConstante::DeclarationConstante(Variable constante)
{
	const_from_Variable = constante;
	next_const = new DeclarationConstante;
}

DeclarationConstante::DeclarationConstante(Variable constante, DeclarationConstante* _next){
	const_from_Variable = constante;
	next_const = _next;
}

void DeclarationConstante::setConstante(Variable& constante){
	const_from_Variable = constante;
}

void DeclarationConstante::setNext(DeclarationConstante* _next){
	next_const = _next;
}

Variable DeclarationConstante::getConstante(){
	return const_from_Variable;
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
    
/* 
    TODO : get the identifier of current Variable 

    string identifier  = const_from_Variable.get_identifier(); 
*/
   	res = "const " + const_from_Variable.get_type() + " " ; // + identifier + ";"
	
    return res;
}