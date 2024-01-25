enum ExprType {
    id,
    objectVarName,
    classVarName,
    constantName,
    stringType,
    trueKeyword,
    falseKeyword,
    nilKeyword,
    intNumber,
    floatNumber,
    assign,
    arrayElement,
    division,
    remainderOfDivision,
    multiplication,
    sum,
    subtraction,
    unaryMinus,
    superclass,
    function,
    funcWithoutParams,
    super,
    superWithoutParams,
    superWithoutParamsAndBrackets,
    callOfMethod,
    callOfMethodWithoutParams,
    callOfMethodMarkQuestion,
    callOfMethodMarkQuestionWithoutParams,
    callOfMethodMarkExclamation,
    callOfMethodMarkExclamationWithoutParams,
    callOfMethodEqual,
    callOfMethodEqualWithoutParams,
    self,
    selfWithoutParams,
    selfMarkQuestion,
    selfMarkQuestionWithoutParams,
    selfMarkExclamation,
    selfMarkExclamationWithoutParams,
    selfEqual,
    selfEqualWithoutParams,
    and,
    or,
    not,
    pow,
    equal,
    notEqual,
    greater,
    less,
    greaterOrEqual,
    lessOrEqual,
    combComparison,
    caseEqual,
    addAssign,
    subAssign,
    mulAssign,
    divAssign,
    modAssign,
    powAssign,
    binAnd,
    binOr,
    binXor,
    binOnesComplement,
    binLeftShift,
    binRightShift,
    logicalAnd,
    logicalOr,
    logicalNot,
    inclusiveRange,
    exclusiveRange,
    brackets,
    array,
    emptyArray,
    defined,
    doubleColon,
    doubleColonWithLeftOperand,
    ternaryOperator
};

class ExprNode {
public:
    ExprType type;
    int intValue;
    float floatValue;
    string strValue;
    bool boolValue;
    string varName;
    int idNode;
    ExprNode* left;
    ExprNode* center;
    ExprNode* right;
    std::vector<ExprNode*>* params;
    std::vector<ExprNode*>* list;

    static ExprNode* createExprFromVarName(ExprType* type, string& id);
    static ExprNode* createExprFromString(string& str);
    static ExprNode* createExprFromTrue();
    static ExprNode* createExprFromFalse();
    static ExprNode* createExprFromNil();
    static ExprNode* createExprFromInt(int val);
    static ExprNode* createExprFromFloat(float val);
    static ExprNode* createExprFromBinOp(ExprType typeOp, ExprNode* left, ExprNode* right);
    static ExprNode* createExprFromFuncCall(ExprType* type, std::vector<ExprNode*>* params, string& id);
    static ExprNode* createExprFromUnary(ExprType typeOp, ExprNode* operand);
    static ExprNode* createExprFromTernary(ExprNode* left, ExprNode* center, ExprNode* right);
    static ExprNode* createExprFromArray(ExprType* type, std::vector<ExprNode*>* list);
    static ExprNode* createExprFromSuper(ExprType* type, std::vector<ExprNode*>* params);
    static ExprNode* createExprFromMethod(ExprType* type, std::vector<ExprNode*>* params, string& id, ExprNode* left);
    static int maxId;
};