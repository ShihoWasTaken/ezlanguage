#ifndef NODE_H
#define NODE_H

#include <string>

using namespace std;

/**
 * @brief Base class, used to structure the others classes as nodes of the main tree
 * @author : GARNIER Antoine
 */
class Node{
protected:
    string name;
    Node* left_son;
    Node* right_son;

public:
    Node();
    virtual string translate() =0; // this function will allow the translation of the nodes's tree into c++ instructions
    ~Node();
    
    Node * get_left_son() const;
    Node * get_right_son() const;
    
};

#endif //NODE_H
