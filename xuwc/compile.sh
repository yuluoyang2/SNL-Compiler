#!/bin/bash

# Check the operating system
os=$(uname -s)

# Compile Bison and Flex files
 bison -d parser.y
 flex scanner.l

# Compile the parser
if [ "$os" == "Darwin" ]; then
    gcc parser.tab.c main.c lex.yy.c -ly -o parser
    echo "Parser compiled successfully."
elif [ "$os" == "Linux" ]; then
    gcc parser.tab.c main.c lex.yy.c -Xlinker -zmuldefs -o parser
    echo "Parser compiled successfully."
else
    echo "Unsupported operating system: $os"
    exit 1
fi


