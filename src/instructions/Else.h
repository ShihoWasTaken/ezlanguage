#ifndef ELSE_H
#define ELSE_H

#include "../modules/Node.h"

/**
 * @brief Node of the tree which represent a condition if
 * else is another node, can be passed as right node
 */

class Else : public Node {
		
protected:
	
public:
    /* * * * * * * * *
    * CONSTRUCTORS  *
    * * * * * * * * */

    Else(Node * left);
    

    /**
     * @brief Get the name of the node
     * @return the name of the node. Defined at class creation
     */
    virtual inline const std::string getName() const { return "Else"; }

    /* * * * * * * *
     * Translation *
     * * * * * * * */
    
    /**
     * @brief Translate the begining part of the If
     * @return a string containing the C++ code of the If
     *
     * All subclasses, should reimplement this method so that the translation corresponds
     * to their specifications, specificities and own values
     */
    virtual std::string preTranslate() const;
    
    /**
     * @brief Translate the end part of the If
     * @return a string containing the C++ code of the If
     *
     * All subclasses, should reimplement this method so that the translation corresponds
     * to their specifications, specificities and own values
     */
    virtual std::string postTranslate() const;

};
#endif