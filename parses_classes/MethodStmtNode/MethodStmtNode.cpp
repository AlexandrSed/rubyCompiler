#include "MethodStmtNode.h"

MethodStmtNode* MethodStmtNode::createMethodStmt(MethodType type, std::string methodName, std::vector<std::string>* paramList, std::vector<StmtNode*>* body) {
    MethodStmtNode* result = new MethodStmtNode;
    result->methodName = methodName;
    result->type = type;
    result->paramList = paramList;
    result->body = body;
    result->idNode = ++MethodStmtNode::maxId;
    return result;
}

MethodStmtNode* MethodStmtNode::createMethodStmtWithoutParams(MethodType type, std::string methodName, std::vector<StmtNode*>* body) {
    MethodStmtNode* result = new MethodStmtNode;
    result->methodName = methodName;
    result->type = type;
    result->body = body;
    result->idNode = ++MethodStmtNode::maxId;
    return result;
}

std::vector<std::string>* createParamList(std::string parametr) {
    std::vector<std::string> result = {parametr};
    return &result;
}

std::vector<std::string>* addParametrToList(std::vector<std::string>* paramList, std::string parametr) {
    paramList->push_back(parametr);
    return paramList;
}