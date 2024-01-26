#include <vector>
#include <string>

class ElsifNode {
public:
    ExprNode* condition;
    std::vector<StmtNode*>* action;
    int idNode;

    static ElsifNode* createElsifStmt(ExprNode* condition, std::vector<StmtNode*>* action);
    static int maxId;
};

std::vector<ElsifNode*>* createElsifList(ElsifNode* elsif);

std::vector<ElsifNode*>* addElsifToList(std::vector<ElsifNode*>* elsifList, ElsifNode* elsif);