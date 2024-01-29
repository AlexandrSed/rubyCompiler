#include <vector>
#include <string>

class ExprNode;

class ReturnStmtNode {

public:
    ExprNode* returnValue;
    int idNode;


    static ReturnStmtNode* createReturnStmt(ExprNode* returnValue);
    static ReturnStmtNode* createSingleReturnStmt();
static inline int maxId;
};