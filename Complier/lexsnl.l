%option noyywrap

%{
//库文件
#include<string.h>
#include<stdio.h>

//Token 种类
typedef enum
{
    /*薄记单词符号 */
    ENDFILE, ERROR,
    /*保留字*/
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
} LexType;
/* 定义保留字数量常量 */
#define MAXRESERVED 21
/* 保留字字符串数组（查找表）*/
static struct {
	char* str;
	LexType tok;
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
LexType reservedLookup(char* s);
/* 存储token内容 */
char yylval[20];
/* 此行之后的内容是否为注释 */
int flag = 0;

%}

%%

[0-9]+ { // 匹配整数
	if (!flag) {
		yylval[0] = '\0';
		strcpy(yylval, yytext);
		return INTC;
	}
}
[a-z][a-z0-9]* { // 匹配标识符
	if (!flag) {
		yylval[0] = '\0';
		strcpy(yylval, yytext);
		// 调用保留字查找函数，若为保留字则返回保留字类型，否则返回ID
		return reservedLookup(yytext);
	}
}
'[a-z,0-9]' { // 匹配字符
	if (!flag) {
		yylval[0] = '\0';
		strcpy(yylval, yytext);
		return CHARC;
	}
}
"+" if (!flag) return PLUS;
"-" if (!flag) return MINUS;
"*" if (!flag) return TIMES;
"/" if (!flag) return OVER;
"(" if (!flag) return LPAREN;
")" if (!flag) return RPAREN;
"." if (!flag) return DOT;
"[" if (!flag) return LMIDPAREN;
"]" if (!flag) return RMIDPAREN;
":" if (!flag) return COLON;
";" if (!flag) return SEMI;
"," if (!flag) return COMMA;
":=" if (!flag) return ASSIGN;
"=" if (!flag) return EQ;
"<" if (!flag) return LT;
">" if (!flag) return GT;
".." if (!flag) return UNDERANGE;
"{" flag = 1;	// 注释开始
"}" flag = 0;	// 注释结束
[ \t\n] ; // 忽略空格、制表符、换行符
. { // 处理没有规则可以匹配的情形
	if (!flag) {
		yylval[0] = '\0';
		strcpy(yylval, yytext);
		return ERROR;
	}
}
%%
LexType reservedLookup(char *s)
{
    /*保留字查找函数：查看一个标识符是否有保留字，标识符如果在保留字
    表中则返回相应单词，否则返回单词ID*/
    int i;
	for(i=0; i< MAXRESERVED;i++){
		if(!strcmp(s,reservedWords[i].str)){
			return reservedWords[i].tok;
		}
	}
	return ID;
}
void printToken(int token){
    //输出函数：将各类单词按种类输出
}
int main(int argc, char **argv)
{
  int n=1;
  while(n){
    n=yylex();
    printToken(n);
  }
}
