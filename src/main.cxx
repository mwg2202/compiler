#define VERSION_NUMBER = "0.0.1"

#include <iostream>

#include "FlightLexer.h"
#include "FlightParser.h"
#include "MyListener.hxx"
#include "MyVisitor.hxx"


int main(int argc, const char* argv[]) {
    // Gets input from file and converts it to Antlr format
    std::ifstream stream;
    stream.open("test");
    antlr4::ANTLRInputStream input(stream);

    // Sends input to lexer
    FlightLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    
    // Sends tokens to parser
    FlightParser parser(&tokens);

    antlr4::tree::ParseTree *tree = parser.file();
  
    MyListener listener;

    antlr4::tree::ParseTreeWalker::DEFAULT.walk(&listener, tree);

    // Notifies that the File has been successfully executed
    std::cout << "Done" << std::endl;
    return 0;
}
