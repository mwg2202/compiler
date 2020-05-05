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

/* Statement */
void MyListener::enterStatement(FlightParser::StatementContext *) {

}
void MyListener::exitStatement(FlightParser::StatementContext *) {
    std::cout << "Exited File" << std::endl;
}

/* Expression */
void MyListener::enterExpression(FlightParser::ExpressionContext *) {}
void MyListener::exitExpression(FlightParser::ExpressionContext *) {
    std::cout << "Exited File" << std::endl;
}

/* Argument */
void MyListener::enterArgument(FlightParser::ArgumentContext *) {

}
void MyListener::exitArgument(FlightParser::ArgumentContext *) {

}
void MyListener::enterWhitespace(FlightParser::WhitespaceContext *) {

}
void MyListener::exitWhitespace(FlightParser::WhitespaceContext *) {
    std::cout << "Exited Whitespace" << std::endl;
}

/* Every Rule */
void MyListener::enterEveryRule(antlr4::ParserRuleContext *) {
    std::cout << "1";
}
void MyListener::exitEveryRule(antlr4::ParserRuleContext *) {
    std::cout << "2";
}

/* misc */
void MyListener::visitTerminal(antlr4::tree::TerminalNode *) {
    std::cout << "Visited Terminal Node" << std::endl;
}
void MyListener::visitErrorNode(antlr4::tree::ErrorNode *) {
    std::cout << "Visited Error Node" << std::endl;
}