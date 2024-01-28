#include "../WhileStmt/WhileStmtNode.h"
#include "../ForStmt/ForStmtNode.h"
#include "../CaseStmt/CaseStmtNode.h"
#include "../ReturnStmt/ReturnStmtNode.h"
#include "../UnlessStmt/UnlessStmtNode.h"
#include "../AliasStmt/AliasStmtNode.h"

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
    static std::vector<StmtNode*>* createStmtList(StmtNode* stmt);
    static std::vector<StmtNode*>* addStmtToList(std::vector<StmtNode*>* stmtList, StmtNode* stmt);
    static int maxId;
};