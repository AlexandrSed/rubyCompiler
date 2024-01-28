#include "../ClassBodyStmt/ClassBodyStmtNode.h"

class ClassStmtNode {
public:

    std::string className;
    std::vector<ClassBodyStmtNode*>* classBody;
    std::string parentName;
    int idNode;

    static ClassStmtNode* createClassStmt(std::string className, std::vector<ClassBodyStmtNode*>* classBody);
    static ClassStmtNode* createClassStmtWithParent(std::string className, std::string parentName, std::vector<ClassBodyStmtNode*>* classBody);
    static int maxId;
};