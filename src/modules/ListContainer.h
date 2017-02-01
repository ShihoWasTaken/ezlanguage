#ifndef LISTCONTAINER_H
#define LISTCONTAINER_H

#include <iostream>
#include <initializer_list>
#include <list>

#include "Node.h"
#include "Variable.h"

/**
 * @class ListContainer
 * @brief Class representing a list data structure
 * 
 * @author LAHYANI Zakaria
 */

template <typename T>
class ListContainer : public Node
{
    public:

    	/* * * * * * * * *
		* CONSTRUCTORS  *
		* * * * * * * * */

    	/**
		* Minimal constructor Takes the list variable 
		*
		* @author LAHYANI Zakaria
		*/
        ListContainer(Variable *);

        /**
		* Constructor Takes the list variable and its size
		* 
		* @param : variable 
		* @param : size 
		*
		* @author LAHYANI Zakaria
		*/
        ListContainer(Variable *, int);

    	/**
		* Constructor Takes the list variable and its initial values
		* 
		* @param : variable 
		* @param : initial values 
		*
		* @author LAHYANI Zakaria
		*/
        ListContainer(Variable *, std::initializer_list<T>);

        /**
		* Copy COnstructor 
		*  
		* @param : list Container 
		* 
		* @author LAHYANI Zakaria
		*/
		ListContainer(const ListContainer<T>&);

		/**
		* Destructor
		* @author LAHYANI Zakaria
		*/
        virtual ~ListContainer();


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
		* getter of the list
		*
		* @author LAHYANI Zakaria
		*/
		std::list<T> get_list() const;

		/**
		* setter of Variable
		*
		* @param v : the Variable of this array
		* @author LAHYANI Zakaria
		*/
		void set_variable(Variable *v);

		/**
		* setter of list
		*
		* @author LAHYANI Zakaria
		*/
		void set_list(std::list<T>);



		/* * * * * * * *
		* Methods      *
		* * * * * * * **/

		/**
		* return the size of the list
		*
		* @author LAHYANI Zakaria
		*/
		int size();

		/**
		* check whether the list is empty or not
		* return true it is empty
		*
		* @author LAHYANI Zakaria
		*/
		bool is_empty();

		/**
		* remove all elements from the list
		*
		* @author LAHYANI Zakaria
		*/
		void clear();

		/**
		* print the list to console
		*
		* @author LAHYANI Zakaria
		*/
		void print();

		/**
		* fill the list (which its size is known) with the value "value"
		*
		* @author LAHYANI Zakaria
		*/
		void fill(T value);

		/**
		* generate elements
		*
		* @param  : min_value 
		* @param  : max_value 
		*
		* @author LAHYANI Zakaria
		*/
		void randomize(int , int);

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
		* sort list's elements
		*
		* @author LAHYANI Zakaria
		*/
		void sort();

		/**
		* sort list's elements according to argument
		*
		* @author LAHYANI Zakaria
		*/
		void sort(T);

		/**
		* return the sum of list's values
		*
		* @author LAHYANI Zakaria
		*/
		int sum();

		/**
		* return the sum of list's values according to argument
		*
		* @author LAHYANI Zakaria
		*/
		int sum(T);

		/**
		* return the occurence of elements equals to value
		*
		* @author LAHYANI Zakaria
		*/
		int count(T);

		
		/**
		* remove a specific value
		*
		* @author LAHYANI Zakaria
		*/
		void remove(T);
		
		/**
		* return the first element in list
		*
		* @author LAHYANI Zakaria
		*/
		T first();

		/**
		* return the last element in list
		*
		* @author LAHYANI Zakaria
		*/
		T last();

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
    	std::list<T> data;

};

#endif // LISTCONTAINER_H