#pragma once
#include "FlightBaseListener.h"
#include <iostream>
#include <vector>
#include <string>

class MyListener : public FlightBaseListener { 
public:
  MyListener();
  ~MyListener();
  
  void enterFile(FlightParser::FileContext *) override;
  void exitFile(FlightParser::FileContext *) override;

  void enterStatement(FlightParser::StatementContext *) override;
  void exitStatement(FlightParser::StatementContext *) override;
  
  void enterExpression(FlightParser::ExpressionContext *) override;
  void exitExpression(FlightParser::ExpressionContext *) override;
  
  void enterArgument(FlightParser::ArgumentContext *) override;
  void exitArgument(FlightParser::ArgumentContext *) override;
  
  void enterWhitespace(FlightParser::WhitespaceContext *) override;
  void exitWhitespace(FlightParser::WhitespaceContext *) override;
  
  void enterEveryRule(antlr4::ParserRuleContext *) override;
  void exitEveryRule(antlr4::ParserRuleContext *) override;
  
  void visitTerminal(antlr4::tree::TerminalNode *) override;
  void visitErrorNode(antlr4::tree::ErrorNode *) override;

  private:
    std::vector<std::string> variables;
    std::vector<std::string> operators{
      /* Basic Arithmetic */
      "+",
      "-",
      "*",
      "/",
      /* Conditionals */
      "==",
      "!=",
      "<",
      ">",
      "<=",
      ">=",
      "inc",
      "dec",
      /* I/O */
      "print",
      /* Types */
      "set",  // Changes the value of an already defined variable
      "string",
      "int",
      "label",
      /* Control Flow */
      "jump", // Does not save a return value
      "if",
      "call", // Sets return variable equal to next address and then calls jump
      "return", // Calls the call operation with return variable as parameter
      /* Low-Level */
      "link",
      "read",
      /* Flags */
      ".prefix",
      ".debug",
      ".nullOp",
      /* OOP */
      "class",
      "method"
      /* Other */
    };
};