#include <vector>
#include <string>

class CaseStmtNode {
public:

    ExprNode* condition;
    std::vector<WhenStmtNode*>* whenList;
    std::vector<StmtNode*>* falseBranch;
    int idNode;

    static CaseStmtNode* createCaseStmt(ExprNode* condition, std::vector<WhenStmtNode*>* whenList);
    static CaseStmtNode* createCaseStmtWithElse(ExprNode* condition, std::vector<WhenStmtNode*>* whenList, std::vector<StmtNode*>* falseBranch);
    static int maxId;
}