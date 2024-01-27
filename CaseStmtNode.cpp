#include "CaseStmtNode.h"

class CaseStmtNode {
public:

    static CaseStmtNode* CaseStmtNode::createCaseStmt(ExprNode* condition, std::vector<WhenStmtNode*>* whenList) {
        CaseStmtNode* result = new CaseStmtNode;
        result->condition = condition;
        result->whenList = whenList;
        result->idNode = ++CaseStmtNode::maxId;
        return result;
    }

    static CaseStmtNode* CaseStmtNode::createCaseStmtWithElse(ExprNode* condition,
    std::vector<WhenStmtNode*>* whenList,
    std::vector<StmtNode*>* falseBranch) {
        CaseStmtNode* result = new CaseStmtNode;
        result->condition = condition;
        result->whenList = whenList;
        result->falseBranch = falseBranch;
        result->idNode = ++CaseStmtNode::maxId;
        return result;
    }
};