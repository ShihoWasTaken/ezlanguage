#ifndef VECTORCONTAINER_H
#define VECTORCONTAINER_H

#include <vector>
#include <iostream>
#include <initializer_list>

#include "Node.h"
#include "Variable.h"

/**
 * @class VectorContainer
 * @brief Class representing vector  
 * 
 * @author LAHYANI Zakaria
 */

template <typename T>
class VectorContainer : public Node
{
    public:

		/* * * * * * * * *
		* CONSTRUCTORS  *
		* * * * * * * * */

    	/**
		* Minimal constructor Takes the vector variable (its name)
		* 
		* @param : variable 
		*
		* @author LAHYANI Zakaria
		*/
        VectorContainer(Variable *);
   		
   		/**
		* Constructor Takes the vector variable and its size
		* 
		* @param : variable 
		* @param : size 
		*
		* @author LAHYANI Zakaria
		*/
        VectorContainer(Variable *, int);

    	/**
		* Constructor Takes the vector variable and its initial values
		* 
		* @param : variable 
		* @param : initial values 
		*
		* @author LAHYANI Zakaria
		*/
        VectorContainer(Variable *, std::initializer_list<T>);

        /**
		* Copy COnstructor 
		*  
		* @param : vector Container 
		* 
		* @author LAHYANI Zakaria
		*/
		VectorContainer(const VectorContainer<T>& );

		/**
		* Destructor
		* @author LAHYANI Zakaria
		*/
        virtual ~VectorContainer();


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
		* getter of the vector
		*
		* @author LAHYANI Zakaria
		*/
		std::vector<T> get_vector() const;

		/**
		* setter of variable
		*
		* @param v : the Variable of this array
		* @author LAHYANI Zakaria
		*/
		void set_variable(Variable *v);

		/**
		* setter of vector
		*
		* @author LAHYANI Zakaria
		*/
		void set_vector(std::vector<T>);


		/* * * * * * * *
		* Methods      *
		* * * * * * * **/

		/**
		* return the size of the vector
		*
		* @author LAHYANI Zakaria
		*/
		int size();

		/**
		* check whether the vector is empty or not
		* return true it is empty
		*
		* @author LAHYANI Zakaria
		*/
		bool is_empty();

		/**
		* remove all elements from the vector
		*
		* @author LAHYANI Zakaria
		*/
		void clear();

		/**
		* print the vector to console
		*
		* @author LAHYANI Zakaria
		*/
		void print();

		/**
		* fill the vector (which its size is known) with the value "value"
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
		* sort vector's elements
		*
		* @author LAHYANI Zakaria
		*/
		void sort();

		/**
		* sort vector's elements according to argument
		*
		* @author LAHYANI Zakaria
		*/
		void sort(T);

		/**
		* add element at the end of the vector
		*
		* @author LAHYANI Zakaria
		*/
		void put_first(T);

		/**
		* add element at the beginning of the vector
		*
		* @author LAHYANI Zakaria
		*/
		void put_last(T);

		/**
		* delete the last element in a vector
		* NB : effectively reducing the container size by one
		*
		* @author LAHYANI Zakaria
		*/
		void remove_last();

		/**
		* delete the first element in a vector
		* NB : effectively reducing the container size by one
		*
		* @author LAHYANI Zakaria
		*/
		void remove_first();

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
		* return the average of vector's values
		*
		* @author LAHYANI Zakaria
		*/
		double average();

		/**
		* return the average of vector's values according to argument
		*
		* @author LAHYANI Zakaria
		*/
		double average(T);

		/**
		* return the occurence of elements equals to value
		*
		* @author LAHYANI Zakaria
		*/
		int count(T);

		/**
		* return the occurence of elements equals to argument's value
		*
		* @author LAHYANI Zakaria
		*/
		int count(T, T);

		/**
		* remove a specific value
		*
		* @author LAHYANI Zakaria
		*/
		void remove(T);

		/**
		* find a specific element in a vector returning its position
		*
		* @author LAHYANI Zakaria
		*/
		int find(T);

		/**
		* find a specific element in a vector  according to argument, returning its position
		*
		* @author LAHYANI Zakaria
		*/
		int find(T, T);


		/**
		* store vector data to csv file
		*
		* @author LAHYANI Zakaria
		*/
		void store(std::string);

		/**
		* restore vectors data to csv file
		*
		* @author LAHYANI Zakaria
		*/
		void restore(std::string);

		/**
		* return the first element in vector
		*
		* @author LAHYANI Zakaria
		*/
		T first();

		/**
		* return the last element in vector
		*
		* @author LAHYANI Zakaria
		*/
		T last();

		/**
		* remove element at specific position
		*
		* @author LAHYANI Zakaria
		*/
		void remove_at(int);

		/**
		* put element at specific position
		*
		* @author LAHYANI Zakaria
		*/
		void put_at(int, T);


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
    	std::vector<T> data;
};

#endif // VECTORCONTAINER_H
