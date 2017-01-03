#include "scopeHashTable.h"

using namespace std;

scopeHashTable::scopeHashTable(): hashTable< variable >(), _scopeStack(), _currentScope(0)
{
  list<list<variable>::iterator> l;
  _scopeStack.push(l);
}



scopeHashTable::scopeHashTable(unsigned int size): hashTable< variable >(size), _scopeStack(), _currentScope(0)
{
  list<list<variable>::iterator> l;
  _scopeStack.push(l);
}



scopeHashTable::scopeHashTable(const scopeHashTable& table): hashTable< variable >(table), _scopeStack(table.get_scopeStack()), _currentScope(table.get_currentScope())
{}



void scopeHashTable::incScope()
{
  _currentScope += 1;
  list<list<variable>::iterator> l;
  _scopeStack.push(l);
}



void scopeHashTable::decScope()
{
  if (_currentScope == 0) throw string("Can not have a scope less than zero");
  else {
    list<list<variable>::iterator>::iterator it;
    int index;
    for (it = _scopeStack.top().begin(); it != _scopeStack.top().end(); ++it) {
      index = hash( (*it)->get_id() );
      this->at(index).erase(*it);
    }
    _scopeStack.pop();
    _currentScope -= 1;
  }
}



void scopeHashTable::addElement(variable& v)
{
  if (this->empty()) throw string("Error, can not add a variable because the size of the hash table is null");
  else {
    
    v.set_scope(_currentScope);
    int index = hash(v.get_id());
    this->at(index).push_front(v);
    list<variable>::iterator it = this->at(index).begin();
    list<list<variable>::iterator> l;
    _scopeStack.top().push_front(it);
    
  }
}



/*void scopeHashTable::removeElement(const variable& v)
{
  if (this->empty() || (v.get_scope() > (_scopeStack.size() -1))) throw string("Error, the variable is not in the hash table");
  else if ((_scopeStack.size() > 0)&&(_scopeStack.size() > (v.get_scope() + 1))) throw string("Error, can not remove a variable with such a small scope");
  else {
    list<list<variable>::iterator>::iterator it;
    bool found = false;
    for (it = _scopeStack.top().begin(); (it != _scopeStack.top().end())&&(!found); ++it) {
      if (**it == v) {
	this->at(hash(v.get_id())).erase(*it);
	_scopeStack.top().erase(it);
	found = true;
      }
    }
    if (!found) throw string("Error, the variable is not in the hash table");
  }
}*/



string scopeHashTable::get_type(const string& id) const
{
  int index = hash(id);
  string type = "";
  bool found = false;
  for (auto it = this->at(index).begin(); (it != this->at(index).end())&&(!found); ++it) {
    if (it->get_id() == id) {
      type = it->get_type();
      found = true;
    }
  }
  if (!found) throw string(id + " not found");
  return type;
}



bool scopeHashTable::contains(const string& id) const
{
  int index = hash(id);
  bool found = false;
  for (auto it = this->at(index).begin(); (it != this->at(index).end())&&(!found); ++it) {
    if (it->get_id() == id) found = true;
  }
  return found;
}