
#include "tree.h"
#include <vector>

using namespace std;

tree::tree() {

}

//TODO: тут должен быть список всех ProgramElementNode
void tree::printTree(std::vector<ProgramElementNode*>* nodes) {
    outfile = ofstream("tree.dot");
    outfile << "digraph Tree {\n";

    printProgramElementNodeTree();

    outfile << "}\n";
    outfile.close();
}

void tree::printExprNodeTree(ExprNode *node) {}

void tree::printStmtNodeTree(StmtNode *node) {
    if (node != nullptr) {
       

        if (node->exprStmt != nullptr) {
            outfile << "stmt_" << node->idNode << " -> exprStmt_" << node->exprStmt->idNode << "\"];\n";
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
    if(node != nullptr) {
        outfile << "classStmt_" << node->idNode << " -> className_" << node->idNode << ";\n";
        outfile << "className_" << node->idNode << " -> " << node->className << ";\n";
        
        for(auto i : *(node->classBody)) {
            outfile << "classStmt_" << node->idNode << " -> classBodyStmt_" << i->idNode << ";\n";
            printClassBodyTree(i);
        }

        if(node->parentName != nullptr) {
            outfile << "classStmt_" << node->idNode << " -> parentName_" << node->idNode << ";\n";
            outfile << "parentName_" << node->idNode << " -> " << node->className << ";\n";
        }
    }
}