#include "MethodStmtNode.h"

class MethodStmtNode {
public:

    static MethodStmtNode* MethodStmtNode::createMethodStmt(MethodType type, std::string methodName, std::vector<std::string>* paramList, std::vector<StmtNode*>* body) {
        MethodStmtNode* result = new MethodStmtNode;
        result->methodName = methodName;
        result->type = type;
        result->paramList = paramList;
        result->body = body;
        result->idNode = ++MethodStmtNode::maxId;
        return result;
    }

    static MethodStmtNode* MethodStmtNode::createMethodStmtWithoutParams(MethodType type, std::string methodName, std::vector<StmtNode*>* body) {
        MethodStmtNode* result = new MethodStmtNode;
        result->methodName = methodName;
        result->type = type;
        result->body = body;
        result->idNode = ++MethodStmtNode::maxId;
        return result;
    }
};