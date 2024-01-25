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

    static ExprNode* ExprNode::createExprFromString(string& str) {
        ExprNode* result = new ExprNode;
        result->type = ExprType.stringType;
        result->strValue = str;
        result->idNode = ++ExprNode::max_id;
	    return result;
    }

    static ExprNode* ExprNode::createExprFromTrue() {
        ExprNode* result = new ExprNode;
        result->type = ExprType.trueKeyword;
        result->boolValue = true;
        result->idNode = ++ExprNode::max_id;
	    return result;
    }

    static ExprNode* ExprNode::createExprFromFalse() {
        ExprNode* result = new ExprNode;
        result->type = ExprType.falseKeyword;
        result->boolValue = false;
        result->idNode = ++ExprNode::max_id;
	    return result;
    }

    static ExprNode* ExprNode::createExprFromNil() {
        ExprNode* result = new ExprNode;
        result->type = ExprType.nilKeyword;
        result->idNode = ++ExprNode::max_id;
	    return result;
    }

    static ExprNode* ExprNode::createExprFromInt(int val) {
        ExprNode* result = new ExprNode;
        result->type = ExprType.intNumber;
        result->intValue = val;
        result->idNode = ++ExprNode::max_id;
	    return result;
    }

    static ExprNode* ExprNode::createExprFromFloat(float val) {
        ExprNode* result = new ExprNode;
        result->type = ExprType.floatNumber;
        result->floatValue = val;
        result->idNode = ++ExprNode::max_id;
	    return result;
    }

    static ExprNode* ExprNode::createExprFromBinOp(ExprType typeOp, ExprNode* left, ExprNode* right) {
        ExprNode* result = new ExprNode;
        result->type = typeOp;
        result->left = left;
        result->right = right;
        result->idNode = ++ExprNode::max_id;
	    return result;
    }

    static ExprNode* ExprNode::createExprFromFuncCall(ExprType* type, std::vector<ExprNode*>* params, string& id) {
        ExprNode* result = new ExprNode;
        result->type = type;
        result->params = params;
        result->varName = id;
        result->idNode = ++ExprNode::max_id;
	    return result;
    }

    static ExprNode* ExprNode::createExprFromUnary(ExprType typeOp, ExprNode* operand) {
        ExprNode* result = new ExprNode;
        result->type = typeOp;
        result->left = operand;
        result->idNode = ++ExprNode::max_id;
	    return result;
    }

    static ExprNode* ExprNode::createExprFromTernary(ExprNode* left, ExprNode* center, ExprNode* right) {
        ExprNode* result = new ExprNode;
        result->type = ExprType.ternaryOperator;
        result->left = left;
        result->center = center;
        result->right = right;
        result->idNode = ++ExprNode::max_id;
	    return result;
    }

    static ExprNode* ExprNode::createExprFromArray(ExprType* type, std::vector<ExprNode*>* list) {
        ExprNode* result = new ExprNode;
        result->type = type;
        result->arr=list;
        result->idNode = ++ExprNode::max_id;
	    return result;
    }

    static ExprNode* ExprNode::createExprFromSuper(ExprType* type, std::vector<ExprNode*>* params) {
        ExprNode* result = new ExprNode;
        result->type = type;
        result->params = params;
        result->idNode = ++ExprNode::max_id;
	    return result;
    }

    static ExprNode* createExprFromMethod(ExprType* type, std::vector<ExprNode*>* params, string& id, ExprNode* left) {
        ExprNode* result = new ExprNode;
        result->type = type;
        result->params = params;
        result->left = left;
        result->varName = id;
        result->idNode = ++ExprNode::max_id;
	    return result;
    }

};