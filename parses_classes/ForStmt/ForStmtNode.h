#include <vector>
#include <string>

class ExprNode;
class StmtNode;

class ForStmtNode {
public:
    ExprNode* variable;
    ExprNode* array;
    std::vector<StmtNode*>* body;
    int idNode;

    ForStmtNode() {
        if(maxId == NULL)
            maxId = 0;
    }

    static ForStmtNode* createForStmtNode(ExprNode* variable, ExprNode* array, std::vector<StmtNode*>* body);
    static int maxId;
};