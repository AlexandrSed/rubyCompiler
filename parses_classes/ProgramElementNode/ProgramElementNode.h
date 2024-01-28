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
        static std::vector<ProgramElementNode*>* createProgramElementList(ProgramElementNode* programElement);
        static std::vector<ProgramElementNode*>* addProgramElementToList(std::vector<ProgramElementNode*>* programElementList, ProgramElementNode* programElement);
        static int maxId;
};