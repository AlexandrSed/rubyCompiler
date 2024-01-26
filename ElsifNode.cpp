#include "ElsifNode.h"

class ElsifNode {
    static ElsifNode* ElsifNode::createElsifStmt(ExprNode* condition, std::vector<StmtNode*>* action) {
        ElsifNode* result = new ElsifNode;
        result->condition = condition;
        result->action = action;
        result->idNode = ++ElsifNode::maxId;
	    return result;
    }
};