#include <vector>
#include <string>

class StmtNode {
public:
    ExprNode* exprStmt;
    IfStmtNode* ifStmt;
    WhileStmtNode* whileStmt;
    ForStmtNode* forStmt;
    CaseStmtNode* caseStmt;
    UnlessStmtNode* unlessStmt;
    ReturnStmtNode* returnStmt;
    AliasStmtNode* aliasStmt;
    int idNode;

    static StmtNode* createStmtNodeExpr(ExprNode* exprStmt);
    static StmtNode* createStmtNodeIf(IfStmtNode* ifStmt);
    static StmtNode* createStmtNodeWhile(WhileStmtNode* whileStmt);
    static StmtNode* createStmtNodeFor(ForStmtNode* forStmt);
    static StmtNode* createStmtNodeCase(CaseStmtNode* caseStmt);
    static StmtNode* createStmtNodeUnless(UnlessStmtNode* unlessStmt);
    static StmtNode* createStmtNodeReturn(ReturnStmtNode* returnStmt);
    static StmtNode* createStmtNodeAlias(AliasStmtNode* aliasStmt);
    static int maxId;
};

std::vector<StmtNode*>* createStmtList(StmtNode* stmt);
std::vector<StmtNode*>* addStmtToList(std::vector<StmtNode*>* stmtList, StmtNode* stmt);
