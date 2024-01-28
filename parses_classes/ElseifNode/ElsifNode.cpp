#include "ElsifNode.h"

ElsifNode* ElsifNode::createElsifStmt(ExprNode* condition, std::vector<StmtNode*>* action) {
    ElsifNode* result = new ElsifNode;
    result->condition = condition;
    result->action = action;
    result->idNode = ++ElsifNode::maxId;
    return result;
}

std::vector<ElsifNode*>* ElsifNode::createElsifList(ElsifNode* elsif) {
    std::vector<ElsifNode*>* result = new std::vector<ElsifNode*>;
    result->push_back(elsif);
    return result;
}

std::vector<ElsifNode*>* ElsifNode::addElsifToList(std::vector<ElsifNode*>* elsifList, ElsifNode* elsif) {
    elsifList->push_back(elsif);
    return elsifList;
}