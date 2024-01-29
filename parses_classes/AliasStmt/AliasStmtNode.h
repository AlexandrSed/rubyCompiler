#include <vector>
#include <string>

class AliasStmtNode {
public:

    std::string* alias;
    std::string* startName;
    int idNode;

    AliasStmtNode() {
        if(maxId == NULL)
            maxId = 0;
    }

    static AliasStmtNode* createAliasStmt(std::string* alias, std::string* startName);
    static int maxId;
};