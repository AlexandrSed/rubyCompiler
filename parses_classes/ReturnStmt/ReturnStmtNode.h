#include <vector>
#include <string>
#include "../ExprNode/ExprNode.h"

class ReturnStmtNode {

public:
    ExprNode* returnValue;
    int idNode;

    static ReturnStmtNode* createReturnStmt(ExprNode* returnValue);
    static ReturnStmtNode* createSingleReturnStmt();
    static int maxId;
};