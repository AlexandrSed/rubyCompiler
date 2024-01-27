#include "ClassStmtNode.h"

class ClassStmtNode {
public:

    static ClassStmtNode* ClassStmtNode::createClassStmt(std::string className, std::vector<ClassBodyStmtNode*>* classBody) {
        ClassStmtNode* result = new ClassStmtNode;
        result->className = className;
        result->classBody = classBody;
        result->idNode = ++ClassStmtNode::maxId;
        return result;
    }
    static ClassStmtNode* ClassStmtNode::createClassStmtWithParent(std::string className, std::string parentName, std::vector<ClassBodyStmtNode*>* classBody) {
        ClassStmtNode* result = new ClassStmtNode;
        result->className = className;
        result->parentName = parentName;
        result->classBody = classBody;
        result->idNode = ++ClassStmtNode::maxId;
        return result;
    }
};