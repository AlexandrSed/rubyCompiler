#include "../MethodStmtNode/MethodStmtNode.h"

class ClassBodyStmtNode {
public:

    MethodStmtNode* method;
    std::string classVarName;
    std::string objectVarName;
    ExprNode* value;
    int idNode;

    static ClassBodyStmtNode* createClassBodyStmtMethod(MethodStmtNode* method);
    static ClassBodyStmtNode* createClassBodyStmtClassVarName(std::string classVarName, ExprNode* value);
    static ClassBodyStmtNode* createClassBodyStmtobjectVarName(std::string objectVarName, ExprNode* value);
    static std::vector<ClassBodyStmtNode*>* createClassBody(ClassBodyStmtNode* classEl);
    static std::vector<ClassBodyStmtNode*>* addStmtToClassBody(std::vector<ClassBodyStmtNode*>* classBody, ClassBodyStmtNode* classEl);
    static int maxId;
};