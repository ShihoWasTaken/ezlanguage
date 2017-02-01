#ifndef SETCONTAINER_H
#define SETCONTAINER_H

#include <iostream>
#include <initializer_list>
#include <set>

#include "Node.h"
#include "Variable.h"

/**
 * @class SetContainer
 * @brief Class representing a set data structure
 * 
 * @author LAHYANI Zakaria
 */

template <typename T>
class SetContainer : public Node
{
    public:

    	/* * * * * * * * *
		* CONSTRUCTORS  *
		* * * * * * * * */

    	/**
		* Minimal constructor Takes the set variable (its name)
		* 
		* @param : variable 
		*
		* @author LAHYANI Zakaria
		*/
        SetContainer(Variable *);

        /**
		* Constructor Takes the set variable and its size
		* 
		* @param : variable 
		* @param : size 
		*
		* @author LAHYANI Zakaria
		*/
        SetContainer(Variable *, int);

    	/**
		* Constructor Takes the set variable and its initial values
		* 
		* @param : variable 
		* @param : initial values 
		*
		* @author LAHYANI Zakaria
		*/
        SetContainer(Variable *, std::initializer_list<T>);

        /**
		* Copy COnstructor 
		*  
		* @param : set Container 
		* 
		* @author LAHYANI Zakaria
		*/
		SetContainer(const SetContainer<T>&);

		/**
		* Destructor
		* @author LAHYANI Zakaria
		*/
        virtual ~SetContainer();


        /* * * * * * * * * * * * * *
		* ACCESSORS  AND MUTATORS *
		* * * * * * * * * * * * * */

        /**
		* getter of Variable
		*
		* @author LAHYANI Zakaria
		*/
		Variable * get_variable() const;

		/**
		* getter of the set
		*
		* @author LAHYANI Zakaria
		*/
		std::set<T> get_set() const;

		/**
		* setter of Variable
		*
		* @param v : the Variable of this array
		* @author LAHYANI Zakaria
		*/
		void set_variable(Variable *v);

		/**
		* setter of set
		*
		* @author LAHYANI Zakaria
		*/
		void set_set(std::set<T>);



		/* * * * * * * *
		* Methods      *
		* * * * * * * **/


		/**
		* return the size of the set
		*
		* @author LAHYANI Zakaria
		*/
		int size();

		/**
		* check whether the set is empty or not
		* return true it is empty
		*
		* @author LAHYANI Zakaria
		*/
		bool is_empty();

		/**
		* remove all elements from the set
		*
		* @author LAHYANI Zakaria
		*/
		void clear();

		/**
		* print the set to console
		*
		* @author LAHYANI Zakaria
		*/
		void print();


		/**
		* insert element into list
		*
		* @author LAHYANI Zakaria
		*/
		void insert(T);

		/**
		* return the biggest element 
		*
		* @author LAHYANI Zakaria
		*/
		T max();

		/**
		* return the biggest element according to attribute
		*
		* @author LAHYANI Zakaria
		*/
		T max(T);

		/**
		* return the smallest element 
		*
		* @author LAHYANI Zakaria
		*/
		T min();

		/**
		* return the smallest element according to attribute
		*
		* @author LAHYANI Zakaria
		*/
		T min(T);

		/**
		* return the sum of vector's values
		*
		* @author LAHYANI Zakaria
		*/
		int sum();

		/**
		* return the sum of vector's values according to argument
		*
		* @author LAHYANI Zakaria
		*/
		int sum(T);

		/**
		* remove a specific value
		*
		* @author LAHYANI Zakaria
		*/
		void remove(T);


		
		/* * * * * * * *
		* Translation  *
		* * * * * * * **/
		
		/**
		 * @brief Translation of the instruction into it's C++ counterpart
		 * @return a string containing the C++ code of the declaration
		 * 
		 * The instance will be translated with it's C++ equivalent using its informations
		 * The translation corresponds to its specifications, specificities and values
		 */
		std::string translate() const;



    protected:
    private:
    	Variable *var;
    	std::set<T> data;
};

#endif // SETCONTAINER_H