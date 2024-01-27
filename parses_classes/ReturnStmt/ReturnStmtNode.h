#include <vector>
#include <string>

class ReturnStmtNode {

public:
    ExprNode* returnValue;
    int idNode;

    static ReturnStmtNode* createReturnStmt(ExprNode* returnValue);
    static ReturnStmtNode* createSingleReturnStmt();
    statuc int maxId;
}