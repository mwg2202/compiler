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
  
  void enterEveryRule(antlr4::ParserRuleContext *) override;
  void exitEveryRule(antlr4::ParserRuleContext *) override;
  
  void visitTerminal(antlr4::tree::TerminalNode *) override;
  void visitErrorNode(antlr4::tree::ErrorNode *) override;

  private:
    std::vector<std::string> variables;
};