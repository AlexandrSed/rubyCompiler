#ifndef COMPILERLAB_TREE_H
#define COMPILERLAB_TREE_H

#include <stdio.h>
#include <string>
#include <list>
#include <fstream>
#include "parses_classes/AliasStmt/AliasStmtNode.h"
#include "parses_classes/CaseStmt/CaseStmtNode.h"
#include "parses_classes/ClassBodyStmt/ClassBodyStmtNode.h"
#include "parses_classes/ClassStmt/ClassStmtNode.h"
#include "parses_classes/ElseifNode/ElsifNode.h"
#include "parses_classes/ExprNode/ExprNode.h"
#include "parses_classes/ForStmt/ForStmtNode.h"
#include "parses_classes/IfStmt/IfStmtNode.h"
#include "parses_classes/MethodStmtNode/MethodStmtNode.h"
#include "parses_classes/ProgramElementNode/ProgramElementNode.h"
#include "parses_classes/ReturnStmt/ReturnStmtNode.h"
#include "parses_classes/StmtNode/StmtNode.h"
#include "parses_classes/UnlessStmt/UnlessStmtNode.h"
#include "parses_classes/WhenStmt/WhenStmtNode.h"
#include "parses_classes/WhileStmt/WhileStmtNode.h"
#include <vector>
using namespace std;

class tree {
private:
    ofstream outfile;
public:


    tree();

    //TODO: проверить printTree и printProgramElementNodeTree
    void printTree(std::vector<ProgramElementNode*>* nodes);
    void prinAliasStmtTree(AliasStmtNode* node);
    void printCaseStmtTree(CaseStmtNode* node);
    void printClassBodyTree(ClassBodyStmtNode* node);
    void printClassStmt(ClassStmtNode* node);
    void printElseifNodeTree(ElsifNode* node);
    void printExprNodeTree(ExprNode* node);
    void printForStmtTree(ForStmtNode* node);
    void printIfStmtTree(IfStmtNode* node);
    void printMethodStmtNodeTree(MethodStmtNode* node);
    void printProgramElementNodeTree(ProgramElementNode* node);
    void printReturnStmtTree(ReturnStmtNode* node);
    void printStmtNodeTree(StmtNode* node);
    void printUnlessStmtTree(UnlessStmtNode* node);
    void printWhenStmtTree(WhenStmtNode* node);
    void printWhileStmtTree(WhileStmtNode* node);


};


#endif //COMPILERLAB_TREE_H
