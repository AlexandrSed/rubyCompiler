
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