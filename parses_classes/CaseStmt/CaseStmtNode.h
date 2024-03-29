//#include "../WhenStmt/WhenStmtNode.h"
#include <vector>
#include <string>

class WhenStmtNode;
class ExprNode;
class StmtNode;

class CaseStmtNode {
public:

    ExprNode* condition;
    std::vector<WhenStmtNode*>* whenList;
    std::vector<StmtNode*>* falseBranch;
    int idNode;

    CaseStmtNode();



    static CaseStmtNode* createCaseStmt(ExprNode* condition, std::vector<WhenStmtNode*>* whenList);
    static CaseStmtNode* createCaseStmtWithElse(ExprNode* condition, std::vector<WhenStmtNode*>* whenList, std::vector<StmtNode*>* falseBranch);
static inline int maxId;
};