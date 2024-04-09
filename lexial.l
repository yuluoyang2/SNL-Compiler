%option c++
%option yylineno
%option noyywrap

%{

#include <iostream>
#include <string>

typedef enum {
	/* 簿记单词符号 */
	ENDFILE, ERROR,
	/* 保留字 */
	PROGRAM, PROCEDURE, TYPE, VAR, IF,
	THEN, ELSE, FI, WHILE, DO,
	ENDWH, BEGIN1, END, READ, WRITE,
	ARRAY, OF, RECORD, RETURN1,
	/* 类型 */
	INTEGER, CHAR,
	/* 多字符单词符号 */
	ID, INTC, CHARC,
	/* 特殊符号 */
	ASSIGN, EQ, LT, GT, PLUS, MINUS,
	TIMES, OVER, LPAREN, RPAREN, DOT,
	COLON, SEMI, COMMA, LMIDPAREN, RMIDPAREN,
	UNDERANGE
} TokenType;

/* 定义保留字数量常量 */
const int MAXRESERVED = 21;
/* 保留字字符串数组（查找表）*/
static struct {
	const char* str;
	const TokenType tok;
} reservedWords[MAXRESERVED] = {
	{"program", PROGRAM},
	{"procedure", PROCEDURE},
	{"type", TYPE},
	{"var", VAR},
	{"if", IF},
	{"then", THEN},
	{"else", ELSE},
	{"fi", FI},
	{"while", WHILE},
	{"do", DO},
	{"endwh", ENDWH},
	{"begin", BEGIN1},
	{"end", END},
	{"read", READ},
	{"write", WRITE},
	{"array", ARRAY},
	{"of", OF},
	{"record", RECORD},
	{"return", RETURN1},
	{"integer", INTEGER},
	{"char", CHAR}
};

/* 保留字查找函数 */
TokenType reservedLookup(char* s);
/* 存储token内容 */
char yylval[20];
/* 此行之后的内容是否为注释 */
int isComment = 0;

%}

%%

[0-9]+ { // 匹配整数
	if (!isComment) {
		yylval[0] = '\0';
		strcpy(yylval, yytext);
		return INTC;
	}
}
[a-z][a-z0-9]* { // 匹配标识符
	if (!isComment) {
		yylval[0] = '\0';
		strcpy(yylval, yytext);
		// 调用保留字查找函数，若为保留字则返回保留字类型，否则返回ID
		return reservedLookup(yytext);
	}
}
'[a-z,0-9]' { // 匹配字符
	if (!isComment) {
		yylval[0] = '\0';
		strcpy(yylval, yytext);
		return CHARC;
	}
}

"+" if (!isComment) return PLUS;
"-" if (!isComment) return MINUS;
"*" if (!isComment) return TIMES;
"/" if (!isComment) return OVER;
"(" if (!isComment) return LPAREN;
")" if (!isComment) return RPAREN;
"." if (!isComment) return DOT;
"[" if (!isComment) return LMIDPAREN;
"]" if (!isComment) return RMIDPAREN;
":" if (!isComment) return COLON;
";" if (!isComment) return SEMI;
"," if (!isComment) return COMMA;
":=" if (!isComment) return ASSIGN;
"=" if (!isComment) return EQ;
"<" if (!isComment) return LT;
">" if (!isComment) return GT;
".." if (!isComment) return UNDERANGE;
"{" isComment = 1;	// 注释开始
"}" isComment = 0;	// 注释结束
[ \t\n] ; // 忽略空格、制表符、换行符

. { // 处理没有规则可以匹配的情形
	if (!isComment) {
		yylval[0] = '\0';
		strcpy(yylval, yytext);
		return ERROR;
	}
}
%%

// 保留字查找函数，若为保留字则返回保留字类型，否则返回ID
TokenType reservedLookup(char* s) {
	int i;
	for (i = 0; i < MAXRESERVED; i++) {
		if (!strcmp(s, reservedWords[i].str)) {
			return reservedWords[i].tok;
		}
	}
	return ID;
}

std::string getTokenStr(TokenType token) {
	switch (token) {
		case PROGRAM: return "reserved word: program";
		case PROCEDURE: return "reserved word: procedure";
		case TYPE: return "reserved word: type";
		case VAR: return "reserved word: var";
		case IF: return "reserved word: if";
		case THEN: return "reserved word: then";
		case ELSE: return "reserved world: else";
		case FI: return "reserved word: fi";
		case WHILE: return "reserved word: while";
		case DO: return "reserved word: do";
		case ENDWH: return "reserved word: endwh";
		case BEGIN1: return "reserved word: begin";
		case END: return "reserved word: end";
		case READ: return "reserved word: read";
		case WRITE: return "reserved word: write";
		case ARRAY: return "reserved word: array";
		case OF: return "reserved word: of";
		case RECORD: return "reserved word: record";
		case RETURN1: return "reserved word: return";
		case INTEGER: return "reserved word: integer";
		case CHAR: return "reserved word: char";

		case ID: return "ID, name: " + std::string(yylval);
		case INTC: return "INTC, value: " + std::string(yylval);
		case CHARC: return "CHARC, value: " + std::string(yylval);
	
		case ASSIGN: return ":=";
		case EQ: return "=";
		case LT: return "<";
		case GT: return ">";
		case PLUS: return "+";
		case MINUS: return "-";
		case TIMES: return "*";
		case OVER: return "/";
		case LPAREN: return "(";
		case RPAREN: return ")";
		case DOT: return ".";
		case COLON: return ":";
		case SEMI: return ";";
		case COMMA: return ",";
		case LMIDPAREN: return "[";
		case RMIDPAREN: return "]";
		case UNDERANGE: return "..";
		
		case ERROR: return "ERROR: " + std::string(yylval);
		case ENDFILE: return "EOF";
		default: return "UNKNOWN";
	}
}

int main(int argc, char **argv) {
	FlexLexer* lexer = new yyFlexLexer;
	int token = 1;
	while (token) {
		token = lexer->yylex();
		std::cout << getTokenStr((TokenType)token) << std::endl;
	}
	return 0;
}