
#include "tree.h"
#include <vector>

using namespace std;

std::vector<ProgramElementNode*>* root;

tree::tree() {

}

//TODO: тут должен быть список всех ProgramElementNode
void tree::printTree(std::vector<ProgramElementNode*>* nodes) {
    outfile = ofstream("tree.dot");
    outfile << "digraph Tree {\n";

    if(nodes != nullptr) {
        for(auto i : *nodes) {
            outfile << "startSymbol -> programmElementStmt_" << i->idNode << ";\n";
            printProgramElementNodeTree(i);
        }
    }

    outfile << "}\n";
    outfile.close();
}


void tree::printStmtNodeTree(StmtNode *node) {
    printf("Node name: %s\n", typeid(node).name());
    if (node != nullptr) {
       

        if (node->exprStmt != nullptr) {
            outfile << "stmt_" << node->idNode << " -> exprStmt_" << node->exprStmt->idNode << ";\n";
            printExprNodeTree(node->exprStmt);
        }
        if (node->ifStmt != nullptr) {
            outfile << "stmt_" << node->idNode << " -> ifStmt_" << node->ifStmt->idNode << ";\n";
            printIfStmtTree(node->ifStmt);
        }

        if (node->whileStmt != nullptr) {
            outfile << "stmt_" << node->idNode << " -> whileStmt_" << node->whileStmt->idNode << ";\n";
            printWhileStmtTree(node->whileStmt);
        }   

        if (node->forStmt != nullptr) {
            outfile << "stmt_" << node->idNode << " -> forStmt_" << node->forStmt->idNode << ";\n";
            printForStmtTree(node->forStmt);
        }

        if (node->caseStmt != nullptr) {
            outfile << "stmt_" << node->idNode << " -> caseStmt_" << node->caseStmt->idNode << ";\n";
            printCaseStmtTree(node->caseStmt);
        }

        if (node->unlessStmt != nullptr) {
            outfile << "stmt_" << node->idNode << " -> unlessStmt_" << node->unlessStmt->idNode << ";\n";
            printUnlessStmtTree(node->unlessStmt);
        }

        if (node->returnStmt != nullptr) {
            outfile << "stmt_" << node->idNode << " -> returnStmt_" << node->returnStmt->idNode << ";\n";
            printReturnStmtTree(node->returnStmt);
        }

        if (node->aliasStmt != nullptr) {
            outfile << "stmt_" << node->idNode << " -> aliasStmt_" << node->aliasStmt->idNode << ";\n";
            prinAliasStmtTree(node->aliasStmt);
        }
    }
}

void tree::printIfStmtTree(IfStmtNode *node) {
    printf("Node name: %s\n", typeid(node).name());
    if (node != nullptr) {
        outfile << "ifStmt_" << node->idNode << " -> expr_" << node->condition->idNode << ";\n";
        printExprNodeTree(node->condition);
        for (auto i : *(node->trueBranch)) {
            outfile << "ifStmt_" << node->idNode << " -> stmt_" << i->idNode << ";\n";
            printStmtNodeTree(i);
            
        }
        if (node->falseBranch != nullptr) {
            for (auto i : *(node->falseBranch)) {
                outfile << "ifStmt_" << node->idNode << " -> stmt_" << i->idNode << ";\n";
                printStmtNodeTree(i);
            }
        }
        if (node->elsif != nullptr) {
            for (auto i : *(node->elsif)) {
                outfile << "ifStmt_" << node->idNode << " -> elsifStmt_" << i->idNode << ";\n";
                printElseifNodeTree(i);
            }
        }
        if (node->action != nullptr) {
            outfile << "ifStmt_" << node->idNode << " -> expr_" << node->action->idNode << ";\n";
            printExprNodeTree(node->action);

        }
    }
}

void tree::printCaseStmtTree(CaseStmtNode* node) {
    printf("Node name: %s\n", typeid(node).name());
    if(node != nullptr) {
        outfile << "caseStmt_" << node->idNode << " -> expr_" << node->condition->idNode << ";\n";
        printExprNodeTree(node->condition);

        for(auto i : *(node->whenList)) {
            outfile << "caseStmt_" << node->idNode << " -> whenStmt_" << i->idNode << ";\n";
            printWhenStmtTree(i);
        }

        if(node->falseBranch != nullptr) {
            for(auto i : *(node->falseBranch)) {
                outfile << "caseStmt_" << node->idNode << " -> stmt_" << i->idNode << ";\n";
                printStmtNodeTree(i);
            }
        }
    }
}

