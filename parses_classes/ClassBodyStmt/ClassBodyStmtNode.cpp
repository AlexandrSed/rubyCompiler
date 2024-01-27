#include "ClassBodyStmtNode.h"

class ClassBodyStmtNode {
public:

    static ClassBodyStmtNode* ClassBodyStmtNode::createClassBodyStmtMethod(MethodStmtNode* method) {
        ClassBodyStmtNode* result = new ClassBodyStmtNode;
        result->method = method;
        result->idNode = ++ClassBodyStmtNode::maxId;
        return result;
    }

    static ClassBodyStmtNode* ClassBodyStmtNode::createClassBodyStmtClassVarName(std::string classVarName, ExprNode* value) {
        ClassBodyStmtNode* result = new ClassBodyStmtNode;
        result->classVarName = classVarName;
        result->value = value;
        result->idNode = ++ClassBodyStmtNode::maxId;
        return result;
    }

    static ClassBodyStmtNode* ClassBodyStmtNode::createClassBodyStmtobjectVarName(std::string objectVarName, ExprNode* value) {
        ClassBodyStmtNode* result = new ClassBodyStmtNode;
        result->objectVarName = objectVarName;
        result->value = value;
        result->idNode = ++ClassBodyStmtNode::maxId;
        return result;
    }
};

std::vector<ClassBodyStmtNode*>* createClassBody(ClassBodyStmtNode* classEl) {
    std::vector<ClassBodyStmtNode*> result = {classEl};
    return &result;
}

std::vector<ClassBodyStmtNode*>* addStmtToClassBody(std::vector<ClassBodyStmtNode*>* classBody, ClassBodyStmtNode* classEl) {
    classBody->push_back(classEl);
    return classBody;
}