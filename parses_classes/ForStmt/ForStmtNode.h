#include <vector>
#include <string>
#include "../ExprNode/ExprNode.h"
#include "../StmtNode/StmtNode.h"

class ForStmtNode {
public:
    ExprNode* variable;
    ExprNode* array;
    std::vector<StmtNode*>* body;
    int idNode;

    static ForStmtNode* createForStmtNode(ExprNode* variable, ExprNode* array, std::vector<StmtNode*>* body);
    static int maxId;
};