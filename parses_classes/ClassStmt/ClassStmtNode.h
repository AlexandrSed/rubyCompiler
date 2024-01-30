//#include "../ClassBodyStmt/ClassBodyStmtNode.h"
#include <vector>
#include <string>
class ClassBodyStmtNode;

class ClassStmtNode {
public:

    std::string* className;
    std::vector<ClassBodyStmtNode*>* classBody;
    std::string* parentName;
    int idNode;

    ClassStmtNode();


    static ClassStmtNode* createClassStmt(std::string* className, std::vector<ClassBodyStmtNode*>* classBody);
    static ClassStmtNode* createClassStmtWithParent(std::string* className, std::string* parentName, std::vector<ClassBodyStmtNode*>* classBody);
static inline int maxId;
};