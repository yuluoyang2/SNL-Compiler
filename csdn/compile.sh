#!/bin/bash

# Check the operating system
os=$(uname -s)

# Compile Bison and Flex files
 bison -d syntax_tree.y
 flex syntax_tree.l

# Compile the parser
if [ "$os" == "Darwin" ]; then
    gcc syntax_tree.tab.c syntax_tree.c lex.yy.c -ly -o parser
elif [ "$os" == "Linux" ]; then
    gcc syntax_tree.tab.c syntax_tree.c lex.yy.c -Xlinker -zmuldefs -o parser
else
    echo "Unsupported operating system: $os"
    exit 1
fi

echo "Parser compiled successfully."
