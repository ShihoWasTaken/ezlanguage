//
// author : Lahyani Zakaria
//

#ifndef DECLARATION_CONSTANTE_H
#define DECLARATION_CONSTANTE_H


#include "variable.h"

/**
* TODO -> Johan Defaye  : Modify Variable class to check whether a variable is constante or not !
* 							Or do i have to create a constante class ???
**/

/**
 * This class is used to get "constante variables" & to set its equivalent in c++ code 
 *
 * NB : Les noeuds désignants les regroupements de déclaration doivent être gérer par HAMZA ROUINEB
 *
 * @author Lahyani Zakaria
 **/
class DeclarationConstante : public Node{
protected:
	// variable instanciated by "variable" class  (that have been declared as constante)
	variable const_from_variable;
	// pointer to the next declaration of a const variable
	DeclarationConstante* next_const; 

public:
	DeclarationConstante(variable constante);
	DeclarationConstante(variable constante, DeclarationConstante* _next);

	/**
	* Getters & Setters
	**/
	void setConstante(variable& constante);
	void setNext(DeclarationConstante* _next);

	// this is what HAMZA ROUINEB Has to call to set the reunification ... 
	DeclarationConstante* getNext();
	variable getConstante();

    string translate();
};
#endif