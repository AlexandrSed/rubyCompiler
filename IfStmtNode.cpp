#include "IfStmtNode.h"

class IfStmtNode {
public:
    static IfStmtNode* IfStmtNode::createIfStmt(ExprNode* condition, std::vector<StmtNode*>* trueBranch) {
        IfStmtNode* result = new IfStmtNode;
        result->condition = condition;
        result->trueBranch = trueBranch;
        result->idNode = ++IfStmtNode::maxId;
	    return result;
    }

    static IfStmtNode* IfStmtNode::createIfStmtWithElse(ExprNode* condition, std::vector<StmtNode*>* trueBranch, std::vector<StmtNode*>* falseBranch) {
        IfStmtNode* result = new IfStmtNode;
        result->condition = condition;
        result->trueBranch = trueBranch;
        result->falseBranch = falseBranch;
        result->idNode = ++IfStmtNode::maxId;
	    return result;
    }

    static IfStmtNode* IfStmtNode::createIfStmtWithElsif(ExprNode* condition, std::vector<StmtNode*>* trueBranch, std::vector<ElsifNode*>* elsif) {
        IfStmtNode* result = new IfStmtNode;
        result->condition = condition;
        result->trueBranch = trueBranch;
        result->elsif = elsif;
        result->idNode = ++IfStmtNode::maxId;
	    return result;
    }

    static IfStmtNode* IfStmtNode::createIfStmtWithElseAndElsif(ExprNode* condition,
    std::vector<StmtNode*>* trueBranch,
    std::vector<ElsifNode*>* elsif,
    std::vector<StmtNode*>* falseBranch) {
        IfStmtNode* result = new IfStmtNode;
        result->condition = condition;
        result->trueBranch = trueBranch;
        result->falseBranch = falseBranch;
        result->elsif = elsif;
        result->idNode = ++IfStmtNode::maxId;
	    return result;
    }
    static IfStmtNode* IfStmtNode::createSingleLineIfStmt(ExprNode* action, ExprNode* condition) {
        IfStmtNode* result = new IfStmtNode;
        result->condition = condition;
        result->action = action;
        result->idNode = ++IfStmtNode::maxId;
	    return result;
    }

};