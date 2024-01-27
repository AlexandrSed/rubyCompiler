#include <vector>
#include <string>

class AliasStmtNode {
public:

    std::string alias;
    std::string startName;
    int idNode;

    static AliasStmtNode* createAliasStmt(std::string alias, std::string startName);
    static int maxId;
};