void tree::printClassBodyTree(ClassBodyStmtNode* node) {
    printf("Node name: %s\n", typeid(node).name());
    if(node != nullptr) {
        if(node->method != nullptr) {
            outfile << "classBodyStmt_" << node->idNode << " -> methodStmt_" << node->method->idNode << ";\n";
            printMethodStmtNodeTree(node->method);
        }

        if(node->classVarName != nullptr) {
            outfile << "classBodyStmt_" << node->idNode << " -> classVarName_" << node->idNode << ";\n";
            outfile << "classVarName_" << node->idNode << " -> " << node->classVarName << ";\n";
        }

        if(node->objectVarName != nullptr) {
            outfile << "classBodyStmt_" << node->idNode << " -> objectVarName_" << node->idNode << ";\n";
            outfile << "objectVarName_" << node->idNode << " -> " << node->objectVarName << ";\n";
        }

        if(node->value != nullptr) {
            outfile << "classBodyStmt_" << node->idNode << " -> expr_" << node->value->idNode << ";\n";
            printExprNodeTree(node->value);
        }
    }
}

void tree::printClassStmt(ClassStmtNode* node) {
    printf("Node name: %s\n", typeid(node).name());
    if(node != nullptr) {
        outfile << "classStmt_" << node->idNode << " -> className_" << node->idNode << ";\n";
        outfile << "className_" << node->idNode << " -> " << (*node->className) << "_" << node->idNode << ";\n";
        
        for(auto i : *(node->classBody)) {
            outfile << "classStmt_" << node->idNode << " -> classBodyStmt_" << i->idNode << ";\n";
            printClassBodyTree(i);
        }

        if(node->parentName != nullptr) {
            outfile << "classStmt_" << node->idNode << " -> parentName_" << node->idNode << ";\n";
            outfile << "parentName_" << node->idNode << " -> " << (*node->className) << ";\n";
        }
    }
}

void tree::printElseifNodeTree(ElsifNode* node) {
    printf("Node name: %s\n", typeid(node).name());
    if(node != nullptr) {
        outfile << "elsifStmt_" << node->idNode << " -> expr_" << node->condition->idNode << ";\n";
        printExprNodeTree(node->condition);

        for(auto i : *(node->action)) {
            outfile << "elsifStmt_" << node->idNode << " -> stmt_" << i->idNode << ";\n";
        }
    }
}

void tree::printForStmtTree(ForStmtNode *node) {
    printf("Node name: %s\n", typeid(node).name());
    if(node != nullptr) {
        if (node->variable != nullptr) {
            outfile << "forStmt_" << node->idNode << " -> expr_" << node->variable->idNode << ";\n";
            printExprNodeTree(node->variable);
        }

        if (node->array != nullptr) {
            outfile << "forStmt_" << node->idNode << " -> expr_" << node->array->idNode << ";\n";
            printExprNodeTree(node->array);
        }

        for (auto i : *(node->body)) {
            outfile << "forStmt_" << node->idNode << " -> stmt_" << i->idNode << ";\n";
            printStmtNodeTree(i);
        }
    }
}

void tree::prinAliasStmtTree(AliasStmtNode *node) {
    printf("Node name: %s\n", typeid(node).name());
    if(node != nullptr) {
        if (node->startName != nullptr) {
            outfile << "aliasStmt_" << node->idNode << " -> alias_" << node->idNode << ";\n";
            outfile << "alias_" << node->idNode << " -> " << node->alias << ";\n";
            outfile << "aliasStmt_" << node->idNode << " -> startName_" << node->idNode << ";\n";
            outfile << "startName_" << node->idNode << " -> " << node->startName << ";\n";
        }
    }
}



