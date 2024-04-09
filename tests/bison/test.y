%{
#include <stdio.h>
#include <string.h>
int yylex(void);
void yyerror(char *);
%}

%token NUM ADD SUB MUL DIV VAR CR

%%
       line_list: line
                | line_list line
                ;

	       line : expression CR  {printf("YES\n");}

      expression: term
                | expression ADD term
				| expression SUB term
                ;

            term: single
				| term MUL single
				| term DIV single
				;

		  single: NUM
				| VAR
				;
%%
void yyerror(char *str){
    fprintf(stderr,"error:%s\n",str);
}

int yywrap(){
    return 1;
}
int main(int argc, char ** argv)
{
    if(argc > 1) {
        for (int i = 0; i < argc; i++) {
            if (strcmp(argv[i], "-d") == 0) {
                yydebug = 1;
            }
        }
    }
    yyparse();
}
