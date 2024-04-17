#!/bin/bash

# Check the operating system
os=$(uname -s)

# Compile Bison and Flex files
 bison -d syntax.y
 flex lexial.l

# Compile the parser
if [ "$os" == "Darwin" ]; then
    gcc syntax.tab.c syntax_tree.c lex.yy.c -ly -o parser
    echo "Parser compiled successfully."
elif [ "$os" == "Linux" ]; then
    gcc syntax.tab.c syntax_tree.c lex.yy.c -Xlinker -zmuldefs -o parser
    echo "Parser compiled successfully."
else
    echo "Unsupported operating system: $os"
    exit 1
fi