void tree::printExprNodeTree(ExprNode* node) {
    printf("Node name: %s\n", typeid(node).name());
    if(node != nullptr) {
        if(node->type == ExprType::addAssign) {
            outfile << "expr_" << node->idNode << " -> addAssign_" << node->idNode << ";\n";
            outfile << "addAssign_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);

            outfile << "addAssign_" << node->idNode << " -> expr_" << node->right->idNode << ";\n";
            printExprNodeTree(node->right);
        }
        else if(node->type == ExprType::andType) {
            outfile << "expr_" << node->idNode << " -> andType_" << node->idNode << ";\n";
            outfile << "andType_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);

            outfile << "andType_" << node->idNode << " -> expr_" << node->right->idNode << ";\n";
            printExprNodeTree(node->right);
        }
        else if(node->type == ExprType::array) {
            outfile << "expr_" << node->idNode << " -> array_" << node->idNode << ";\n";
            
            for(auto i : *(node->list)) {
                outfile << "array_" << node->idNode << " -> expr_" << i->idNode << ";\n";
                printExprNodeTree(i);
            }
        }
        else if(node->type == ExprType::arrayElement) {
            outfile << "expr_" << node->idNode << " -> arrayElement_" << node->idNode << ";\n";
            outfile << "arrayElement_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);

            outfile << "arrayElement_" << node->idNode << " -> expr_" << node->right->idNode << ";\n";
            printExprNodeTree(node->right);
        }
        else if(node->type == ExprType::assign) {
            outfile << "expr_" << node->idNode << " -> assign_" << node->idNode << ";\n";
            outfile << "assign_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);

            outfile << "assign_" << node->idNode << " -> expr_" << node->right->idNode << ";\n";
            printExprNodeTree(node->right);
        }
        else if(node->type == ExprType::binAnd) {
            outfile << "expr_" << node->idNode << " -> binAnd_" << node->idNode << ";\n";
            outfile << "binAnd_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);

            outfile << "binAnd_" << node->idNode << " -> expr_" << node->right->idNode << ";\n";
            printExprNodeTree(node->right);
        }
        else if(node->type == ExprType::binLeftShift) {
            outfile << "expr_" << node->idNode << " -> binLeftShift_" << node->idNode << ";\n";
            outfile << "binLeftShift_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);

            outfile << "binLeftShift_" << node->idNode << " -> expr_" << node->right->idNode << ";\n";
            printExprNodeTree(node->right);
        }
        else if(node->type == ExprType::binOnesComplement) {
            outfile << "expr_" << node->idNode << " -> binOnesComplement_" << node->idNode << ";\n";
            outfile << "binOnesComplement_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);

            outfile << "binOnesComplement_" << node->idNode << " -> expr_" << node->right->idNode << ";\n";
            printExprNodeTree(node->right);
        }
        else if(node->type == ExprType::binOr) {
            outfile << "expr_" << node->idNode << " -> binOr_" << node->idNode << ";\n";
            outfile << "binOr_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);

            outfile << "binOr_" << node->idNode << " -> expr_" << node->right->idNode << ";\n";
            printExprNodeTree(node->right);
        }
        else if(node->type == ExprType::binRightShift) {
            outfile << "expr_" << node->idNode << " -> binRightShift_" << node->idNode << ";\n";
            outfile << "binRightShift_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);

            outfile << "binRightShift_" << node->idNode << " -> expr_" << node->right->idNode << ";\n";
            printExprNodeTree(node->right);
        }
        else if(node->type == ExprType::binXor) {
            outfile << "expr_" << node->idNode << " -> binXor_" << node->idNode << ";\n";
            outfile << "binXor_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);

            outfile << "binXor_" << node->idNode << " -> expr_" << node->right->idNode << ";\n";
            printExprNodeTree(node->right);
        }
        else if(node->type == ExprType::brackets) {
            outfile << "expr_" << node->idNode << " -> brackets_" << node->idNode << ";\n";
            outfile << "brackets_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);
        }
        else if(node->type == ExprType::callOfMethod) {
            outfile << "expr_" << node->idNode << " -> callOfMethod_" << node->idNode << ";\n";
            outfile << "callOfMethod_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);

            outfile << "callOfMethod_" << node->idNode << " -> \"" << (*node->varName) << "_" << node->idNode << "\";\n";
            
            for(auto i : *(node->params)) {
                outfile << "callOfMethod_" << node->idNode << " -> expr_" << i->idNode << ";\n";
                printExprNodeTree(i);
            }
        }
        else if(node->type == ExprType::callOfMethodEqual) {
            outfile << "expr_" << node->idNode << " -> callOfMethodEqual_" << node->idNode << ";\n";
            outfile << "callOfMethodEqual_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);

            outfile << "callOfMethodEqual_" << node->idNode << " -> \"" << (*node->varName) << "_" << node->idNode << "\";\n";
            
            for(auto i : *(node->params)) {
                outfile << "callOfMethodEqual_" << node->idNode << " -> expr_" << i->idNode << ";\n";
                printExprNodeTree(i);
            }
        }
        else if(node->type == ExprType::callOfMethodEqualWithoutParams) {
            outfile << "expr_" << node->idNode << " -> callOfMethodEqualWithoutParams_" << node->idNode << ";\n";
            outfile << "callOfMethodEqualWithoutParams_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);

            outfile << "callOfMethodEqualWithoutParams_" << node->idNode << " -> \"" << (*node->varName) << "_" << node->idNode << "\";\n";
        }
        else if(node->type == ExprType::callOfMethodMarkExclamation) {
            outfile << "expr_" << node->idNode << " -> callOfMethodMarkExclamation_" << node->idNode << ";\n";
            outfile << "callOfMethodMarkExclamation_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);

            outfile << "callOfMethodMarkExclamation_" << node->idNode << " -> \"" << (*node->varName) << "_" << node->idNode << "\";\n";
            
            for(auto i : *(node->params)) {
                outfile << "callOfMethodMarkExclamation_" << node->idNode << " -> expr_" << i->idNode << ";\n";
                printExprNodeTree(i);
            }
        }
        else if(node->type == ExprType::callOfMethodMarkExclamationWithoutParams) {
            outfile << "expr_" << node->idNode << " -> callOfMethodMarkExclamationWithoutParams_" << node->idNode << ";\n";
            outfile << "callOfMethodMarkExclamationWithoutParams_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);

            outfile << "callOfMethodMarkExclamationWithoutParams_" << node->idNode << " -> \"" << (*node->varName) << "_" << node->idNode << "\";\n";
        }
        else if(node->type == ExprType::callOfMethodMarkQuestion) {
            outfile << "expr_" << node->idNode << " -> callOfMethodMarkQuestion_" << node->idNode << ";\n";
            outfile << "callOfMethodMarkQuestion_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);

            outfile << "callOfMethodMarkQuestion_" << node->idNode << " -> \"" << (*node->varName) << "_" << node->idNode << "\";\n";
            
            for(auto i : *(node->params)) {
                outfile << "callOfMethodMarkQuestion_" << node->idNode << " -> expr_" << i->idNode << ";\n";
                printExprNodeTree(i);
            }
        }
        else if(node->type == ExprType::callOfMethodMarkQuestionWithoutParams) {
            outfile << "expr_" << node->idNode << " -> callOfMethodMarkQuestionWithoutParams_" << node->idNode << ";\n";
            outfile << "callOfMethodMarkQuestionWithoutParams_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);

            outfile << "callOfMethodMarkQuestionWithoutParams_" << node->idNode << " -> \"" << (*node->varName) << "_" << node->idNode << "\";\n";
        }
        else if(node->type == ExprType::callOfMethodWithoutParams) {
            outfile << "expr_" << node->idNode << " -> callOfMethodWithoutParams_" << node->idNode << ";\n";
            outfile << "callOfMethodWithoutParams_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);

            outfile << "callOfMethodWithoutParams_" << node->idNode << " -> \"" << (*node->varName) << "_" << node->idNode << "\";\n";
        }
        else if(node->type == ExprType::caseEqual) {
            outfile << "expr_" << node->idNode << " -> caseEqual_" << node->idNode << ";\n";
            outfile << "caseEqual_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);

            outfile << "caseEqual_" << node->idNode << " -> expr_" << node->right->idNode << ";\n";
            printExprNodeTree(node->right);
        }
        else if(node->type == ExprType::classVarName) {
            outfile << "expr_" << node->idNode << " -> classVarName_" << node->idNode << ";\n";
            outfile << "classVarName_" << node->idNode << " -> \"" << (*node->varName) << "_" << node->idNode << "\";\n";
        }
        else if(node->type == ExprType::combComparison) {
            outfile << "expr_" << node->idNode << " -> combComparison_" << node->idNode << ";\n";
            outfile << "combComparison_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);

            outfile << "combComparison_" << node->idNode << " -> expr_" << node->right->idNode << ";\n";
            printExprNodeTree(node->right);
        }
        else if(node->type == ExprType::constantName) {
            outfile << "expr_" << node->idNode << " -> constantName_" << node->idNode << ";\n";
            outfile << "constantName_" << node->idNode << " -> \"" << (*node->varName) << "_" << node->idNode << "\";\n";
        }
        else if(node->type == ExprType::defined) {
            outfile << "expr_" << node->idNode << " -> defined_" << node->idNode << ";\n";
            outfile << "defined_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);
        }
        else if(node->type == ExprType::divAssign) {
            outfile << "expr_" << node->idNode << " -> divAssign_" << node->idNode << ";\n";
            outfile << "divAssign_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);

            outfile << "divAssign_" << node->idNode << " -> expr_" << node->right->idNode << ";\n";
            printExprNodeTree(node->right);
        }
        else if(node->type == ExprType::division) {
            outfile << "expr_" << node->idNode << " -> division_" << node->idNode << ";\n";
            outfile << "division_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);

            outfile << "division_" << node->idNode << " -> expr_" << node->right->idNode << ";\n";
            printExprNodeTree(node->right);
        }
        else if(node->type == ExprType::doubleColon) {
            outfile << "expr_" << node->idNode << " -> doubleColon_" << node->idNode << ";\n";
            outfile << "doubleColon_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);
        }
        else if(node->type == ExprType::doubleColonWithLeftOperand) {
            outfile << "expr_" << node->idNode << " -> doubleColonWithLeftOperand_" << node->idNode << ";\n";
            outfile << "doubleColonWithLeftOperand_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);

            outfile << "doubleColonWithLeftOperand_" << node->idNode << " -> expr_" << node->right->idNode << ";\n";
            printExprNodeTree(node->right);
        }
        else if(node->type == ExprType::emptyArray) {
            outfile << "expr_" << node->idNode << " -> emptyArray_" << node->idNode << ";\n";
        }
        else if(node->type == ExprType::equal) {
            outfile << "expr_" << node->idNode << " -> equal_" << node->idNode << ";\n";
            outfile << "equal_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);

            outfile << "equal_" << node->idNode << " -> expr_" << node->right->idNode << ";\n";
            printExprNodeTree(node->right);
        }
        else if(node->type == ExprType::exclusiveRange) {
            outfile << "expr_" << node->idNode << " -> exclusiveRange_" << node->idNode << ";\n";
            outfile << "exclusiveRange_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);

            outfile << "exclusiveRange_" << node->idNode << " -> expr_" << node->right->idNode << ";\n";
            printExprNodeTree(node->right);
        }
        else if(node->type == ExprType::falseKeyword) {
            outfile << "expr_" << node->idNode << " -> falseKeyword_" << node->idNode << ";\n";
            outfile << "falseKeyword_" << node->idNode << " -> " << node->boolValue << ";\n";
        }
        else if(node->type == ExprType::floatNumber) {
            outfile << "expr_" << node->idNode << " -> floatNumber_" << node->idNode << ";\n";
            outfile << "floatNumber_" << node->idNode << " -> \"" <<node->floatValue << "_" << node->idNode << "\";\n";
        }
        else if(node->type == ExprType::function) {
            outfile << "expr_" << node->idNode << " -> function_" << node->idNode << ";\n";

            outfile << "function_" << node->idNode << " -> \"" << (*node->varName) << "_" << node->idNode << "\";\n";
            
            for(auto i : *(node->params)) {
                outfile << "function_" << node->idNode << " -> expr_" << i->idNode << ";\n";
                printExprNodeTree(i);
            }
        }
        else if(node->type == ExprType::funcWithoutParams) {
            outfile << "expr_" << node->idNode << " -> funcWithoutParams_" << node->idNode << ";\n";

            outfile << "funcWithoutParams_" << node->idNode << " -> \"" << (*node->varName) << "_" << node->idNode << "\";\n";
        }
        else if(node->type == ExprType::greater) {
            outfile << "expr_" << node->idNode << " -> greater_" << node->idNode << ";\n";
            outfile << "greater_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);

            outfile << "greater_" << node->idNode << " -> expr_" << node->right->idNode << ";\n";
            printExprNodeTree(node->right);
        }
        else if(node->type == ExprType::greaterOrEqual) {
            outfile << "expr_" << node->idNode << " -> greaterOrEqual_" << node->idNode << ";\n";
            outfile << "greaterOrEqual_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);

            outfile << "greaterOrEqual_" << node->idNode << " -> expr_" << node->right->idNode << ";\n";
            printExprNodeTree(node->right);
        }
        else if(node->type == ExprType::id) {
            outfile << "expr_" << node->idNode << " -> id_" << node->idNode << ";\n";
            outfile << "id_" << node->idNode << " -> \"" << (*node->varName) << "_" << node->idNode << "\" ;\n";
        }
        else if(node->type == ExprType::inclusiveRange) {
            outfile << "expr_" << node->idNode << " -> inclusiveRange_" << node->idNode << ";\n";
            outfile << "inclusiveRange_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);

            outfile << "inclusiveRange_" << node->idNode << " -> expr_" << node->right->idNode << ";\n";
            printExprNodeTree(node->right);
        }
        else if(node->type == ExprType::intNumber) {
            outfile << "expr_" << node->idNode << " -> intNumber_" << node->idNode << ";\n";
            outfile << "intNumber_" << node->idNode << " -> \"" << node->intValue << "_" << node->idNode << "\";\n";
        }
        else if(node->type == ExprType::less) {
            outfile << "expr_" << node->idNode << " -> less_" << node->idNode << ";\n";
            outfile << "less_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);

            outfile << "less_" << node->idNode << " -> expr_" << node->right->idNode << ";\n";
            printExprNodeTree(node->right);
        }
        else if(node->type == ExprType::lessOrEqual) {
            outfile << "expr_" << node->idNode << " -> lessOrEqual_" << node->idNode << ";\n";
            outfile << "lessOrEqual_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);

            outfile << "lessOrEqual_" << node->idNode << " -> expr_" << node->right->idNode << ";\n";
            printExprNodeTree(node->right);
        }
        else if(node->type == ExprType::logicalAnd) {
            outfile << "expr_" << node->idNode << " -> logicalAnd_" << node->idNode << ";\n";
            outfile << "logicalAnd_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);

            outfile << "logicalAnd_" << node->idNode << " -> expr_" << node->right->idNode << ";\n";
            printExprNodeTree(node->right);
        }
        else if(node->type == ExprType::logicalNot) {
            outfile << "expr_" << node->idNode << " -> logicalNot_" << node->idNode << ";\n";
            outfile << "logicalNot_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);
        }
        else if(node->type == ExprType::logicalOr) {
            outfile << "expr_" << node->idNode << " -> logicalOr_" << node->idNode << ";\n";
            outfile << "logicalOr_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);

            outfile << "logicalOr_" << node->idNode << " -> expr_" << node->right->idNode << ";\n";
            printExprNodeTree(node->right);
        }
        else if(node->type == ExprType::modAssign) {
            outfile << "expr_" << node->idNode << " -> modAssign_" << node->idNode << ";\n";
            outfile << "modAssign_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);

            outfile << "modAssign_" << node->idNode << " -> expr_" << node->right->idNode << ";\n";
            printExprNodeTree(node->right);
        }
        else if(node->type == ExprType::mulAssign) {
            outfile << "expr_" << node->idNode << " -> mulAssign_" << node->idNode << ";\n";
            outfile << "mulAssign_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);

            outfile << "mulAssign_" << node->idNode << " -> expr_" << node->right->idNode << ";\n";
            printExprNodeTree(node->right);
        }
        else if(node->type == ExprType::multiplication) {
            outfile << "expr_" << node->idNode << " -> multiplication_" << node->idNode << ";\n";
            outfile << "multiplication_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);

            outfile << "multiplication_" << node->idNode << " -> expr_" << node->right->idNode << ";\n";
            printExprNodeTree(node->right);
        }
        else if(node->type == ExprType::nilKeyword) {
            outfile << "expr_" << node->idNode << " -> nilKeyword_" << node->idNode << ";\n";
        }
        else if(node->type == ExprType::notEqual) {
            outfile << "expr_" << node->idNode << " -> notEqual_" << node->idNode << ";\n";
            outfile << "notEqual_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);

            outfile << "notEqual_" << node->idNode << " -> expr_" << node->right->idNode << ";\n";
            printExprNodeTree(node->right);
        }
        else if(node->type == ExprType::notType) {
            outfile << "expr_" << node->idNode << " -> notType_" << node->idNode << ";\n";
            outfile << "notType_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);
        }
        else if(node->type == ExprType::objectVarName) {
            outfile << "expr_" << node->idNode << " -> objectVarName_" << node->idNode << ";\n";
            outfile << "objectVarName_" << node->idNode << " -> \"" << (*node->varName) << "_" << node->idNode << "\";\n";
        }
        else if(node->type == ExprType::orType) {
            outfile << "expr_" << node->idNode << " -> orType_" << node->idNode << ";\n";
            outfile << "orType_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);

            outfile << "orType_" << node->idNode << " -> expr_" << node->right->idNode << ";\n";
            printExprNodeTree(node->right);
        }
        else if(node->type == ExprType::pow) {
            outfile << "expr_" << node->idNode << " -> pow_" << node->idNode << ";\n";
            outfile << "pow_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);

            outfile << "pow_" << node->idNode << " -> expr_" << node->right->idNode << ";\n";
            printExprNodeTree(node->right);
        }
        else if(node->type == ExprType::powAssign) {
            outfile << "expr_" << node->idNode << " -> powAssign_" << node->idNode << ";\n";
            outfile << "powAssign_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);

            outfile << "powAssign_" << node->idNode << " -> expr_" << node->right->idNode << ";\n";
            printExprNodeTree(node->right);
        }
        else if(node->type == ExprType::remainderOfDivision) {
            outfile << "expr_" << node->idNode << " -> remainderOfDivision_" << node->idNode << ";\n";
            outfile << "remainderOfDivision_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);

            outfile << "remainderOfDivision_" << node->idNode << " -> expr_" << node->right->idNode << ";\n";
            printExprNodeTree(node->right);
        }
        else if(node->type == ExprType::self) {
            outfile << "expr_" << node->idNode << " -> self_" << node->idNode << ";\n";

            outfile << "self_" << node->idNode << " -> \"" << (*node->varName) << "_" << node->idNode << "\";\n";
            
            for(auto i : *(node->params)) {
                outfile << "self_" << node->idNode << " -> expr_" << i->idNode << ";\n";
                printExprNodeTree(i);
            }
        }
        else if(node->type == ExprType::selfEqual) {
            outfile << "expr_" << node->idNode << " -> selfEqual_" << node->idNode << ";\n";

            outfile << "selfEqual_" << node->idNode << " -> \"" << (*node->varName) << "_" << node->idNode << "\";\n";
            
            for(auto i : *(node->params)) {
                outfile << "selfEqual_" << node->idNode << " -> expr_" << i->idNode << ";\n";
                printExprNodeTree(i);
            }
        }
        else if(node->type == ExprType::selfEqualWithoutParams) {
            outfile << "expr_" << node->idNode << " -> selfEqualWithoutParams_" << node->idNode << ";\n";

            outfile << "selfEqualWithoutParams_" << node->idNode << " -> \"" << (*node->varName) << "_" << node->idNode << "\";\n";
            
            for(auto i : *(node->params)) {
                outfile << "selfEqualWithoutParams_" << node->idNode << " -> expr_" << i->idNode << ";\n";
                printExprNodeTree(i);
            }
        }
        else if(node->type == ExprType::selfMarkExclamation) {
            outfile << "expr_" << node->idNode << " -> selfMarkExclamation_" << node->idNode << ";\n";

            outfile << "selfMarkExclamation_" << node->idNode << " -> \"" << (*node->varName) << "_" << node->idNode << "\";\n";
            
            for(auto i : *(node->params)) {
                outfile << "selfMarkExclamation_" << node->idNode << " -> expr_" << i->idNode << ";\n";
                printExprNodeTree(i);
            }
        }
        else if(node->type == ExprType::selfMarkExclamationWithoutParams) {
            outfile << "expr_" << node->idNode << " -> selfMarkExclamationWithoutParams_" << node->idNode << ";\n";

            outfile << "selfMarkExclamationWithoutParams_" << node->idNode << " -> \"" << (*node->varName) << "_" << node->idNode << "\";\n";
        }
        else if(node->type == ExprType::selfMarkQuestion) {
            outfile << "expr_" << node->idNode << " -> selfMarkQuestion_" << node->idNode << ";\n";

            outfile << "selfMarkQuestion_" << node->idNode << " -> \"" << (*node->varName) << "_" << node->idNode << "\";\n";
            
            for(auto i : *(node->params)) {
                outfile << "selfMarkQuestion_" << node->idNode << " -> expr_" << i->idNode << ";\n";
                printExprNodeTree(i);
            }
        }
        else if(node->type == ExprType::selfMarkQuestionWithoutParams) {
            outfile << "expr_" << node->idNode << " -> selfMarkQuestionWithoutParams_" << node->idNode << ";\n";

            outfile << "selfMarkQuestionWithoutParams_" << node->idNode << " -> \"" << (*node->varName) << "_" << node->idNode << "\";\n";
        }
        else if(node->type == ExprType::selfWithoutParams) {
            outfile << "expr_" << node->idNode << " -> selfWithoutParams_" << node->idNode << ";\n";

            outfile << "selfWithoutParams_" << node->idNode << " -> \"" << (*node->varName) << "_" << node->idNode << "\";\n";
        }
        else if(node->type == ExprType::stringType) {
            outfile << "expr_" << node->idNode << " -> stringType_" << node->idNode << ";\n";
            outfile << "stringType_" << node->idNode << " -> \"" << (*node->strValue) << "\";\n";
        }
        else if(node->type == ExprType::subAssign) {
            outfile << "expr_" << node->idNode << " -> subAssign_" << node->idNode << ";\n";
            outfile << "subAssign_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);

            outfile << "subAssign_" << node->idNode << " -> expr_" << node->right->idNode << ";\n";
            printExprNodeTree(node->right);
        }
        else if(node->type == ExprType::subtraction) {
            outfile << "expr_" << node->idNode << " -> subtraction_" << node->idNode << ";\n";
            outfile << "subtraction_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);

            outfile << "subtraction_" << node->idNode << " -> expr_" << node->right->idNode << ";\n";
            printExprNodeTree(node->right);
        }
        else if(node->type == ExprType::sum) {
            outfile << "expr_" << node->idNode << " -> sum_" << node->idNode << ";\n";
            outfile << "sum_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);

            outfile << "sum_" << node->idNode << " -> expr_" << node->right->idNode << ";\n";
            printExprNodeTree(node->right);
        }
        else if(node->type == ExprType::super) {
            outfile << "expr_" << node->idNode << " -> super_" << node->idNode << ";\n";

            for(auto i : *(node->params)) {
                outfile << "super_" << node->idNode << " -> expr_" << i->idNode << ";\n";
                printExprNodeTree(i);
            }
        }
        else if(node->type == ExprType::superclass) {
            outfile << "expr_" << node->idNode << " -> superclass_" << node->idNode << ";\n";
            outfile << "superclass_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);
        }
        else if(node->type == ExprType::superWithoutParams) {
            outfile << "expr_" << node->idNode << " -> superWithoutParams_" << node->idNode << ";\n";
        }
        else if(node->type == ExprType::superWithoutParamsAndBrackets) {
            outfile << "expr_" << node->idNode << " -> superWithoutParamsAndBrackets_" << node->idNode << ";\n";
        }
        else if(node->type == ExprType::ternaryOperator) {
            outfile << "expr_" << node->idNode << " -> ternaryOperator_" << node->idNode << ";\n";
            outfile << "ternaryOperator_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);

            outfile << "ternaryOperator_" << node->idNode << " -> expr_" << node->center->idNode << ";\n";
            printExprNodeTree(node->center);

            outfile << "ternaryOperator_" << node->idNode << " -> expr_" << node->right->idNode << ";\n";
            printExprNodeTree(node->right);
        }
        else if(node->type == ExprType::trueKeyword) {
            outfile << "expr_" << node->idNode << " -> trueKeyword_" << node->idNode << ";\n";
            outfile << "trueKeyword_" << node->idNode << " -> " << node->boolValue << ";\n";
        }
        else if(node->type == ExprType::unaryMinus) {
            outfile << "expr_" << node->idNode << " -> unaryMinus_" << node->idNode << ";\n";
            outfile << "unaryMinus_" << node->idNode << " -> expr_" << node->left->idNode << ";\n";
            printExprNodeTree(node->left);
        }
    }
}

