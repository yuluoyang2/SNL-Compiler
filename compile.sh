rm -rf build
mkdir build
cd build

flex --outfile=lex.cpp ../$1
g++ -o lex.out lex.cpp

if [ $? -eq 0 ]; then
    echo "Compilation successful"
    ./lex.out < ../fileToBeCompiled.txt
else
    echo "Compilation failed"
fi

