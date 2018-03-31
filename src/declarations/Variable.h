#ifndef VARIABLE_H
#define VARIABLE_H

#include "CommonVar.h"

/** 
 * @brief Node of the tree which represent the declaration of a variable
 * @author : GINISTY Valentin
 * 
 * exemple : my_great_variable is integer -> int my_great_variable;
 * TODO Handle hashed variable (VariableHashed class) association or merging
 */
class Variable : public CommonVar {
	
protected:
    bool isStatic;
    Expression* mConstructionParameters;

public:

    /**
     * @brief Constructor with parameters
     * @param name : name of the variable
     * @param type : type of the variable
     * @param scope : scope of the variable (locale or globale)
     * @param content : the value that will be affected to the variable
     * @param co : if the variable is const
     * @param st : if the variable is static
     */
    Variable(const std::string & name, const std::string & type,
            const std::string & scope, const Node* content = nullptr, bool co = false,
            bool st = false);

    /**
     * @brief Constructor for class construction
     * @param name : name of the variable
     * @param type : type of the variable
     * @param construction_parameters : parameters used to construct the class
     * @param scope : scope of the variable (locale or globale)
     * @param co : if the variable is const
     * @param st : if the variable is static
     */
    Variable(const std::string & name, const std::string & type,
            Expression * construction_parameters, const std::string & scope, bool co = false,
            bool st = false);

    /**
     * @brief Destructor
     */
    ~Variable();


public:
    /**
     * @brief Get the name of the node
     * @return the name of the node. Defined at class creation
     */
    virtual inline const std::string getName() const { return "Variable declaration"; }

    /**
     * @brief Set variable scope and constancy
     */
    void setScope(std::string & scope) { mScope= scope; }

    /**
     * @brief Translate the begining part of the Variable
     * @return a string containing the C++ code of the declaration
     */
    virtual std::string preTranslate() const;

private:
    std::string constructionParameters() const
    { return ( mConstructionParameters ? "("+ mConstructionParameters->translate() +")" : "" ); }
};
#endif
