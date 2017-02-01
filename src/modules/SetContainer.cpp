#include <iostream>
#include <algorithm>
#include <initializer_list>

#include "SetContainer.h"

using namespace std;

/* * * * * * * * *
* CONSTRUCTORS   *
* * * * * * * * */

template <typename T>   
SetContainer<T>::SetContainer(Variable *v) : var(v), data()
{
    name= "Set Container Declaration";
}

template <typename T>   
SetContainer<T>::SetContainer(Variable *v, int s) : var(v)
{
	for(int i=0; i < s; ++i)
		data.insert(NULL);

    name= "Set Container Declaration";
}

template <typename T>   
SetContainer<T>::SetContainer(Variable *v, initializer_list<T> il) : var(v)
{
	data = il;
    name= "Set Container Declaration";
}

template <typename T>   
SetContainer<T>::SetContainer(const SetContainer<T>& s) : var(s.var), data(s.data)
{
    name= "Set Container Declaration";
}

template <typename T>   
SetContainer<T>::~SetContainer()
{
    //dtor
}


/* * * * * * * * * * * * * *
* ACCESSORS  AND MUTATORS *
* * * * * * * * * * * * * */

template <typename T>   
Variable * SetContainer<T>::get_variable() const
{
    return var;
}

template <typename T>   
set<T> SetContainer<T>::get_set() const
{
    return data;
}

template <typename T>   
void SetContainer<T>::set_variable(Variable *v) 
{
    var = v;
}

template <typename T>   
void SetContainer<T>::set_set(set<T> v) 
{
    data = v;
}



/* * * * * * * * * * * * * *
*        Methods           *
* * * * * * * * * * * * * */



template <typename T>   
int SetContainer<T>::size()
{
	return data.size();
}

template <typename T>   
bool SetContainer<T>::is_empty()
{
	return data.empty();
}

template <typename T>   
void SetContainer<T>::clear()
{
	data.clear();
}

template <typename T>   
void SetContainer<T>::print()
{
	for(auto const& value: data) 
    	cout << value << " " ;
}

template <typename T>   
void SetContainer<T>::insert(T value)
{
	data.insert(value);
}

template <typename T>   
T SetContainer<T>::max()
{
	return *prev(data.end());
}

template <typename T>   
T SetContainer<T>::max(T attr)
{
	// i'll look for it later
}

template <typename T>   
T SetContainer<T>::min()
{
	return *data.begin();
}

template <typename T>   
T SetContainer<T>::min(T attr)
{
	// i'll look for it later
}

template <typename T>   
int SetContainer<T>::sum()
{
	int sum = 0;
	for (int i : s1) {
	    sum += i;
	}
	return sum;
}

template <typename T>   
int SetContainer<T>::sum(T attr)
{
	// i'll look for it later
}

template <typename T>   
void SetContainer<T>::remove(T attr)
{
	data.erase(attr);
}
