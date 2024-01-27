#include "WhenStmtNode.h"

class WhenStmtNode {
public:

    static WhenStmtNode* WhenStmtNode::createWhenStmt(std::vector<ExprNode*>* condition, std::vector<StmtNode*>* action) {
        WhenStmtNode* result = new WhenStmtNode;
        result->condition = condition;
        result->action = action;
        result->idNode = ++WhenStmtNode::maxId;
        return result;
    }

};