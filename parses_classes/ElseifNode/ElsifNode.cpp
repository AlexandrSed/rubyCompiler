#include "ElsifNode.h"

class ElsifNode {
public:
    static ElsifNode* ElsifNode::createElsifStmt(ExprNode* condition, std::vector<StmtNode*>* action) {
        ElsifNode* result = new ElsifNode;
        result->condition = condition;
        result->action = action;
        result->idNode = ++ElsifNode::maxId;
	    return result;
    }
};

std::vector<ElsifNode*>* createElsifList(ElsifNode* elsif) {
    std::vector<ElsifNode*> result = {elsif};
    return &result;
}

std::vector<ElsifNode*>* addElsifToList(std::vector<ElsifNode*>* elsifList, ElsifNode* elsif) {
    elsifList->push_back(elsif);
    return elsifList;
}