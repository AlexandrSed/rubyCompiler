#include "ClassBodyStmtNode.h"

ClassBodyStmtNode* ClassBodyStmtNode::createClassBodyStmtMethod(MethodStmtNode* method) {
    ClassBodyStmtNode* result = new ClassBodyStmtNode;
    result->value = nullptr;
    result->method = method;
    result->idNode = ++ClassBodyStmtNode::maxId;
    return result;
}

ClassBodyStmtNode* ClassBodyStmtNode::createClassBodyStmtClassVarName(std::string* classVarName, ExprNode* value) {
    ClassBodyStmtNode* result = new ClassBodyStmtNode;
    result->classVarName = classVarName;
    result->value = value;
    result->idNode = ++ClassBodyStmtNode::maxId;
    return result;
}

ClassBodyStmtNode* ClassBodyStmtNode::createClassBodyStmtobjectVarName(std::string* objectVarName, ExprNode* value) {
    ClassBodyStmtNode* result = new ClassBodyStmtNode;
    result->objectVarName = objectVarName;
    result->value = value;
    result->idNode = ++ClassBodyStmtNode::maxId;
    return result;
}


std::vector<ClassBodyStmtNode*>* ClassBodyStmtNode::createClassBody(ClassBodyStmtNode* classEl) {
    std::vector<ClassBodyStmtNode*>* result = new std::vector<ClassBodyStmtNode*>;
    result->push_back(classEl);
    return result;
}

std::vector<ClassBodyStmtNode*>* ClassBodyStmtNode::addStmtToClassBody(std::vector<ClassBodyStmtNode*>* classBody, ClassBodyStmtNode* classEl) {
    classBody->push_back(classEl);
    return classBody;
}

ClassBodyStmtNode::ClassBodyStmtNode() {
    this->value = nullptr;
    this->method = nullptr;
    this->classVarName = nullptr;
    this->objectVarName = nullptr;
}
