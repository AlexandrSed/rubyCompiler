#include <vector>
#include <string>

class ProgramElementNode  {
    public:
        ClassStmtNode* classNode;
        MethodStmtNode* methodNode;
        StmtNode* stmtNode;
        int idNode;

        static ProgramElementNode* createClassProgramElementNode(ClassStmtNode* classNode);
        static ProgramElementNode* createMethodProgramElementNode(MethodStmtNode* methodNode);
        static ProgramElementNode* createStmtProgramElementNode(StmtNode* stmtNode);
        static int maxId;
}

std::vector<ProgramElementNode*>* createProgramElementList(ProgramElementNode* programElement);
std::vector<ProgramElementNode*>* addProgramElementToList(std::vector<ProgramElementNode*>* programElementList, ProgramElementNode* programElement);
