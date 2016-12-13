//
// author : lahyani zakaria
//

#ifndef DECLARATION_FUNCTION_H
#define DECLARATION_FUNCTION_H

#include <string>
#include <vector>
#include "function.h"


/**
 * This class is used to get "functions | procedures" & to set its equivalent in c++ code 
 * it combines all the functions ...
 *
 * NB : Les noeuds désignants les regroupements de déclaration doivent être gérer par HAMZA ROUINEB
 *
 * @author Lahyani Zakaria
 **/
class DeclarationFunction : public Node{
protected:
	function func_from_symbol; // the actual function 
	DeclarationFunction* next; // the next declaration of a function

public:
	DeclarationFunction(function func); // constructor use to set a function 
	DeclarationFunction(function func, DeclarationFunction* _next); // constructor use to set a function & it's next one ...

	/**
	* Getters & Setters
	**/
	void setFunction(function& func);
	void setNext(DeclarationFunction* _next);

	DeclarationFunction* getNext();
	function getFunction();

	/**
	* translate function : from the Node class (mother class)
	**/
    std::string translate();

};
#endif