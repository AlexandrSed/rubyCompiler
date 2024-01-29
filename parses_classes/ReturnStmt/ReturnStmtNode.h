#include <vector>
#include <string>

class ExprNode;

class ReturnStmtNode {

public:
    ExprNode* returnValue;
    int idNode;

    ReturnStmtNode() {
        if(maxId == NULL)
            maxId = 0;
    }

    static ReturnStmtNode* createReturnStmt(ExprNode* returnValue);
    static ReturnStmtNode* createSingleReturnStmt();
    static int maxId;
};