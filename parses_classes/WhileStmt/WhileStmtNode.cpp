#include "WhileStmtNode.h"

WhileStmtNode* WhileStmtNode::createWhileStmtNode(ExprNode* condition, std::vector<StmtNode*>* body) {
    WhileStmtNode* result = new WhileStmtNode;
    result->condition = condition;
    result->body = body;
    result->idNode = ++WhileStmtNode::maxId;
    return result;
}