#include <iostream>
#include <string>
#include <regex>

//#include "include/Preprocessor.cpp"
//#include "include/LexicalAnalyzer.cpp"
//#include "include/Parser.cpp"
//#include "include/SyntaxAnalyzer.cpp"
//#include "include/CodeGenerator.cpp"
//#include "include/ErrorHandler.cpp"

int main(){
    std::string input = R"(* 5(-(+ 3 2 ) 1))";
    
    std::regex reg (R"(\((?![ \n]))");
    input = std::regex_replace(input, reg, R"(( )");
    

    std::regex reg2(R"((?<![ \n])\()");
    input = std::regex_replace(input, reg2,R"( ()");
    
    std::regex reg3("\\)(?![ \n])");
    input = std::regex_replace(input, reg3, ") ");

    std::regex reg4("(?<![ \n])\\)");
    input = std::regex_replace(input, reg4, " )");
    std::cout << input;
    return 0;
}