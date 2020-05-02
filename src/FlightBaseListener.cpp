#include "antlr4-runtime.h"
#include "FlightBaseListener.h"
#include <iostream>

FlightBaseListener::FlightBaseListener(){};
FlightBaseListener::~FlightBaseListener(){};
void FlightBaseListener::enterFile(FlightParser::FileContext *) {
  std::cout << "Entered File" << std::endl;
};
void FlightBaseListener::exitFile(FlightParser::FileContext *){
  std::cout << "Exited File" << std::endl;
};
void FlightBaseListener::enterStatement(FlightParser::StatementContext *){};
void FlightBaseListener::exitStatement(FlightParser::StatementContext *){};
void FlightBaseListener::enterExpression(FlightParser::ExpressionContext *){};
void FlightBaseListener::exitExpression(FlightParser::ExpressionContext *){};
void FlightBaseListener::enterArgument(FlightParser::ArgumentContext *){};
void FlightBaseListener::exitArgument(FlightParser::ArgumentContext *){};
void FlightBaseListener::enterWhitespace(FlightParser::WhitespaceContext *){};
void FlightBaseListener::exitWhitespace(FlightParser::WhitespaceContext *){};
void FlightBaseListener::enterEveryRule(antlr4::ParserRuleContext *){};
void FlightBaseListener::exitEveryRule(antlr4::ParserRuleContext *){};
void FlightBaseListener::visitTerminal(antlr4::tree::TerminalNode *){};
void FlightBaseListener::visitErrorNode(antlr4::tree::ErrorNode *){};