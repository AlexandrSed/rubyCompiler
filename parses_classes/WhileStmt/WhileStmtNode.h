#include <vector>
#include <string>

class ExprNode;
class StmtNode;

class WhileStmtNode {
public:
    ExprNode* condition;
    std::vector<StmtNode*>* body;
    int idNode;

    WhileStmtNode() {
        if(maxId == NULL)
            maxId = 0;
    }

    static WhileStmtNode* createWhileStmtNode(ExprNode* condition, std::vector<StmtNode*>* body);
    static int maxId;
};