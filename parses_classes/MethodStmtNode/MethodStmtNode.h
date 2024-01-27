#include <string>
#include <vector>

enum MethodType {
    simple,
    markQuestion,
    markExclamation,
    markEqual
}

class MethodStmtNode {
public:

    MethodType type;
    std::string methodName;
    std::vector<std::string>* paramList;
    std::vector<StmtNode*>* body;
    int idNode;

    static MethodStmtNode* createMethodStmt(MethodType type, std::string methodName, std::vector<std::string>* paramList, std::vector<StmtNode*>* body);
    static MethodStmtNode* createMethodStmtWithoutParams(MethodType type, std::string methodName, std::vector<StmtNode*>* body);
    static int maxId;
};