//
// author : Lahyani Zakaria
//

#ifndef DECLARATION_VARIABLE_H
#define DECLARATION_VARIABLE_H

#include <string>

#include "Node.h"
#include "variable.h"

/**
 * This class is used to get "variables" & to set its equivalent in c++ code 
 *
 * NB : Les noeuds désignants les regroupements de déclaration doivent être gérer par HAMZA ROUINEB
 *
 * @author Lahyani Zakaria
 **/
class DeclarationVariable : public Node {
protected:
	// variable instanciated by "variable" class 
	variable var_from_tab_symbol;
	// pointer to the next declaration of a variable
	DeclarationVariable* next_var;

public:
	DeclarationVariable(variable var);
	DeclarationVariable(variable var, DeclarationVariable* _next);

	/**
	* Getters & Setters
	**/
	void setVariable(variable& var);
	void setNext(DeclarationVariable* _next);

	// this is what HAMZA ROUINEB Has to call to set the reunification ... 
	DeclarationVariable* getNext();
	variable getVariable();

	std::string translate();

};
#endif
