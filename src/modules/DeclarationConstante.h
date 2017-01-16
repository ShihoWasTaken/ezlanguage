//
// author : Lahyani Zakaria
//

#ifndef DECLARATIONCONSTANTE_H
#define DECLARATIONCONSTANTE_H


#include "Variable.h"
#include "Node.h"

/**
* TODO -> Johan Defaye  : Modify Variable class to check whether a Variable is constante or not !
* 							Or do i have to create a constante class ???
**/

/**
 * This class is used to get "constante Variables" & to set its equivalent in c++ code 
 *
 * NB : Les noeuds désignants les regroupements de déclaration doivent être gérer par HAMZA ROUINEB
 *
 * @author Lahyani Zakaria
 **/
class DeclarationConstante : public Node{
protected:
	// Variable instanciated by "Variable" class  (that have been declared as constante)
	Variable const_from_Variable;
	// pointer to the next declaration of a const Variable
	DeclarationConstante* next_const; 

public:
	DeclarationConstante();
	DeclarationConstante(Variable constante);
	DeclarationConstante(Variable constante, DeclarationConstante* _next);

	/**
	* Getters & Setters
	**/
	void setConstante(Variable& constante);
	void setNext(DeclarationConstante* _next);

	// this is what HAMZA ROUINEB Has to call to set the reunification ... 
	DeclarationConstante* getNext();
	Variable getConstante();

    std::string translate();
};
#endif