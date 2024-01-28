#include "../ExprNode/ExprNode.h"
class StmtNode;

class UnlessStmtNode {
public:
    ExprNode* condition;
    std::vector<StmtNode*>* trueBranch;
    std::vector<StmtNode*>* falseBranch;
    ExprNode* action;
    int idNode;

    static UnlessStmtNode* createUnlessStmt(ExprNode* condition, std::vector<StmtNode*>* trueBranch);
    static UnlessStmtNode* createUnlessStmtwithElse(ExprNode* condition, std::vector<StmtNode*>* trueBranch, std::vector<StmtNode*>* falseBranch);
    static UnlessStmtNode* createSingleLineUnlessStmt(ExprNode* condition, ExprNode* action);
    static int maxId;
};