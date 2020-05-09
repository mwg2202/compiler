#include "MyListener.hxx"

MyListener::MyListener(){

}
MyListener::~MyListener(){

}

/* File */
void MyListener::enterFile(FlightParser::FileContext *) {
    std::cout << "Entered File" << std::endl;
}
void MyListener::exitFile(FlightParser::FileContext *) {
    std::cout << "Exited File" << std::endl;
}

/* misc */

void MyListener::enterEveryRule(antlr4::ParserRuleContext *) {

}
void MyListener::exitEveryRule(antlr4::ParserRuleContext *) {
    
}

void MyListener::visitTerminal(antlr4::tree::TerminalNode *) {
    std::cout << "Visited Terminal Node" << std::endl;
}
void MyListener::visitErrorNode(antlr4::tree::ErrorNode *) {
    std::cout << "Visited Error Node" << std::endl;
}