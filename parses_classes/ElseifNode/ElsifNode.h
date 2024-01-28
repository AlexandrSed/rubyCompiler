#include <vector>
#include <string>
#include "../ExprNode/ExprNode.h"
#include "../StmtNode/StmtNode.h"

class ElsifNode {
public:
    ExprNode* condition;
    std::vector<StmtNode*>* action;
    int idNode;

    static ElsifNode* createElsifStmt(ExprNode* condition, std::vector<StmtNode*>* action);
    static std::vector<ElsifNode*>* createElsifList(ElsifNode* elsif);
    static std::vector<ElsifNode*>* addElsifToList(std::vector<ElsifNode*>* elsifList, ElsifNode* elsif);
    static int maxId;
};