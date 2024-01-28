
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
            outfile << "stmt_" << node->exprStmt << " [label=\"" << node->exprStmt << "\"];\n";
        }
        if (node->ifStmt != nullptr) {
            outfile << "stmt_" << node->ifStmt << " [label=\"" << node->ifStmt << "\"];\n";
        }

        if (node->whileStmt != nullptr) {
            outfile << "stmt_" << node->whileStmt << " [label=\"" << node->whileStmt << "\"];\n";
        }   

        if (node->forStmt != nullptr) {
            outfile << "stmt_" << node->forStmt << " [label=\"" << node->forStmt << "\"];\n";
        }

        if (node->caseStmt != nullptr) {
            outfile << "stmt_" << node->caseStmt << " [label=\"" << node->caseStmt << "\"];\n";
        }

        if (node->unlessStmt != nullptr) {
            outfile << "stmt_" << node->unlessStmt << " [label=\"" << node->unlessStmt << "\"];\n";
        }

        if (node->returnStmt != nullptr) {
            outfile << "stmt_" << node->returnStmt << " [label=\"" << node->returnStmt << "\"];\n";
        }

        if (node->aliasStmt != nullptr) {
            outfile << "stmt_" << node->aliasStmt << " [label=\"" << node->aliasStmt << "\"];\n";
            printStmtNodeTree(node)
        }
    }
}