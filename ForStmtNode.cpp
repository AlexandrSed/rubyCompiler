#include "ForStmtNode.h"

class ForStmtNode {
public:

    static ForStmtNode* ForStmtNode::createForStmtNode(ExprNode* variable, ExprNode* array, std::vector<StmtNode*>* body) {
        ForStmtNode* result = new ForStmtNode;
        result->variable = variable;
        result->array;
        result->body = body;
        result->idNode = ++ForStmtNode::maxId;
	    return result;
    }

};