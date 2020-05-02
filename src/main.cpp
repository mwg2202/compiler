#define VERSION_NUMBER = "0.0.1"
#define FILE_EXTENSION = ".fly"
#define LANGUAGE_NAME = "Flight"

#include <iostream>

#include "antlr4-runtime.h"
#include "FlightLexer.h"
#include "FlightParser.h"
#include "FlightListener.h"
#include "FlightBaseListener.h"


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


    // Notifies that the File has been successfully executed
    std::cout << "Done" << std::endl;
    return 0;
}
