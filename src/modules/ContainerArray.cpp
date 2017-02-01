#include <iostream>
#include <typeinfo>
#include <initializer_list>
#include <cstring>

#include "ContainerArray.h"
using namespace std;


/* * * * * * * * *
* CONSTRUCTORS  *
* * * * * * * * */

template <typename T>   
ContainerArray<T>::ContainerArray(Variable* v, int lb, int ub) : var(v)
{
	array_size = (lb + ub)/2;
	table = new T[array_size];
    name= "Array Container Declaration";
}

template <typename T>   
ContainerArray<T>::ContainerArray(Variable* v, int s) : var(v), array_size(s)
{
	table = new T[array_size];
    name= "Array Container Declaration";
}

template <typename T>   
ContainerArray<T>::ContainerArray(Variable* v, int s, initializer_list<T> il) : var(v), array_size(s)
{
	table = new T[array_size] {il};
    name= "Array Container Declaration";
}

template <typename T>   
ContainerArray<T>::ContainerArray(const ContainerArray<T>& copy) : var(copy.var), array_size(copy.array_size)
{
	table = new T[array_size];
    name= "Array Container Declaration";
}

template <typename T>   
ContainerArray<T>::~ContainerArray()
{
    delete[] table; 
}


/* * * * * * * * * * * * * *
* ACCESSORS  AND MUTATORS *
* * * * * * * * * * * * * */

template <typename T>   
Variable * ContainerArray<T>::get_variable() const
{
    return var;
}

template <typename T>   
T* ContainerArray<T>::get_table() const
{
    return table;
}


template <typename T>   
int ContainerArray<T>::get_array_size() const
{
    return array_size;
}


template <typename T>   
void ContainerArray<T>::set_variable(Variable *v)
{
    var = v;
}

template <typename T>   
void ContainerArray<T>::set_table(T* s)
{
    table = s;
}


template <typename T>   
void ContainerArray<T>::set_array_size(int v)
{
    array_size = v;
}


/* * * * * * * * * * * * * *
*        Methods           *
* * * * * * * * * * * * * */


template <typename T>   
int ContainerArray<T>::size()
{
	return array_size;
}

template <typename T>   
bool ContainerArray<T>::is_empty()
{
	int has_element = 0;
	for (int i = 0; i < array_size; ++i)
	{
		if (table[i] != NULL )
		{
			has_element++;
		}
	}
	if (has_element != 0)
	{
		return false;
	}
	return true;
}

template <typename T>   
void ContainerArray<T>::fill(T attr)
{
	for(int i=0; i < array_size; ++i){
		table[i] = attr;
	}
}


template <typename T>   
void ContainerArray<T>::clear()
{
	memset(table, 0, sizeof(table));
}

template <typename T>   
void ContainerArray<T>::print()
{

	cout << " Array " << var->get_id() << " Contain " << array_size << endl; 
	for(int i=0; i < array_size; ++i){
		cout << table[i] << " ";
	}
}


template <typename T>   
void ContainerArray<T>::randomize(int min_val, int max_val)
{
	if(typeid(T) == typeid(string)){

		static const char alphanum[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
		string str;

		for(int i=0; i < array_size; ++i){
			for(int i = 0; i < rand() % (max_val - min_val + 1); ++i)
		    {
		        str += alphanum[rand() % 40];
		    }
			table[i] = str;
		}
	}else{
		for(int i=0; i < array_size; ++i){
			table[i] = rand() % (max_val - min_val + 1);
		}

	}
}



template <typename T>   
T ContainerArray<T>::max()
{
	T high = 0;
	for(int i=0; i < array_size; ++i){
		if(table[i] > high)
			high = table[i];
	}

	return high;
}


template <typename T>   
T ContainerArray<T>::max(T attribute)
{
	// think i have to use policy 
	// i'll fix this later
}


template <typename T>   
T ContainerArray<T>::min()
{
	T l = table[0];
	for(int i=1; i < array_size; ++i){
		if(table[i] < l)
			l = table[i];
	}

	return l;
}


template <typename T>   
T ContainerArray<T>::min(T attribute)
{
	// think i have to use policy 
	// i'll fix this later

}


template <typename T>   
void ContainerArray<T>::sort()
{
	T temp;
	for (int i = 0; i < array_size; ++i)
	{
		for (int j = i; j < array_size; ++j)
		{
			if (table[i]>table[j])
			{
				temp = table[i];
				table[i] = table[j];
				table[j] = temp;
			}
		}
	}
}


template <typename T>   
void ContainerArray<T>::sort(T attribute)
{
	// think i have to use policy 
	// i'll fix this later
}


template <typename T>   
T ContainerArray<T>::sum()
{
	T result = table[0];
	for(int i=1; i < array_size; ++i)
		result += table[i];

	return result;
}


template <typename T>   
T ContainerArray<T>::sum(T attribute)
{
	// think i have to use policy 
	// i'll fix this later
}


template <typename T>   
int ContainerArray<T>::count(T value)
{
	int occ = 0;
	for(int i=0; i < array_size; ++i)
	{
		if (table[i] == value)
		{
			occ++;
		}
	}

	return occ;
}


template <typename T>   
void ContainerArray<T>::remove(T value)
{
	for(int i=0; i < array_size; ++i)
	{
		if (table[i] == value)
		{
			table[i] = 0;
		}
	}
}


template <typename T>   
string ContainerArray<T>::range(T value)
{
	return "borne sup : " + max() + " -- borne inf : " + min();
}


template <typename T>   
string ContainerArray<T>::translate() const{
	
	return "";
}
