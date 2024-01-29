#include <vector>
#include <string>

class ExprNode;
class StmtNode;

class WhenStmtNode {
public:
    std::vector<ExprNode*>* condition;
    std::vector<StmtNode*>* action;
    int idNode;

    static WhenStmtNode* createWhenStmt(std::vector<ExprNode*>* condition, std::vector<StmtNode*>* action);
    static std::vector<WhenStmtNode*>* createWhenList(WhenStmtNode* when);
    static std::vector<WhenStmtNode*>* addWhenToList(std::vector<WhenStmtNode*>* whenList, WhenStmtNode* when);
    static int maxId=0;
};