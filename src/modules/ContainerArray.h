#ifndef CONTAINERARRAY_H
#define CONTAINERARRAY_H

#include <iostream>
#include <initializer_list>

#include "Node.h"
#include "Variable.h"


/**
 * @class ContainerArray
 * @brief set an array container  
 * 
 * @author LAHYANI Zakaria
 */
template <typename T>
class ContainerArray : public Node
{
    public:
		/* * * * * * * * *
		* CONSTRUCTORS  *
		* * * * * * * * */
	    
	    /**
		* Constructor Takes the array variable, its lower bound and its upper bound 
		* 
		* @param : variable 
		* @param : lower bound 
		* @param : upper bound 
		*
		* @author LAHYANI Zakaria
		*/
		ContainerArray(Variable *, int, int);
        
		/**
		* Constructor Takes the array variable and its size 
		*  
		* @param : variable 
		* @param : size 
		*
		* @author LAHYANI Zakaria
		*/
        ContainerArray(Variable *, int);
        
        /**
		* Constructor Takes the array variable, its size and its content 
		*  
		* @param : variable 
		* @param : size 
		* @param : array's values  
		*
		* @author LAHYANI Zakaria
		*/
        ContainerArray(Variable *, int, std::initializer_list<T>);

		/**
		* Copy COnstructor 
		*  
		* @param : Container Array
		* 
		* @author LAHYANI Zakaria
		*/
		ContainerArray(const ContainerArray<T>& );


        /**
		* Destructor
		* @author LAHYANI Zakaria
		*/
        virtual ~ContainerArray();


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
		* getter the table
		*
		* @author LAHYANI Zakaria
		*/
		T* get_table() const;

		/**
		* getter of size
		*
		* @author LAHYANI Zakaria
		*/
		int get_array_size() const;

	
		/**
		* setter of variable
		*
		* @param v : the Variable of this array
		* @author LAHYANI Zakaria
		*/
		void set_variable(Variable *v);

		/**
		* setter of array
		* @param : array
		*
		* @author LAHYANI Zakaria
		*/
		void set_table(T*);
	

		/**
		* setter of size
		*
		* @param s : value of the size 
		*
		* @author LAHYANI Zakaria
		*/
		void set_array_size(int s);



		/* * * * * * * *
		* Methods      *
		* * * * * * * **/

		/**
		* return the size of the array
		*
		* @author LAHYANI Zakaria
		*/
		int size();

		/**
		* return true if the array is empty
		*
		* @author LAHYANI Zakaria
		*/
		bool is_empty();

		/**
		* remove all elements from the array
		*
		* @author LAHYANI Zakaria
		*/
		void clear();

		/**
		* print the array to console
		*
		* @author LAHYANI Zakaria
		*/
		void print();


		/**
		* add element to array
		*
		* @param value : value to add 
		* @author LAHYANI Zakaria
		*/
		void fill(T );

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
		T max(T attribute);

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
		T min(T attribute);

		/**
		* sort array's element
		*
		* @author LAHYANI Zakaria
		*/
		void sort();

		/**
		* sort array's element according to attribute
		*
		* @author LAHYANI Zakaria
		*/
		void sort(T attribute);

		/**
		* return the sum of array's element
		*
		* @author LAHYANI Zakaria
		*/
		T sum();

		/**
		* return the sum of array's element according to attribute
		*
		* @author LAHYANI Zakaria
		*/
		T sum(T attribute);

		/**
		* return the num of occurence in the array 
		*
		* @param value : value to look for
		* 
		* @author LAHYANI Zakaria
		*/
		int count(T value);

		/**
		* remove all elements equal to value
		*
		* @param value : value to look for
		* 
		* @author LAHYANI Zakaria
		*/
		void remove(T value);

		/**
		* return the smallest value & the greatest value
		*
		* 
		* @author LAHYANI Zakaria
		*/
		std::string range(T value);



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
    	int array_size;

    	T* table;
};

#endif // CONTAINERARRAY_H
