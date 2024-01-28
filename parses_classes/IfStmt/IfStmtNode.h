#include "../ElseifNode/ElsifNode.h"

class IfStmtNode {
public:
    ExprNode* condition;
    std::vector<StmtNode*>* trueBranch;
    std::vector<StmtNode*>* falseBranch;
    std::vector<ElsifNode*>* elsif;
    ExprNode* action;
    int idNode;

    static IfStmtNode* createIfStmt(ExprNode* condition, std::vector<StmtNode*>* trueBranch);
    static IfStmtNode* createIfStmtWithElse(ExprNode* condition, std::vector<StmtNode*>* trueBranch, std::vector<StmtNode*>* falseBranch);
    static IfStmtNode* createIfStmtWithElsif(ExprNode* condition,std::vector<StmtNode*>* trueBranch, std::vector<ElsifNode*>* elsif);
    static IfStmtNode* createIfStmtWithElseAndElsif(ExprNode* condition,
    std::vector<StmtNode*>* trueBranch,
    std::vector<ElsifNode*>* elsif,
    std::vector<StmtNode*>* falseBranch);

    static IfStmtNode* createSingleLineIfStmt(ExprNode* action, ExprNode* condition);
    static int maxId;
};