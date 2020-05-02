
// Generated from /home/mwglen/compiler/src/Flight.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "FlightParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by FlightParser.
 */
class  FlightListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterFile(FlightParser::FileContext *ctx) = 0;
  virtual void exitFile(FlightParser::FileContext *ctx) = 0;

  virtual void enterStatement(FlightParser::StatementContext *ctx) = 0;
  virtual void exitStatement(FlightParser::StatementContext *ctx) = 0;

  virtual void enterExpression(FlightParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(FlightParser::ExpressionContext *ctx) = 0;

  virtual void enterArgument(FlightParser::ArgumentContext *ctx) = 0;
  virtual void exitArgument(FlightParser::ArgumentContext *ctx) = 0;

  virtual void enterWhitespace(FlightParser::WhitespaceContext *ctx) = 0;
  virtual void exitWhitespace(FlightParser::WhitespaceContext *ctx) = 0;


};

