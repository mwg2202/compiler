
// Generated from /home/mwglen/compiler/src/Flight.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "FlightListener.h"


/**
 * This class provides an empty implementation of FlightListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  FlightBaseListener : public FlightListener {
public:

  virtual void enterFile(FlightParser::FileContext * /*ctx*/) override { }
  virtual void exitFile(FlightParser::FileContext * /*ctx*/) override { }

  virtual void enterStatement(FlightParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(FlightParser::StatementContext * /*ctx*/) override { }

  virtual void enterExpression(FlightParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(FlightParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterArgument(FlightParser::ArgumentContext * /*ctx*/) override { }
  virtual void exitArgument(FlightParser::ArgumentContext * /*ctx*/) override { }

  virtual void enterWhitespace(FlightParser::WhitespaceContext * /*ctx*/) override { }
  virtual void exitWhitespace(FlightParser::WhitespaceContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

