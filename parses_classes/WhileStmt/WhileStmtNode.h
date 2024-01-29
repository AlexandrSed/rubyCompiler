#include <vector>
#include <string>

class ExprNode;
class StmtNode;

class WhileStmtNode {
public:
    ExprNode* condition;
    std::vector<StmtNode*>* body;
    int idNode;


    static WhileStmtNode* createWhileStmtNode(ExprNode* condition, std::vector<StmtNode*>* body);
    static inline int maxId;


};