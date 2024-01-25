enum ExprType {
    id,
    objectVarName,
    classVarName,
    constantName,
    string,
    trueKeyword,
    falseKeyword,
    nilKeyword,
    intNumber,
    floatNumber,
    assign,
    array,
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
    callOfMethodMarkQuestion,
    callOfMethodMarkExclamation,
    callOfMethodEqual,
    self,
    selfMarkQuestion,
    selfMarkExclamation,
    selfEqual,
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
    combComprassion,
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
    ExclusiveRange,
    Brackets,
    squareBrackets,
    emptySquareBrackets,
    defined,
    doubleColon,
    doubleColonWithLeftOperand,
    ternaryOperator
};

class ExprNode {
public:
    ExprType type;
    int value;
    float value;
    string value;
    bool value;
    string varName;
    int idNode;
    ExprNode* left;
    ExprNode* center;
    ExprNode* right;
    std::vector<ExprNode*>* params;
    
    class var {
        string name;
        int id;
    }

    vector<var> vars;
};