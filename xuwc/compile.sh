#!/bin/bash

# Check the operating system
os=$(uname -s)

# Compile Bison and Flex files
 bison -d syntax.y
 flex lexial.l

# Compile the parser
if [ "$os" == "Darwin" ]; then
    gcc syntax.tab.c syntax_tree.c lex.yy.cc -ly -o parser
    echo "Parser compiled successfully."
elif [ "$os" == "Linux" ]; then
    gcc syntax.tab.c syntax_tree.c lex.yy.cc -Xlinker -zmuldefs -o parser
    echo "Parser compiled successfully."
else
    echo "Unsupported operating system: $os"
    exit 1
fi


