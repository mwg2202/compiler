#include <iostream>

#include "antlr4-runtime.h"
#include "FlightLexer.h"
#include "FlightParser.h"
#include "FlightListener.h"




int main(int argc, const char* argv[]) {
    std::ifstream stream;
    stream.open("test");

    antlr4::ANTLRInputStream input(stream);
    FlightLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);
    FlightParser parser(&tokens);

    FlightParser::FileContext* tree = parser.file();
    
    antlr4::imageVisitor visitor;
    Scene scene = visitor.visitFile(tree);
    scene.draw();

    return 0;
}