void tree::printWhileStmtTree(WhileStmtNode *node) {
    printf("Node name: %s\n", typeid(node).name());
    if(node != nullptr) {
        outfile << "whileStmt_" << node->idNode << " -> expr_" << node->condition->idNode << ";\n";
        printExprNodeTree(node->condition);

        for(auto i : *(node->body)) {
            outfile << "whileStmt_" << node->idNode << " -> stmt_" << i->idNode << ";\n";
            printStmtNodeTree(i);
        }

    }
}

void tree::printMethodStmtNodeTree(MethodStmtNode* node) {
    printf("Node name: %s\n", typeid(node).name());
    if(node != nullptr) {
        if(node->type == MethodType::markEqual) {
            outfile << "methodStmt_" << node->idNode << " -> markEqual_" << node->idNode <<";\n";
            outfile << "markEqual_" << node->idNode << " -> " << (*node->methodName) << ";\n";

            if(node->paramList != nullptr) {
                for (auto i : *(node->paramList)) {
                    outfile << "markEqual_" << node->idNode << " -> " << i << ";\n";
                }
            }

            for (auto i : *(node->body)) {
                outfile << "markEqual_" << node->idNode << " -> stmt_" << i->idNode << ";\n";
                printStmtNodeTree(i);
                
            }
        }
        else if(node->type == MethodType::markExclamation) {
            outfile << "methodStmt_" << node->idNode << " -> markExclamation_" << node->idNode <<";\n";
            outfile << "markExclamation_" << node->idNode << " -> " << (*node->methodName) << ";\n";

            if(node->paramList != nullptr) {
                for (auto i : *(node->paramList)) {
                    outfile << "markExclamation_" << node->idNode << " -> " << i << ";\n";
                }
            }

            for (auto i : *(node->body)) {
                outfile << "markExclamation_" << node->idNode << " -> stmt_" << i->idNode << ";\n";
                printStmtNodeTree(i);
                
            }
        }
        else if(node->type == MethodType::markQuestion) {
            outfile << "methodStmt_" << node->idNode << " -> markQuestion_" << node->idNode <<";\n";
            outfile << "markQuestion_" << node->idNode << " -> " << (*node->methodName) << ";\n";

            if(node->paramList != nullptr) {
                for (auto i : *(node->paramList)) {
                    outfile << "markQuestion_" << node->idNode << " -> " << i << ";\n";
                }
            }

            for (auto i : *(node->body)) {
                outfile << "markQuestion_" << node->idNode << " -> stmt_" << i->idNode << ";\n";
                printStmtNodeTree(i);
                
            }
        }
        else if(node->type == MethodType::simple) {
            outfile << "methodStmt_" << node->idNode << " -> simple_" << node->idNode <<";\n";
            outfile << "simple_" << node->idNode << " -> \"" << (*node->methodName) << "_" << node->idNode << "\";\n";

            if(node->paramList != nullptr) {
                for (auto i : *(node->paramList)) {
                    outfile << "simple_" << node->idNode << " -> " << *i << ";\n";
                }
            }

            for (auto i : *(node->body)) {
                outfile << "simple_" << node->idNode << " -> stmt_" << i->idNode << ";\n";
                printStmtNodeTree(i);
                
            }
        }
    }
}

