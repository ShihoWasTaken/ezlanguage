#include <iostream>
#include <vector>
#include <algorithm>
#include <initializer_list>
#include <iterator>  
#include <typeinfo>
#include <numeric>
#include <fstream>

#include "VectorContainer.h"
using namespace std;


/* * * * * * * * *
* CONSTRUCTORS   *
* * * * * * * * */

template <typename T>   
VectorContainer<T>::VectorContainer(Variable *v) : var(v), data(0)
{
    name= "Vector Container Declaration";
}

template <typename T>   
VectorContainer<T>::VectorContainer(Variable *v, int s) : var(v), data(s)
{
    name= "Vector Container Declaration";
}

template <typename T>   
VectorContainer<T>::VectorContainer(Variable *v, initializer_list<T> il) : var(v)
{
    data = il;
    name= "Vector Container Declaration";
}


template <typename T>   
VectorContainer<T>::VectorContainer(const VectorContainer<T>& vc) : var(vc.var), data(vc.data)
{
    name= "Vector Container Declaration";
}

template <typename T>   
VectorContainer<T>::~VectorContainer()
{
    //dtor
}

/* * * * * * * * * * * * * *
* ACCESSORS  AND MUTATORS *
* * * * * * * * * * * * * */

template <typename T>   
Variable * VectorContainer<T>::get_variable() const
{
    return var;
}

template <typename T>   
vector<T> VectorContainer<T>::get_vector() const
{
    return data;
}

template <typename T>   
void VectorContainer<T>::set_variable(Variable *v) 
{
    var = v;
}

template <typename T>   
void VectorContainer<T>::set_vector(vector<T> v) 
{
    data = v;
}


/* * * * * * * * * * * * * *
*        Methods           *
* * * * * * * * * * * * * */


template <typename T>   
int VectorContainer<T>::size()
{
	return data.size();
}

template <typename T>   
bool VectorContainer<T>::is_empty()
{
	return data.empty();
}

template <typename T>   
void VectorContainer<T>::clear()
{
	data.clear();
}

template <typename T>   
void VectorContainer<T>::print()
{
	for(auto const& value: data) 
    	cout << value << " " ;
}

template <typename T>   
void VectorContainer<T>::fill(T value)
{
	if(data.size() != 0)
		fill(data.begin(), data.end(), value);
	else
		cout << "The vector should have a specific size" << endl;

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
void VectorContainer<T>::randomize(int min_val, int max_val)
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
T VectorContainer<T>::max()
{
	return *max_element(data.begin(), data.end());
}

template <typename T>   
T VectorContainer<T>::max(T attr)
{
	// i'll look for it later
}

template <typename T>   
T VectorContainer<T>::min()
{
	return *min_element(data.begin(), data.end());
}

template <typename T>   
T VectorContainer<T>::min(T attr)
{
	// i'll look for it later
	return attr;
}

template <typename T>   
void VectorContainer<T>::sort()
{
	sort (data.begin(), data.end());
}

template <typename T>   
void VectorContainer<T>::sort(T value)
{
	// i'll look for it later
}

template <typename T>   
void VectorContainer<T>::put_first(T value)
{
	data.push_back(value);
}

template <typename T>   
void VectorContainer<T>::put_last(T value)
{
	data.insert(data.begin(),value);
}

template <typename T>   
void VectorContainer<T>::remove_last()
{
	data.pop_back();
}

template <typename T>   
void VectorContainer<T>::remove_first()
{
	data.erase(data.begin());
}


template <typename T>   
int VectorContainer<T>::sum()
{
	return accumulate(data.begin(), data.end(), 0);
}

template <typename T>   
int VectorContainer<T>::sum(T attr)
{
	// i'll look for it later
	return 0;
}


template <typename T>   
double VectorContainer<T>::average()
{
	return accumulate(data.begin(), data.end(), 0) / data.size();
}

template <typename T>   
double VectorContainer<T>::average(T attr)
{
	// i'll look for it later
	return 0;
}

template <typename T>   
int VectorContainer<T>::count(T attr)
{
	return count (data.begin(), data.end(), attr);
}

template <typename T>   
int VectorContainer<T>::count(T attr, T value)
{
	// i'll look for it later
	return 0;
}

template <typename T>   
void VectorContainer<T>::remove(T attr)
{
	auto position = find(data.begin(), data.end(), attr);
	
	if (position != data.end())
   		data.erase(position);
}


template <typename T>   
int VectorContainer<T>::find(T attr)
{
	auto position = find(data.begin(), data.end(), attr);
	return distance(data.begin(), position);
}

template <typename T>   
int VectorContainer<T>::find(T argument, T value)
{
	// i'll look for it later
	return 0;
}

template <typename T>   
void VectorContainer<T>::store(string filename)
{
	ofstream& myfile(filename);

	if (myfile.is_open())
	{
	    myfile << "Data.\n";

	    for(auto const& value: data) 
    		myfile << value << endl;

	    myfile.close();
	}
	else cout << "Unable to open file";
}

template <typename T>   
void VectorContainer<T>::restore(string filename)
{
	ofstream& myfile;
	myfile.open(filename, ofstream::out | ofstream::trunc);
	myfile.close();
	store(filename);
}

template <typename T>   
T VectorContainer<T>::first()
{
	return data.front();
}

template <typename T>   
T VectorContainer<T>::last()
{
	return data.back();
}

template <typename T>   
void VectorContainer<T>::remove_at(int pos)
{
	data.erase(data.begin() + pos);
}

template <typename T>   
void VectorContainer<T>::put_at(int pos, T attr)
{
	data.insert(data.begin() + pos, attr);
}


template <typename T>   
string VectorContainer<T>::translate() const{
	
	return "";
}
