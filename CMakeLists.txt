cmake_minimum_required(VERSION 3.26)
project(CompilerLab)

set(CMAKE_EXE_LINKER_FLAGS "-static")
set(CMAKE_CXX_STANDARD 14)
file(GLOB_RECURSE CFILES "../${CMAKE_SOURCE_DIR}/*.c")
SET_SOURCE_FILES_PROPERTIES(${CFILES} PROPERTIES LANGUAGE CXX)

include_directories(.)
include_directories(parses_classes)

add_executable(CompilerLab
        parses_classes/WhileStmt/WhileStmtNode.h
        parses_classes/WhileStmt/WhileStmtNode.cpp
        parses_classes/WhenStmt/WhenStmtNode.h
        parses_classes/WhenStmt/WhenStmtNode.cpp
        parses_classes/UnlessStmt/UnlessStmtNode.h
        parses_classes/UnlessStmt/UnlessStmtNode.cpp
        parses_classes/StmtNode/StmtNode.h
        parses_classes/StmtNode/StmtNode.cpp
        parses_classes/ReturnStmt/ReturnStmtNode.h
        parses_classes/ReturnStmt/ReturnStmtNode.cpp
        parses_classes/ProgramElementNode/ProgramElementNode.h
        parses_classes/ProgramElementNode/ProgramElementNode.cpp
        parses_classes/MethodStmtNode/MethodStmtNode.h
        parses_classes/MethodStmtNode/MethodStmtNode.cpp
        parses_classes/IfStmt/IfStmtNode.h
        parses_classes/IfStmt/IfStmtNode.cpp
        parses_classes/ForStmt/ForStmtNode.h
        parses_classes/ForStmt/ForStmtNode.cpp
        parses_classes/ExprNode/ExprNode.h
        parses_classes/ExprNode/ExprNode.cpp
        parses_classes/ElseifNode/ElsifNode.h
        parses_classes/ElseifNode/ElsifNode.cpp
        parses_classes/ClassStmt/ClassStmtNode.h
        parses_classes/ClassStmt/ClassStmtNode.cpp
        parses_classes/ClassBodyStmt/ClassBodyStmtNode.h
        parses_classes/ClassBodyStmt/ClassBodyStmtNode.cpp
        parses_classes/CaseStmt/CaseStmtNode.h
        parses_classes/CaseStmt/CaseStmtNode.cpp
        parses_classes/AliasStmt/AliasStmtNode.h
        parses_classes/AliasStmt/AliasStmtNode.cpp
        lex.yy.c
        parser.tab.cpp
        parser.tab.hpp
        main.cpp)
