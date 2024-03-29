#include <vector>
#include <string>

class ExprNode;
class StmtNode;

class UnlessStmtNode {
public:
    ExprNode* condition;
    std::vector<StmtNode*>* trueBranch;
    std::vector<StmtNode*>* falseBranch;
    ExprNode* action;
    int idNode;

    UnlessStmtNode();

    static UnlessStmtNode* createUnlessStmt(ExprNode* condition, std::vector<StmtNode*>* trueBranch);
    static UnlessStmtNode* createUnlessStmtwithElse(ExprNode* condition, std::vector<StmtNode*>* trueBranch, std::vector<StmtNode*>* falseBranch);
    static UnlessStmtNode* createSingleLineUnlessStmt(ExprNode* condition, ExprNode* action);
    static inline int maxId;
};