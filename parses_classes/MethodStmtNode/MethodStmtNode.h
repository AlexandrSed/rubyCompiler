#include <string>
#include <vector>
#include "../StmtNode/StmtNode.h"

enum MethodType {
    simple,
    markQuestion,
    markExclamation,
    markEqual
};

class MethodStmtNode {
public:

    MethodType type;
    std::string methodName;
    std::vector<std::string>* paramList;
    std::vector<StmtNode*>* body;
    int idNode;

    static MethodStmtNode* createMethodStmt(MethodType type, std::string methodName, std::vector<std::string>* paramList, std::vector<StmtNode*>* body);
    static MethodStmtNode* createMethodStmtWithoutParams(MethodType type, std::string methodName, std::vector<StmtNode*>* body);
    static std::vector<std::string>* createParamList(std::string parametr);
    static std::vector<std::string>* addParametrToList(std::vector<std::string>* paramList, std::string parametr);
    static int maxId;
};