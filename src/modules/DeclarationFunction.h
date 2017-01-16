//
// author : lahyani zakaria
//

#ifndef DECLARATIONFUNCTION_H
#define DECLARATIONFUNCTION_H

#include <string>
#include <vector>
#include "Function.h"
#include "Node.h"


/**
 * This class is used to get "Functions | procedures" & to set its equivalent in c++ code 
 * it combines all the Functions ...
 *
 * NB : Les noeuds désignants les regroupements de déclaration doivent être gérer par HAMZA ROUINEB
 *
 * @author Lahyani Zakaria
 **/
class DeclarationFunction : public Node {
protected:
	Function func_from_symbol; // the actual Function 
	DeclarationFunction* next; // the next declaration of a Function

public:
	DeclarationFunction();
	DeclarationFunction(Function func); // constructor use to set a Function 
	DeclarationFunction(Function func, DeclarationFunction* _next); // constructor use to set a Function & it's next one ...

	/**
	* Getters & Setters
	**/
	void setFunction(Function& func);
	void setNext(DeclarationFunction* _next);

	DeclarationFunction* getNext();
	Function getFunction();

	/**
	* translate Function : from the Node class (mother class)
	**/
    std::string translate();

};
#endif