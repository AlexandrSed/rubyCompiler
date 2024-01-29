#include <vector>
#include <string>

class ExprNode;
class StmtNode;

class WhenStmtNode {
public:
    std::vector<ExprNode*>* condition;
    std::vector<StmtNode*>* action;
    int idNode;

    WhenStmtNode() {
        if(maxId == NULL)
            maxId = 0;
    }

    static WhenStmtNode* createWhenStmt(std::vector<ExprNode*>* condition, std::vector<StmtNode*>* action);
    static std::vector<WhenStmtNode*>* createWhenList(WhenStmtNode* when);
    static std::vector<WhenStmtNode*>* addWhenToList(std::vector<WhenStmtNode*>* whenList, WhenStmtNode* when);
    static int maxId;
};