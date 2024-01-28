#include "WhenStmtNode.h"

WhenStmtNode* WhenStmtNode::createWhenStmt(std::vector<ExprNode*>* condition, std::vector<StmtNode*>* action) {
    WhenStmtNode* result = new WhenStmtNode;
    result->condition = condition;
    result->action = action;
    result->idNode = ++WhenStmtNode::maxId;
    return result;
}

std::vector<WhenStmtNode*>* WhenStmtNode::createWhenList(WhenStmtNode* when) {
    std::vector<WhenStmtNode*>* result = new std::vector<WhenStmtNode*>;
    result->push_back(when);
    return result;
}

std::vector<WhenStmtNode*>* WhenStmtNode::addWhenToList(std::vector<WhenStmtNode*>* whenList, WhenStmtNode* when) {
    whenList->push_back(when);
    return whenList;
}