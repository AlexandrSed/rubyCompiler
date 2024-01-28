#include "ExprNode.h"

ExprNode* ExprNode::createExprFromVarName(ExprType type, std::string* id) {
    ExprNode* result = new ExprNode;
    result->type = type;
    result->varName = id;
    result->idNode = ++ExprNode::maxId;
    return result;
}

ExprNode* ExprNode::createExprFromString(std::string* str) {
    ExprNode* result = new ExprNode;
    result->type = ExprType::stringType;
    result->strValue = str;
    result->idNode = ++ExprNode::maxId;
    return result;
}

ExprNode* ExprNode::createExprFromTrue() {
    ExprNode* result = new ExprNode;
    result->type = ExprType::trueKeyword;
    result->boolValue = true;
    result->idNode = ++ExprNode::maxId;
    return result;
}

ExprNode* ExprNode::createExprFromFalse() {
    ExprNode* result = new ExprNode;
    result->type = ExprType::falseKeyword;
    result->boolValue = false;
    result->idNode = ++ExprNode::maxId;
    return result;
}

ExprNode* ExprNode::createExprFromNil() {
    ExprNode* result = new ExprNode;
    result->type = ExprType::nilKeyword;
    result->idNode = ++ExprNode::maxId;
    return result;
}

ExprNode* ExprNode::createExprFromInt(int val) {
    ExprNode* result = new ExprNode;
    result->type = ExprType::intNumber;
    result->intValue = val;
    result->idNode = ++ExprNode::maxId;
    return result;
}

ExprNode* ExprNode::createExprFromFloat(float val) {
    ExprNode* result = new ExprNode;
    result->type = ExprType::floatNumber;
    result->floatValue = val;
    result->idNode = ++ExprNode::maxId;
    return result;
}

ExprNode* ExprNode::createExprFromBinOp(ExprType typeOp, ExprNode* left, ExprNode* right) {
    ExprNode* result = new ExprNode;
    result->type = typeOp;
    result->left = left;
    result->right = right;
    result->idNode = ++ExprNode::maxId;
    return result;
}

ExprNode* ExprNode::createExprFromFuncCall(ExprType type, std::vector<ExprNode*>* params, std::string* id) {
    ExprNode* result = new ExprNode;
    result->type = type;
    result->params = params;
    result->varName = id;
    result->idNode = ++ExprNode::maxId;
    return result;
}

ExprNode* ExprNode::createExprFromUnary(ExprType typeOp, ExprNode* operand) {
    ExprNode* result = new ExprNode;
    result->type = typeOp;
    result->left = operand;
    result->idNode = ++ExprNode::maxId;
    return result;
}

ExprNode* ExprNode::createExprFromTernary(ExprNode* left, ExprNode* center, ExprNode* right) {
    ExprNode* result = new ExprNode;
    result->type = ExprType::ternaryOperator;
    result->left = left;
    result->center = center;
    result->right = right;
    result->idNode = ++ExprNode::maxId;
    return result;
}

ExprNode* ExprNode::createExprFromArray(ExprType type, std::vector<ExprNode*>* list) {
    ExprNode* result = new ExprNode;
    result->type = type;
    result->list=list;
    result->idNode = ++ExprNode::maxId;
    return result;
}

ExprNode* ExprNode::createExprFromSuper(ExprType type, std::vector<ExprNode*>* params) {
    ExprNode* result = new ExprNode;
    result->type = type;
    result->params = params;
    result->idNode = ++ExprNode::maxId;
    return result;
}

ExprNode* ExprNode::createExprFromMethod(ExprType type, std::vector<ExprNode*>* params, std::string* id, ExprNode* left) {
    ExprNode* result = new ExprNode;
    result->type = type;
    result->params = params;
    result->left = left;
    result->varName = id;
    result->idNode = ++ExprNode::maxId;
    return result;
}

ExprNode* ExprNode::createExprFromSelf(ExprType type, std::vector<ExprNode*>* params, std::string* id) {
    ExprNode* result = new ExprNode;
    result->type = type;
    result->params = params;
    result->varName = id;
    result->idNode = ++ExprNode::maxId;
    return result;
}

std::vector<ExprNode*>* ExprNode::createExprList(ExprNode* expr) {
    std::vector<ExprNode*> result = {expr};
    return &result;
}

std::vector<ExprNode*>* ExprNode::addExprToList(std::vector<ExprNode*>* exprList, ExprNode* expr) {
    exprList->push_back(expr);
    return exprList;
}