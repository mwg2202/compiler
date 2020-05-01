
// Generated from /home/mwglen/compiler/src/Flight.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  FlightParser : public antlr4::Parser {
public:
  enum {
    OPENPARENTHESIS = 1, CLOSEPARENTHESIS = 2, OPENBRACE = 3, CLOSEBRACE = 4, 
    OPENBRACKET = 5, CLOSEBRACKET = 6, SPACE = 7, NEWLINE = 8, TAB = 9, 
    KEYWORD = 10, NULLSTRING = 11, CHARSTRING = 12, INTEGER = 13, FLOAT = 14, 
    HEXVALUE = 15
  };

  enum {
    RuleFile = 0, RuleStatement = 1, RuleExpression = 2, RuleArgument = 3, 
    RuleWhitespace = 4
  };

  FlightParser(antlr4::TokenStream *input);
  ~FlightParser();

  virtual std::string getGrammarFileName() const override;
  virtual const antlr4::atn::ATN& getATN() const override { return _atn; };
  virtual const std::vector<std::string>& getTokenNames() const override { return _tokenNames; }; // deprecated: use vocabulary instead.
  virtual const std::vector<std::string>& getRuleNames() const override;
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;


  class FileContext;
  class StatementContext;
  class ExpressionContext;
  class ArgumentContext;
  class WhitespaceContext; 

  class  FileContext : public antlr4::ParserRuleContext {
  public:
    FileContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    antlr4::tree::TerminalNode *EOF();
    std::vector<WhitespaceContext *> whitespace();
    WhitespaceContext* whitespace(size_t i);

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  FileContext* file();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPENPARENTHESIS();
    antlr4::tree::TerminalNode *KEYWORD();
    antlr4::tree::TerminalNode *CLOSEPARENTHESIS();
    std::vector<WhitespaceContext *> whitespace();
    WhitespaceContext* whitespace(size_t i);
    std::vector<ExpressionContext *> expression();
    ExpressionContext* expression(size_t i);
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);
    std::vector<antlr4::tree::TerminalNode *> SPACE();
    antlr4::tree::TerminalNode* SPACE(size_t i);
    std::vector<antlr4::tree::TerminalNode *> TAB();
    antlr4::tree::TerminalNode* TAB(size_t i);
    antlr4::tree::TerminalNode *OPENBRACE();
    antlr4::tree::TerminalNode *CLOSEBRACE();
    antlr4::tree::TerminalNode *OPENBRACKET();
    antlr4::tree::TerminalNode *CLOSEBRACKET();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  ExpressionContext : public antlr4::ParserRuleContext {
  public:
    ExpressionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OPENPARENTHESIS();
    StatementContext *statement();
    antlr4::tree::TerminalNode *CLOSEPARENTHESIS();
    std::vector<WhitespaceContext *> whitespace();
    WhitespaceContext* whitespace(size_t i);
    antlr4::tree::TerminalNode *OPENBRACKET();
    antlr4::tree::TerminalNode *CLOSEBRACKET();
    antlr4::tree::TerminalNode *OPENBRACE();
    antlr4::tree::TerminalNode *CLOSEBRACE();
    ArgumentContext *argument();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ExpressionContext* expression();

  class  ArgumentContext : public antlr4::ParserRuleContext {
  public:
    ArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NULLSTRING();
    antlr4::tree::TerminalNode *CHARSTRING();
    antlr4::tree::TerminalNode *HEXVALUE();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *INTEGER();
    antlr4::tree::TerminalNode *KEYWORD();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ArgumentContext* argument();

  class  WhitespaceContext : public antlr4::ParserRuleContext {
  public:
    WhitespaceContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SPACE();
    antlr4::tree::TerminalNode *NEWLINE();
    antlr4::tree::TerminalNode *TAB();

    virtual antlrcpp::Any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  WhitespaceContext* whitespace();


private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

