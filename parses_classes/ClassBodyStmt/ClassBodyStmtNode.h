#include <string>
#include <vector>

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
    static int maxId;
};

std::vector<ClassBodyStmtNode*>* createClassBody(ClassBodyStmtNode* classEl);

std::vector<ClassBodyStmtNode*>* addStmtToClassBody(std::vector<ClassBodyStmtNode*>* classBody, ClassBodyStmtNode* classEl);