#include <vector>
#include <string>

class AliasStmtNode {
public:

    std::string* alias;
    std::string* startName;
    int idNode;

    AliasStmtNode();

    static AliasStmtNode* createAliasStmt(std::string* alias, std::string* startName);
static inline int maxId;
};