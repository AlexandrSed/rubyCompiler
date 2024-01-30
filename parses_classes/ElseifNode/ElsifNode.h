#include <vector>
#include <string>

class ExprNode;
class StmtNode;

class ElsifNode {
public:
    ExprNode* condition;
    std::vector<StmtNode*>* action;
    int idNode;

    ElsifNode();

    static ElsifNode* createElsifStmt(ExprNode* condition, std::vector<StmtNode*>* action);
    static std::vector<ElsifNode*>* createElsifList(ElsifNode* elsif);
    static std::vector<ElsifNode*>* addElsifToList(std::vector<ElsifNode*>* elsifList, ElsifNode* elsif);
static inline int maxId;
};