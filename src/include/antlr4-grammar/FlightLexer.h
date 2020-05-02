
// Generated from /home/mwglen/compiler/src/Flight.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"




class  FlightLexer : public antlr4::Lexer {
public:
  enum {
    OPENPARENTHESIS = 1, CLOSEPARENTHESIS = 2, OPENBRACE = 3, CLOSEBRACE = 4, 
    OPENBRACKET = 5, CLOSEBRACKET = 6, SPACE = 7, NEWLINE = 8, TAB = 9, 
    KEYWORD = 10, NULLSTRING = 11, CHARSTRING = 12, INTEGER = 13, FLOAT = 14, 
    HEXVALUE = 15
  };

  FlightLexer(antlr4::CharStream *input);
  ~FlightLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

