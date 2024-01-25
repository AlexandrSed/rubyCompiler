#include "ExprNode.h"

class ExprNode {
public:
    static ExprNode* ExprNode::createExprFromVarName(ExprType* type, string& id) {
        ExprNode* result = new ExprNode;
        result->type = type;
        result->varName = id;
        result->idNode = ++ExprNode::max_id;
	    return result;
    }
    
};