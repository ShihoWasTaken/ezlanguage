//
// author : Lahyani Zakaria
//

#ifndef DECLARATION_Variable_H
#define DECLARATION_Variable_H

#include <string>
#include "Variable.h"
#include "Node.h"

/**
 * This class is used to get "Variables" & to set its equivalent in c++ code 
 *
 * NB : Les noeuds désignants les regroupements de déclaration doivent être gérer par HAMZA ROUINEB
 *
 * @author Lahyani Zakaria
 **/
class DeclarationVariable : public Node {

protected:
	// Variable instanciated by "Variable" class 
	Variable var_from_tab_symbol; 
	// pointer to the next declaration of a Variable
	DeclarationVariable* next_var; 

public:
	DeclarationVariable();
	DeclarationVariable(Variable var);
	DeclarationVariable(Variable var, DeclarationVariable* _next);

	/**
	* Getters & Setters
	**/
	void setVariable(Variable& var);
	void setNext(DeclarationVariable* _next);

	// this is what HAMZA ROUINEB Has to call to set the reunification ... 
	DeclarationVariable* getNext();
	Variable getVariable();

    string translate();

};
#endif