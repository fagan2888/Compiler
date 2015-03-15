#ifndef _PARSER_H
#define _PARSER_H
#include "lexer.h"

enum non_terminals {Program = 100, Functions, FunctionDef, fnReturn, Statements, moreStmts, Stmt, ReturnStmt, BreakStmt, DeclarationStmt, moreDeclarations, mutMod, Declaration, moreTypes, AssignStmtType2, listTypes, typeList, moreList, singleAssn, multAssn, moreAssn, IDStmts, IDStmts2, Index, moreIndex, AssignStmtType1, FunCall, MethodCall, FunCallStmt, MethodStmt, Type, parameterList, remainingList, IfStmt, ElseStmt, IStmt, OStmt, value, array, IDList, moreIds, arithExpn, moreTerms, arithTerm, moreFactors, factor, opLow, relType, opHigh, boolExpn, logicalOp, relationalOp, LoopStmt, grid, rows, moreRows, row, moreNums, boolean, dollar, EPSILON};

#define NONTERM_COUNT 200
#define TERM_COUNT 51
#define RULE_COUNT 116
#define RULE_MAX_SYMBOLS 20
#define STOP 210

extern int parse_table[NONTERM_COUNT][TERM_COUNT];
extern const char* nonterm_names[];

static inline print_symbol(int symbol) {
	if(symbol >= 100)
		printf("%s ", nonterm_names[symbol - 100]);
	else
		printf("%s ", token_names[symbol]);
}
#endif