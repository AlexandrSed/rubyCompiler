#include "StmtNode.h"

StmtNode* StmtNode::createStmtNodeExpr(ExprNode* exprStmt) {
    StmtNode* result = new StmtNode;
    result->exprStmt = exprStmt;
    result->idNode = ++StmtNode::maxId;
    return result;
}

StmtNode* StmtNode::createStmtNodeIf(IfStmtNode* ifStmt) {
    StmtNode* result = new StmtNode;
    result->ifStmt = ifStmt;
    result->idNode = ++StmtNode::maxId;
    return result;
}

StmtNode* StmtNode::createStmtNodeUnless(UnlessStmtNode* unlessStmt) {
    StmtNode* result = new StmtNode;
    result->unlessStmt = unlessStmt;
    result->idNode = ++StmtNode::maxId;
    return result;
}

StmtNode* StmtNode::createStmtNodeReturn(ReturnStmtNode* returnStmt) {
    StmtNode* result = new StmtNode;
    result->returnStmt = returnStmt;
    result->idNode = ++StmtNode::maxId;
    return result;
}

StmtNode* StmtNode::createStmtNodeWhile(WhileStmtNode* whileStmt) {
    StmtNode* result = new StmtNode;
    result->whileStmt = whileStmt;
    result->idNode = ++StmtNode::maxId;
    return result;
}

StmtNode* StmtNode::createStmtNodeFor(ForStmtNode* forStmt) {
    StmtNode* result = new StmtNode;
    result->forStmt = forStmt;
    result->idNode = ++StmtNode::maxId;
    return result;
}

StmtNode* StmtNode::createStmtNodeCase(CaseStmtNode* caseStmt) {
    StmtNode* result = new StmtNode;
    result->caseStmt = caseStmt;
    result->idNode = ++StmtNode::maxId;
    return result;
}

StmtNode* StmtNode::createStmtNodeAlias(AliasStmtNode* aliasStmt) {
    StmtNode* result = new StmtNode;
    result->aliasStmt = aliasStmt;
    result->idNode = ++StmtNode::maxId;
    return result;
}

std::vector<StmtNode*>* StmtNode::createStmtList(StmtNode* stmt) {
    std::vector<StmtNode*>* result = new std::vector<StmtNode*>;
    result->push_back(stmt);
    return result;
}

std::vector<StmtNode*>* StmtNode::addStmtToList(std::vector<StmtNode*>* stmtList, StmtNode* stmt) {
    stmtList->push_back(stmt);
    return stmtList;
}