#include <vector>
#include <string>

class WhileStmtNode {
public:
    ExprNode* condition;
    std::vector<StmtNode*>* body;
    int idNode;

    static WhileStmtNode* createWhileStmtNode(ExprNode* condition, std::vector<StmtNode*>* body);
    static int maxId;
};