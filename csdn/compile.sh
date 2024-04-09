bison -d syntax_tree.y
flex syntax_tree.l
gcc syntax_tree.tab.c syntax_tree.c lex.yy.c -ly -o parser