void tree::printWhenStmtTree(WhenStmtNode *node) {
    printf("Node name: %s\n", typeid(node).name());
    if(node != nullptr) {
        for (auto i : *(node->condition)) {
            outfile << "whenStmt_" << node->idNode << " -> expr_" << i->idNode << ";\n";
            printExprNodeTree(i);
        }

        for (auto i : *(node->action)) {
            outfile << "whenStmt_" << node->idNode << " -> stmt_" << i->idNode << ";\n";
            printStmtNodeTree(i);
        }
    }
}

void tree::printReturnStmtTree(ReturnStmtNode *node) {
    printf("Node name: %s\n", typeid(node).name());
    if(node != nullptr && node->returnValue != nullptr) {

        outfile << "returnStmt_" << node->idNode << " -> expr_" << node->returnValue->idNode << ";\n";
        printExprNodeTree(node->returnValue);
    }
}

void tree::printUnlessStmtTree(UnlessStmtNode *node) {
    printf("Node name: %s\n", typeid(node).name());
    if(node != nullptr) {
        outfile << "unlessStmt_" << node->idNode << " -> expr_" << node->condition->idNode << ";\n";
        printExprNodeTree(node->condition);

        if (node->trueBranch != nullptr) {
            for (auto i : *(node->trueBranch)) {
                outfile << "unlessStmt_" << node->idNode << " -> stmt_" << i->idNode << ";\n";
                printStmtNodeTree(i);
            }
        }

        if (node->falseBranch != nullptr) {
            for (auto i : *(node->falseBranch)) {
                outfile << "unlessStmt_" << node->idNode << " -> stmt_" << i->idNode << ";\n";
                printStmtNodeTree(i);
            }
        }

        if (node->action != nullptr) {
            outfile << "unlessStmt_" << node->idNode << " -> expr_" << node->action->idNode << ";\n";
            printExprNodeTree(node->action);
        }
    }
}

void tree::printProgramElementNodeTree(ProgramElementNode *node) {
    printf("Node name: %s\n", typeid(node).name());
    if(node != nullptr) {
        if(node->classNode != nullptr) {
            outfile << "programmElement_" << node->idNode << " -> classStmt_" << node->classNode->idNode << ";\n";
            printClassStmt(node->classNode);
        }

        if(node->methodNode != nullptr) {
            outfile << "programmElement_" << node->idNode << " -> methodStmt_" << node->methodNode->idNode << ";\n";
            printMethodStmtNodeTree(node->methodNode);
        }

        if(node->stmtNode != nullptr) {
            outfile << "programmElement_" << node->idNode << " -> stmt_" << node->stmtNode->idNode << ";\n";
            printStmtNodeTree(node->stmtNode);
        }
    }
}