#include <vector>
#include <string>

class ElsifNode {
public:
    ExprNode* condition;
    std::vector<StmtNode*>* action;

    static ElsifNode* createElsifStmt(ExprNode* condition, std::vector<StmtNode*>* action);
    static int maxId;
};