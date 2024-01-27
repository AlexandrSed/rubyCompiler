#include <vector>
#include <string>

class WhenStmtNode {
public:
    std::vector<ExprNode*>* condition;
    std::vector<StmtNode*>* action;
    int idNode;

    static WhenStmtNode* createWhenStmt(std::vector<ExprNode*>* condition, std::vector<StmtNode*>* action);
    static int maxId;
};