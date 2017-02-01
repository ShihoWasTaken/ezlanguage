#include <iostream>
#include <initializer_list>
#include <list>
#include <algorithm>
#include <typeinfo>

#include "ListContainer.h"
using namespace std;

template <typename T>   
ListContainer<T>::ListContainer(Variable *v) : var(v), data(0)
{
    name= "List Container Declaration";
}

template <typename T>   
ListContainer<T>::ListContainer(Variable *v, int s) : var(v), data(s)
{
    name= "List Container Declaration";
}

template <typename T>   
ListContainer<T>::ListContainer(Variable *v, initializer_list<T> il) : var(v)
{
    data = il;
    name= "List Container Declaration";
}


template <typename T>   
ListContainer<T>::ListContainer(const ListContainer<T>& vc) : var(vc.var), data(vc.data)
{
    name= "List Container Declaration";
}

template <typename T>   
ListContainer<T>::~ListContainer()
{
	//dtor
}


/* * * * * * * * * * * * * *
*        Methods           *
* * * * * * * * * * * * * */



template <typename T>   
int ListContainer<T>::size()
{
	return data.size();
}

template <typename T>   
bool ListContainer<T>::is_empty()
{
	return data.empty();
}

template <typename T>   
void ListContainer<T>::clear()
{
	data.clear();
}

template <typename T>   
void ListContainer<T>::print()
{
	for (list<int>::const_iterator iterator = data.begin(), end = data.end(); iterator != end; ++iterator) {
	    cout << *iterator << " ";
	}	
}

template <typename T>   
void ListContainer<T>::fill(T value)
{
	if(data.size() != 0)
		fill(data.begin(), data.end(), value);
	else
		cout << "The list should have a specific size" << endl;

}

string randomString(int& min_val, int& max_val)
{
	static const char alphanum[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string str;
	for(int i = 0; i < rand() % (max_val - min_val + 1); ++i)
	{
	    str += alphanum[rand() % 40];
	}

	return str;
}

int randomInteger(int& min_val, int& max_val)
{
	return rand() % (max_val - min_val + 1);
}

template <typename T>   
void ListContainer<T>::randomize(int min_val, int max_val)
{
	if(typeid(T) == typeid(string)){

		static const char alphanum[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
		string str;

		generate (data.begin(), data.end(), randomString(min_val, max_val));


	}else{
		// generate only numeric values
		// i'll look for it later so it can generate objects ...
		generate (data.begin(), data.end(), randomInteger(min_val, max_val));
	}
}

template <typename T>   
T ListContainer<T>::max()
{
	return *max_element(data.begin(), data.end());
}

template <typename T>   
T ListContainer<T>::max(T attr)
{
	// i'll look for it later
}

template <typename T>   
T ListContainer<T>::min()
{
	return *min_element(data.begin(), data.end());
}

template <typename T>   
T ListContainer<T>::min(T attr)
{
	// i'll look for it later
}

template <typename T>   
void ListContainer<T>::sort()
{
	data.sort ();
}

template <typename T>   
void ListContainer<T>::sort(T value)
{
	// i'll look for it later
}

template <typename T>   
int ListContainer<T>::sum()
{
	return accumulate(data.begin(), data.end(), 0);
}

template <typename T>   
int ListContainer<T>::sum(T attr)
{
	// i'll look for it later
}

template <typename T>   
int ListContainer<T>::count(T value)
{
	return count (data.begin(), data.end(), value);
}

template <typename T>   
void ListContainer<T>::remove(T attr)
{
	data.remove(attr);
}

template <typename T>   
T ListContainer<T>::first()
{
	return data.front();
}

template <typename T>   
T ListContainer<T>::last()
{
	return data.back();
}

