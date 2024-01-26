#include "UnlessStmtNode.h"

class UnlessStmtNode {
public:
    static UnlessStmtNode* UnlessStmtNode::createUnlessStmt(ExprNode* condition, std::vector<StmtNode*>* trueBranch) {
        UnlessStmtNode* result = new UnlessStmtNode;
        result->condition = condition;
        result->trueBranch = trueBranch;
        result->idNode = ++ElsifNode::maxId;
	    return result;
    }

    static UnlessStmtNode* UnlessStmtNode::createUnlessStmtwithElse(ExprNode* condition,
    std::vector<StmtNode*>* trueBranch,
    std::vector<StmtNode*>* falseBranch) {
        UnlessStmtNode* result = new UnlessStmtNode;
        result->condition = condition;
        result->trueBranch = trueBranch;
        result->falseBranch = falseBranch;
        result->idNode = ++ElsifNode::maxId;
	    return result;
    }

    static UnlessStmtNode* UnlessStmtNode::createSingleLineUnlessStmt(ExprNode* condition, ExprNode* action) {
        UnlessStmtNode* result = new UnlessStmtNode;
        result->condition = condition;
        result->action = action;
        result->idNode = ++ElsifNode::maxId;
	    return result;
    }
};