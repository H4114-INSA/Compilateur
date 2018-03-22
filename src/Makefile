default:
	java -jar /usr/local/lib/antlr-4.7.1-complete.jar  -visitor -Dlanguage=Cpp Expr.g4
	g++ -g -std=c++11 -Wno-attributes -o exe -I /usr/local/include/antlr4-runtime *.cpp  /usr/local/lib/libantlr4-runtime.a
