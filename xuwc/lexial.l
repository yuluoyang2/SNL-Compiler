
%option noyywrap

%{

#include <stdio.h>
#include <string.h>

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
#define MAXRESERVED 21
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
char* printToken(int token) {
    static char tokenStr[100]; // 用于存储返回的字符串
    switch (token) {
        case PROGRAM: strcpy(tokenStr, "reserved word: program"); break;
        case PROCEDURE: strcpy(tokenStr, "reserved word: procedure"); break;
        case TYPE: strcpy(tokenStr, "reserved word: type"); break;
        case VAR: strcpy(tokenStr, "reserved word: var"); break;
        case IF: strcpy(tokenStr, "reserved word: if"); break;
        case THEN: strcpy(tokenStr, "reserved word: then"); break;
        case ELSE: strcpy(tokenStr, "reserved word: else"); break;
        case FI: strcpy(tokenStr, "reserved word: fi"); break;
        case WHILE: strcpy(tokenStr, "reserved word: while"); break;
        case DO: strcpy(tokenStr, "reserved word: do"); break;
        case ENDWH: strcpy(tokenStr, "reserved word: endwh"); break;
        case BEGIN1: strcpy(tokenStr, "reserved word: begin"); break;
        case END: strcpy(tokenStr, "reserved word: end"); break;
        case READ: strcpy(tokenStr, "reserved word: read"); break;
        case WRITE: strcpy(tokenStr, "reserved word: write"); break;
        case ARRAY: strcpy(tokenStr, "reserved word: array"); break;
        case OF: strcpy(tokenStr, "reserved word: of"); break;
        case RECORD: strcpy(tokenStr, "reserved word: record"); break;
        case RETURN1: strcpy(tokenStr, "reserved word: return"); break;
        case INTEGER: strcpy(tokenStr, "reserved word: integer"); break;
        case CHAR: strcpy(tokenStr, "reserved word: char"); break;
		case ID: strcpy(tokenStr, "ID, name: "); break;
        case INTC: strcpy(tokenStr, "INTC, value: "); break;
        case CHARC: strcpy(tokenStr, "CHARC, value: "); break;
        case ASSIGN: strcpy(tokenStr, ":="); break;
        case EQ: strcpy(tokenStr, "="); break;
        case LT: strcpy(tokenStr, "<"); break;
        case GT: strcpy(tokenStr, ">"); break;
        case PLUS: strcpy(tokenStr, "+"); break;
        case MINUS: strcpy(tokenStr, "-"); break;
        case TIMES: strcpy(tokenStr, "*"); break;
        case OVER: strcpy(tokenStr, "/"); break;
        case LPAREN: strcpy(tokenStr, "("); break;
        case RPAREN: strcpy(tokenStr, ")"); break;
        case DOT: strcpy(tokenStr, "."); break;
        case COLON: strcpy(tokenStr, ":"); break;
        case SEMI: strcpy(tokenStr, ";"); break;
        case COMMA: strcpy(tokenStr, ","); break;
        case LMIDPAREN: strcpy(tokenStr, "["); break;
        case RMIDPAREN: strcpy(tokenStr, "]"); break;
        case UNDERANGE: strcpy(tokenStr, ".."); break;
        case ERROR: strcpy(tokenStr, "ERROR: "); break;
        case ENDFILE: strcpy(tokenStr, "EOF"); break;
        default: strcpy(tokenStr, "UNKNOWN"); break;
    }
    return tokenStr;
}


int main(int argc, char **argv) {
	//FlexLexer* lexer = new yyFlexLexer;
	int token = 1;
	while (token) {
		token = yylex();
		printf("%s\n",printToken(token));
	}
	return 0;
}