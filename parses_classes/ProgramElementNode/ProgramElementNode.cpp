#include "ProgramElementNode.h"

ProgramElementNode* ProgramElementNode::createClassProgramElementNode(ClassStmtNode* classNode) {
    ProgramElementNode* result = new ProgramElementNode;
    result->classNode = classNode;
    result->idNode = ++ProgramElementNode::maxId;
    return result;
}
ProgramElementNode* ProgramElementNode::createMethodProgramElementNode(MethodStmtNode* methodNode) {
    ProgramElementNode* result = new ProgramElementNode;
    result->methodNode = methodNode;
    result->idNode = ++ProgramElementNode::maxId;
    return result;
}
ProgramElementNode* ProgramElementNode::createStmtProgramElementNode(StmtNode* stmtNode) {
    ProgramElementNode* result = new ProgramElementNode;
    result->stmtNode = stmtNode;
    result->idNode = ++ProgramElementNode::maxId;
    return result;
}

std::vector<ProgramElementNode*>* createProgramElementList(ProgramElementNode* programElement) {
    std::vector<ProgramElementNode*>* result = new std::vector<ProgramElementNode*>;
    result->push_back(programElement);
    return result;
}
std::vector<ProgramElementNode*>* addProgramElementToList(std::vector<ProgramElementNode*>* programElementList, ProgramElementNode* programElement) {
    programElementList->push_back(programElement);
    return programElementList;
}