//@author Antoine GARNIER
#include "While.h"
#include "../addons/String_addon.h"

While::While(Condition* while_cond, Node* while_left_son, Node* while_right_son)
    :Iterative_instruction(while_cond){
    setLeftSon(while_left_son);
    setRightSon(while_right_son);
}

string While::preTranslate() const {
    std::string res;
    Condition* while_condition= getCondition();

//    The while condition is stored in the class
	res= "while(" + while_condition->translate() + ") {";

//    The first instruction of the loop is the left son
//    The second instruction is the right son of this left son...etc
//    So here, we just translate the first one
    res+= "   "+ getLeftSon()->translate();

    return res;
}

string While::postTranslate() const
{
    
    //    The instructions are translated, the loop closes
    return "}";
}
