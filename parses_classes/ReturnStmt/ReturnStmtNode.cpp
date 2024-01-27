#include "ReturnStmtNode.h"

class ReturnStmtNode {
    public:
    static ReturnStmtNode* ReturnStmtNode::createReturnStmt(ExprNode* returnValue) {
        ReturnStmtNode* result = new ReturnStmtNode;
        result->returnValue = returnValue;
        result->idNode = ++ReturnStmtNode::maxId;
        return result;
    }

    static ReturnStmtNode* ReturnStmtNode::createSingleReturnStmt() {
        ReturnStmtNode* result = new ReturnStmtNode;
        result->idNode = ++ReturnStmtNode::maxId;
        return result;
    }
}