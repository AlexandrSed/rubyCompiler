#include "ExprNode.h"

class ExprNode {
public:
    static ExprNode* ExprNode::createExprFromVarName(ExprType* type, string& id) {
        ExprNode* result = new ExprNode;
        result->type = type;
        result->varName = id;
        result->idNode = ++ExprNode::max_id;
	    return result;
    }
    static ExprNode* ExprNode::createExprFromString(string& str){
        ExprNode* result = new ExprNode;
        result->type = ExprType.stringType;
        result->strValue = str;
        result->idNode = ++ExprNode::max_id;
	    return result;
    }
    static ExprNode* ExprNode::createExprFromTrue();
    static ExprNode* ExprNode::createExprFromFalse();
    static ExprNode* ExprNode::createExprFromNil();
    static ExprNode* ExprNode::createExprFromInt(int val);
    static ExprNode* ExprNode::createExprFromFloat(float val);
    static ExprNode* ExprNode::createExprFromBinOp(ExprType typeOp, ExprNode* left, ExprNode* right);
    static ExprNode* ExprNode::createExprFromFuncCall(std::vector<ExprNode*>* params, string& id);
    static ExprNode* ExprNode::createExprFromUnary(ExprType typeOp, ExprNode* operand);
    static ExprNode* ExprNode::createExprFromTernary(ExprNode* left, ExprNode* center, ExprNode* right);
};