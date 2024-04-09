%option yylineno c++

%{
    #include <iostream>
    #include "y.tab.h"
    void yyerror(char *);
%}

ALPHA [a-zA-Z]
VAR  {ALPHA}+[{ALPHA}0-9_]*
KEY   int|double
DIGIT [0-9]
VALUE {DIGIT}+|{DIGIT}+"."{DIGIT}+

%%
 
{KEY}	{ 
			if (yytext[0]=='i') 
				status=1; 
			else 
				status=2;
			// std::cout << "status: " << status << std::endl;
		}
{VAR}   strcpy(name,yytext);
{VALUE} {
			if (status==1)
				sscanf(yytext,"%d",&val_int);
			else if (status==2)
				sscanf(yytext,"%lf",&val_double);
		}
;		{
			if (status==1)
				printf("<%s,int,%d>",name,val_int);
			else if (status==2)
				printf("<%s,double,%lf>",name,val_double);
		}
\n		printf("\n");
.

%%

int main(int argc, char **argv) {
	FlexLexer* lexer = new yyFlexLexer;
	lexer->yylex();
	printf("\nThe lexer has finished\n");
	return 0;
}