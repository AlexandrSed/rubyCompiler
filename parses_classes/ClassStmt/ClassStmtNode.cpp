#include "ClassStmtNode.h"

ClassStmtNode* ClassStmtNode::createClassStmt(std::string* className, std::vector<ClassBodyStmtNode*>* classBody) {
    ClassStmtNode* result = new ClassStmtNode;
    result->className = className;
    result->classBody = classBody;
    result->idNode = ++ClassStmtNode::maxId;
    return result;
}
ClassStmtNode* ClassStmtNode::createClassStmtWithParent(std::string* className, std::string* parentName, std::vector<ClassBodyStmtNode*>* classBody) {
    ClassStmtNode* result = new ClassStmtNode;
    result->className = className;
    result->parentName = parentName;
    result->classBody = classBody;
    result->idNode = ++ClassStmtNode::maxId;
    return result;
}