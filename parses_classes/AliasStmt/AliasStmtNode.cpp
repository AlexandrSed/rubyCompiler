#include "AliasStmtNode.h"

AliasStmtNode* AliasStmtNode::createAliasStmt(std::string alias, std::string startName) {
    AliasStmtNode* result = new AliasStmtNode;
    result->alias = alias;
    result->startName = startName;
    result->idNode = ++AliasStmtNode::maxId;
    return result;
}