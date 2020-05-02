
// Generated from /home/mwglen/compiler/src/Flight.g4 by ANTLR 4.7.1


#include "FlightListener.h"

#include "FlightParser.h"


using namespace antlrcpp;
using namespace antlr4;

FlightParser::FlightParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

FlightParser::~FlightParser() {
  delete _interpreter;
}

std::string FlightParser::getGrammarFileName() const {
  return "Flight.g4";
}

const std::vector<std::string>& FlightParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& FlightParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- FileContext ------------------------------------------------------------------

FlightParser::FileContext::FileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<FlightParser::StatementContext *> FlightParser::FileContext::statement() {
  return getRuleContexts<FlightParser::StatementContext>();
}

FlightParser::StatementContext* FlightParser::FileContext::statement(size_t i) {
  return getRuleContext<FlightParser::StatementContext>(i);
}

tree::TerminalNode* FlightParser::FileContext::EOF() {
  return getToken(FlightParser::EOF, 0);
}

std::vector<FlightParser::WhitespaceContext *> FlightParser::FileContext::whitespace() {
  return getRuleContexts<FlightParser::WhitespaceContext>();
}

FlightParser::WhitespaceContext* FlightParser::FileContext::whitespace(size_t i) {
  return getRuleContext<FlightParser::WhitespaceContext>(i);
}


size_t FlightParser::FileContext::getRuleIndex() const {
  return FlightParser::RuleFile;
}

void FlightParser::FileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlightListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFile(this);
}

void FlightParser::FileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlightListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFile(this);
}

FlightParser::FileContext* FlightParser::file() {
  FileContext *_localctx = _tracker.createInstance<FileContext>(_ctx, getState());
  enterRule(_localctx, 0, FlightParser::RuleFile);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(13);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << FlightParser::SPACE)
      | (1ULL << FlightParser::NEWLINE)
      | (1ULL << FlightParser::TAB))) != 0)) {
      setState(10);
      whitespace();
      setState(15);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(16);
    statement();
    setState(33);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(20);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(17);
            whitespace(); 
          }
          setState(22);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
        }
        setState(23);
        match(FlightParser::NEWLINE);
        setState(27);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << FlightParser::SPACE)
          | (1ULL << FlightParser::NEWLINE)
          | (1ULL << FlightParser::TAB))) != 0)) {
          setState(24);
          whitespace();
          setState(29);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(30);
        statement(); 
      }
      setState(35);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx);
    }
    setState(39);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << FlightParser::SPACE)
      | (1ULL << FlightParser::NEWLINE)
      | (1ULL << FlightParser::TAB))) != 0)) {
      setState(36);
      whitespace();
      setState(41);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(42);
    match(FlightParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

FlightParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlightParser::StatementContext::OPENPARENTHESIS() {
  return getToken(FlightParser::OPENPARENTHESIS, 0);
}

tree::TerminalNode* FlightParser::StatementContext::KEYWORD() {
  return getToken(FlightParser::KEYWORD, 0);
}

tree::TerminalNode* FlightParser::StatementContext::CLOSEPARENTHESIS() {
  return getToken(FlightParser::CLOSEPARENTHESIS, 0);
}

std::vector<FlightParser::WhitespaceContext *> FlightParser::StatementContext::whitespace() {
  return getRuleContexts<FlightParser::WhitespaceContext>();
}

FlightParser::WhitespaceContext* FlightParser::StatementContext::whitespace(size_t i) {
  return getRuleContext<FlightParser::WhitespaceContext>(i);
}

std::vector<FlightParser::ExpressionContext *> FlightParser::StatementContext::expression() {
  return getRuleContexts<FlightParser::ExpressionContext>();
}

FlightParser::ExpressionContext* FlightParser::StatementContext::expression(size_t i) {
  return getRuleContext<FlightParser::ExpressionContext>(i);
}

std::vector<FlightParser::StatementContext *> FlightParser::StatementContext::statement() {
  return getRuleContexts<FlightParser::StatementContext>();
}

FlightParser::StatementContext* FlightParser::StatementContext::statement(size_t i) {
  return getRuleContext<FlightParser::StatementContext>(i);
}

std::vector<tree::TerminalNode *> FlightParser::StatementContext::SPACE() {
  return getTokens(FlightParser::SPACE);
}

tree::TerminalNode* FlightParser::StatementContext::SPACE(size_t i) {
  return getToken(FlightParser::SPACE, i);
}

std::vector<tree::TerminalNode *> FlightParser::StatementContext::TAB() {
  return getTokens(FlightParser::TAB);
}

tree::TerminalNode* FlightParser::StatementContext::TAB(size_t i) {
  return getToken(FlightParser::TAB, i);
}

tree::TerminalNode* FlightParser::StatementContext::OPENBRACE() {
  return getToken(FlightParser::OPENBRACE, 0);
}

tree::TerminalNode* FlightParser::StatementContext::CLOSEBRACE() {
  return getToken(FlightParser::CLOSEBRACE, 0);
}

tree::TerminalNode* FlightParser::StatementContext::OPENBRACKET() {
  return getToken(FlightParser::OPENBRACKET, 0);
}

tree::TerminalNode* FlightParser::StatementContext::CLOSEBRACKET() {
  return getToken(FlightParser::CLOSEBRACKET, 0);
}


size_t FlightParser::StatementContext::getRuleIndex() const {
  return FlightParser::RuleStatement;
}

void FlightParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlightListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void FlightParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlightListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

FlightParser::StatementContext* FlightParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 2, FlightParser::RuleStatement);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    size_t alt;
    setState(173);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FlightParser::OPENPARENTHESIS: {
        enterOuterAlt(_localctx, 1);
        setState(44);
        match(FlightParser::OPENPARENTHESIS);
        setState(48);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << FlightParser::SPACE)
          | (1ULL << FlightParser::NEWLINE)
          | (1ULL << FlightParser::TAB))) != 0)) {
          setState(45);
          whitespace();
          setState(50);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(51);
        match(FlightParser::KEYWORD);
        setState(61);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(53); 
            _errHandler->sync(this);
            _la = _input->LA(1);
            do {
              setState(52);
              whitespace();
              setState(55); 
              _errHandler->sync(this);
              _la = _input->LA(1);
            } while ((((_la & ~ 0x3fULL) == 0) &&
              ((1ULL << _la) & ((1ULL << FlightParser::SPACE)
              | (1ULL << FlightParser::NEWLINE)
              | (1ULL << FlightParser::TAB))) != 0));
            setState(57);
            expression(); 
          }
          setState(63);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
        }
        setState(67);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << FlightParser::SPACE)
          | (1ULL << FlightParser::NEWLINE)
          | (1ULL << FlightParser::TAB))) != 0)) {
          setState(64);
          whitespace();
          setState(69);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(70);
        match(FlightParser::CLOSEPARENTHESIS);
        setState(80);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(74);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == FlightParser::SPACE

            || _la == FlightParser::TAB) {
              setState(71);
              _la = _input->LA(1);
              if (!(_la == FlightParser::SPACE

              || _la == FlightParser::TAB)) {
              _errHandler->recoverInline(this);
              }
              else {
                _errHandler->reportMatch(this);
                consume();
              }
              setState(76);
              _errHandler->sync(this);
              _la = _input->LA(1);
            }
            setState(77);
            statement(); 
          }
          setState(82);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
        }
        break;
      }

      case FlightParser::OPENBRACE: {
        enterOuterAlt(_localctx, 2);
        setState(83);
        match(FlightParser::OPENBRACE);
        setState(87);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << FlightParser::SPACE)
          | (1ULL << FlightParser::NEWLINE)
          | (1ULL << FlightParser::TAB))) != 0)) {
          setState(84);
          whitespace();
          setState(89);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(90);
        match(FlightParser::KEYWORD);
        setState(100);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(92); 
            _errHandler->sync(this);
            _la = _input->LA(1);
            do {
              setState(91);
              whitespace();
              setState(94); 
              _errHandler->sync(this);
              _la = _input->LA(1);
            } while ((((_la & ~ 0x3fULL) == 0) &&
              ((1ULL << _la) & ((1ULL << FlightParser::SPACE)
              | (1ULL << FlightParser::NEWLINE)
              | (1ULL << FlightParser::TAB))) != 0));
            setState(96);
            expression(); 
          }
          setState(102);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx);
        }
        setState(106);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << FlightParser::SPACE)
          | (1ULL << FlightParser::NEWLINE)
          | (1ULL << FlightParser::TAB))) != 0)) {
          setState(103);
          whitespace();
          setState(108);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(109);
        match(FlightParser::CLOSEBRACE);
        setState(119);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(113);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == FlightParser::SPACE

            || _la == FlightParser::TAB) {
              setState(110);
              _la = _input->LA(1);
              if (!(_la == FlightParser::SPACE

              || _la == FlightParser::TAB)) {
              _errHandler->recoverInline(this);
              }
              else {
                _errHandler->reportMatch(this);
                consume();
              }
              setState(115);
              _errHandler->sync(this);
              _la = _input->LA(1);
            }
            setState(116);
            statement(); 
          }
          setState(121);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx);
        }
        break;
      }

      case FlightParser::OPENBRACKET: {
        enterOuterAlt(_localctx, 3);
        setState(122);
        match(FlightParser::OPENBRACKET);
        setState(126);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << FlightParser::SPACE)
          | (1ULL << FlightParser::NEWLINE)
          | (1ULL << FlightParser::TAB))) != 0)) {
          setState(123);
          whitespace();
          setState(128);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(129);
        match(FlightParser::KEYWORD);
        setState(139);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(131); 
            _errHandler->sync(this);
            _la = _input->LA(1);
            do {
              setState(130);
              whitespace();
              setState(133); 
              _errHandler->sync(this);
              _la = _input->LA(1);
            } while ((((_la & ~ 0x3fULL) == 0) &&
              ((1ULL << _la) & ((1ULL << FlightParser::SPACE)
              | (1ULL << FlightParser::NEWLINE)
              | (1ULL << FlightParser::TAB))) != 0));
            setState(135);
            expression(); 
          }
          setState(141);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
        }
        setState(145);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << FlightParser::SPACE)
          | (1ULL << FlightParser::NEWLINE)
          | (1ULL << FlightParser::TAB))) != 0)) {
          setState(142);
          whitespace();
          setState(147);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(148);
        match(FlightParser::CLOSEBRACKET);
        setState(158);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(152);
            _errHandler->sync(this);
            _la = _input->LA(1);
            while (_la == FlightParser::SPACE

            || _la == FlightParser::TAB) {
              setState(149);
              _la = _input->LA(1);
              if (!(_la == FlightParser::SPACE

              || _la == FlightParser::TAB)) {
              _errHandler->recoverInline(this);
              }
              else {
                _errHandler->reportMatch(this);
                consume();
              }
              setState(154);
              _errHandler->sync(this);
              _la = _input->LA(1);
            }
            setState(155);
            statement(); 
          }
          setState(160);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
        }
        break;
      }

      case FlightParser::KEYWORD: {
        enterOuterAlt(_localctx, 4);
        setState(161);
        match(FlightParser::KEYWORD);
        setState(170);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(163); 
            _errHandler->sync(this);
            _la = _input->LA(1);
            do {
              setState(162);
              _la = _input->LA(1);
              if (!(_la == FlightParser::SPACE

              || _la == FlightParser::TAB)) {
              _errHandler->recoverInline(this);
              }
              else {
                _errHandler->reportMatch(this);
                consume();
              }
              setState(165); 
              _errHandler->sync(this);
              _la = _input->LA(1);
            } while (_la == FlightParser::SPACE

            || _la == FlightParser::TAB);
            setState(167);
            expression(); 
          }
          setState(172);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
        }
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

FlightParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlightParser::ExpressionContext::OPENPARENTHESIS() {
  return getToken(FlightParser::OPENPARENTHESIS, 0);
}

FlightParser::StatementContext* FlightParser::ExpressionContext::statement() {
  return getRuleContext<FlightParser::StatementContext>(0);
}

tree::TerminalNode* FlightParser::ExpressionContext::CLOSEPARENTHESIS() {
  return getToken(FlightParser::CLOSEPARENTHESIS, 0);
}

std::vector<FlightParser::WhitespaceContext *> FlightParser::ExpressionContext::whitespace() {
  return getRuleContexts<FlightParser::WhitespaceContext>();
}

FlightParser::WhitespaceContext* FlightParser::ExpressionContext::whitespace(size_t i) {
  return getRuleContext<FlightParser::WhitespaceContext>(i);
}

tree::TerminalNode* FlightParser::ExpressionContext::OPENBRACKET() {
  return getToken(FlightParser::OPENBRACKET, 0);
}

tree::TerminalNode* FlightParser::ExpressionContext::CLOSEBRACKET() {
  return getToken(FlightParser::CLOSEBRACKET, 0);
}

tree::TerminalNode* FlightParser::ExpressionContext::OPENBRACE() {
  return getToken(FlightParser::OPENBRACE, 0);
}

tree::TerminalNode* FlightParser::ExpressionContext::CLOSEBRACE() {
  return getToken(FlightParser::CLOSEBRACE, 0);
}

FlightParser::ArgumentContext* FlightParser::ExpressionContext::argument() {
  return getRuleContext<FlightParser::ArgumentContext>(0);
}


size_t FlightParser::ExpressionContext::getRuleIndex() const {
  return FlightParser::RuleExpression;
}

void FlightParser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlightListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void FlightParser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlightListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}

FlightParser::ExpressionContext* FlightParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 4, FlightParser::RuleExpression);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(224);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case FlightParser::OPENPARENTHESIS: {
        enterOuterAlt(_localctx, 1);
        setState(175);
        match(FlightParser::OPENPARENTHESIS);
        setState(179);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << FlightParser::SPACE)
          | (1ULL << FlightParser::NEWLINE)
          | (1ULL << FlightParser::TAB))) != 0)) {
          setState(176);
          whitespace();
          setState(181);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(182);
        statement();
        setState(186);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << FlightParser::SPACE)
          | (1ULL << FlightParser::NEWLINE)
          | (1ULL << FlightParser::TAB))) != 0)) {
          setState(183);
          whitespace();
          setState(188);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(189);
        match(FlightParser::CLOSEPARENTHESIS);
        break;
      }

      case FlightParser::OPENBRACKET: {
        enterOuterAlt(_localctx, 2);
        setState(191);
        match(FlightParser::OPENBRACKET);
        setState(195);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << FlightParser::SPACE)
          | (1ULL << FlightParser::NEWLINE)
          | (1ULL << FlightParser::TAB))) != 0)) {
          setState(192);
          whitespace();
          setState(197);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(198);
        statement();
        setState(202);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << FlightParser::SPACE)
          | (1ULL << FlightParser::NEWLINE)
          | (1ULL << FlightParser::TAB))) != 0)) {
          setState(199);
          whitespace();
          setState(204);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(205);
        match(FlightParser::CLOSEBRACKET);
        break;
      }

      case FlightParser::OPENBRACE: {
        enterOuterAlt(_localctx, 3);
        setState(207);
        match(FlightParser::OPENBRACE);
        setState(211);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << FlightParser::SPACE)
          | (1ULL << FlightParser::NEWLINE)
          | (1ULL << FlightParser::TAB))) != 0)) {
          setState(208);
          whitespace();
          setState(213);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(214);
        statement();
        setState(218);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << FlightParser::SPACE)
          | (1ULL << FlightParser::NEWLINE)
          | (1ULL << FlightParser::TAB))) != 0)) {
          setState(215);
          whitespace();
          setState(220);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(221);
        match(FlightParser::CLOSEBRACE);
        break;
      }

      case FlightParser::KEYWORD:
      case FlightParser::NULLSTRING:
      case FlightParser::CHARSTRING:
      case FlightParser::INTEGER:
      case FlightParser::FLOAT:
      case FlightParser::HEXVALUE: {
        enterOuterAlt(_localctx, 4);
        setState(223);
        argument();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentContext ------------------------------------------------------------------

FlightParser::ArgumentContext::ArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlightParser::ArgumentContext::NULLSTRING() {
  return getToken(FlightParser::NULLSTRING, 0);
}

tree::TerminalNode* FlightParser::ArgumentContext::CHARSTRING() {
  return getToken(FlightParser::CHARSTRING, 0);
}

tree::TerminalNode* FlightParser::ArgumentContext::HEXVALUE() {
  return getToken(FlightParser::HEXVALUE, 0);
}

tree::TerminalNode* FlightParser::ArgumentContext::FLOAT() {
  return getToken(FlightParser::FLOAT, 0);
}

tree::TerminalNode* FlightParser::ArgumentContext::INTEGER() {
  return getToken(FlightParser::INTEGER, 0);
}

tree::TerminalNode* FlightParser::ArgumentContext::KEYWORD() {
  return getToken(FlightParser::KEYWORD, 0);
}


size_t FlightParser::ArgumentContext::getRuleIndex() const {
  return FlightParser::RuleArgument;
}

void FlightParser::ArgumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlightListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgument(this);
}

void FlightParser::ArgumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlightListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgument(this);
}

FlightParser::ArgumentContext* FlightParser::argument() {
  ArgumentContext *_localctx = _tracker.createInstance<ArgumentContext>(_ctx, getState());
  enterRule(_localctx, 6, FlightParser::RuleArgument);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(226);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << FlightParser::KEYWORD)
      | (1ULL << FlightParser::NULLSTRING)
      | (1ULL << FlightParser::CHARSTRING)
      | (1ULL << FlightParser::INTEGER)
      | (1ULL << FlightParser::FLOAT)
      | (1ULL << FlightParser::HEXVALUE))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhitespaceContext ------------------------------------------------------------------

FlightParser::WhitespaceContext::WhitespaceContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* FlightParser::WhitespaceContext::SPACE() {
  return getToken(FlightParser::SPACE, 0);
}

tree::TerminalNode* FlightParser::WhitespaceContext::NEWLINE() {
  return getToken(FlightParser::NEWLINE, 0);
}

tree::TerminalNode* FlightParser::WhitespaceContext::TAB() {
  return getToken(FlightParser::TAB, 0);
}


size_t FlightParser::WhitespaceContext::getRuleIndex() const {
  return FlightParser::RuleWhitespace;
}

void FlightParser::WhitespaceContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlightListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhitespace(this);
}

void FlightParser::WhitespaceContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<FlightListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhitespace(this);
}

FlightParser::WhitespaceContext* FlightParser::whitespace() {
  WhitespaceContext *_localctx = _tracker.createInstance<WhitespaceContext>(_ctx, getState());
  enterRule(_localctx, 8, FlightParser::RuleWhitespace);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(228);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << FlightParser::SPACE)
      | (1ULL << FlightParser::NEWLINE)
      | (1ULL << FlightParser::TAB))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

// Static vars and initialization.
std::vector<dfa::DFA> FlightParser::_decisionToDFA;
atn::PredictionContextCache FlightParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN FlightParser::_atn;
std::vector<uint16_t> FlightParser::_serializedATN;

std::vector<std::string> FlightParser::_ruleNames = {
  "file", "statement", "expression", "argument", "whitespace"
};

std::vector<std::string> FlightParser::_literalNames = {
  "", "'('", "')'", "'{'", "'}'", "'['", "']'", "' '", "'\n'", "'\t'"
};

std::vector<std::string> FlightParser::_symbolicNames = {
  "", "OPENPARENTHESIS", "CLOSEPARENTHESIS", "OPENBRACE", "CLOSEBRACE", 
  "OPENBRACKET", "CLOSEBRACKET", "SPACE", "NEWLINE", "TAB", "KEYWORD", "NULLSTRING", 
  "CHARSTRING", "INTEGER", "FLOAT", "HEXVALUE"
};

dfa::Vocabulary FlightParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> FlightParser::_tokenNames;

FlightParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x11, 0xe9, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x3, 0x2, 0x7, 0x2, 0xe, 
    0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x11, 0xb, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 
    0x2, 0x15, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x18, 0xb, 0x2, 0x3, 0x2, 0x3, 
    0x2, 0x7, 0x2, 0x1c, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x1f, 0xb, 0x2, 0x3, 
    0x2, 0x7, 0x2, 0x22, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x25, 0xb, 0x2, 0x3, 
    0x2, 0x7, 0x2, 0x28, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0x2b, 0xb, 0x2, 0x3, 
    0x2, 0x3, 0x2, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x31, 0xa, 0x3, 0xc, 0x3, 
    0xe, 0x3, 0x34, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x6, 0x3, 0x38, 0xa, 0x3, 
    0xd, 0x3, 0xe, 0x3, 0x39, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x3e, 0xa, 0x3, 
    0xc, 0x3, 0xe, 0x3, 0x41, 0xb, 0x3, 0x3, 0x3, 0x7, 0x3, 0x44, 0xa, 0x3, 
    0xc, 0x3, 0xe, 0x3, 0x47, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x4b, 
    0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x4e, 0xb, 0x3, 0x3, 0x3, 0x7, 0x3, 0x51, 
    0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x54, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 
    0x3, 0x58, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x5b, 0xb, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x6, 0x3, 0x5f, 0xa, 0x3, 0xd, 0x3, 0xe, 0x3, 0x60, 0x3, 0x3, 0x3, 
    0x3, 0x7, 0x3, 0x65, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x68, 0xb, 0x3, 0x3, 
    0x3, 0x7, 0x3, 0x6b, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x6e, 0xb, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x7, 0x3, 0x72, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x75, 0xb, 
    0x3, 0x3, 0x3, 0x7, 0x3, 0x78, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 0x7b, 0xb, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x7f, 0xa, 0x3, 0xc, 0x3, 0xe, 0x3, 
    0x82, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x6, 0x3, 0x86, 0xa, 0x3, 0xd, 0x3, 
    0xe, 0x3, 0x87, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x8c, 0xa, 0x3, 0xc, 0x3, 
    0xe, 0x3, 0x8f, 0xb, 0x3, 0x3, 0x3, 0x7, 0x3, 0x92, 0xa, 0x3, 0xc, 0x3, 
    0xe, 0x3, 0x95, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x99, 0xa, 0x3, 
    0xc, 0x3, 0xe, 0x3, 0x9c, 0xb, 0x3, 0x3, 0x3, 0x7, 0x3, 0x9f, 0xa, 0x3, 
    0xc, 0x3, 0xe, 0x3, 0xa2, 0xb, 0x3, 0x3, 0x3, 0x3, 0x3, 0x6, 0x3, 0xa6, 
    0xa, 0x3, 0xd, 0x3, 0xe, 0x3, 0xa7, 0x3, 0x3, 0x7, 0x3, 0xab, 0xa, 0x3, 
    0xc, 0x3, 0xe, 0x3, 0xae, 0xb, 0x3, 0x5, 0x3, 0xb0, 0xa, 0x3, 0x3, 0x4, 
    0x3, 0x4, 0x7, 0x4, 0xb4, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0xb7, 0xb, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0xbb, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0xbe, 
    0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0xc4, 0xa, 
    0x4, 0xc, 0x4, 0xe, 0x4, 0xc7, 0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 
    0xcb, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0xce, 0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0xd4, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0xd7, 
    0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 0x4, 0xdb, 0xa, 0x4, 0xc, 0x4, 0xe, 
    0x4, 0xde, 0xb, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0xe3, 0xa, 
    0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 0x6, 0x3, 0x6, 0x2, 0x2, 0x7, 
    0x2, 0x4, 0x6, 0x8, 0xa, 0x2, 0x5, 0x4, 0x2, 0x9, 0x9, 0xb, 0xb, 0x3, 
    0x2, 0xc, 0x11, 0x3, 0x2, 0x9, 0xb, 0x2, 0x108, 0x2, 0xf, 0x3, 0x2, 
    0x2, 0x2, 0x4, 0xaf, 0x3, 0x2, 0x2, 0x2, 0x6, 0xe2, 0x3, 0x2, 0x2, 0x2, 
    0x8, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xa, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xc, 0xe, 
    0x5, 0xa, 0x6, 0x2, 0xd, 0xc, 0x3, 0x2, 0x2, 0x2, 0xe, 0x11, 0x3, 0x2, 
    0x2, 0x2, 0xf, 0xd, 0x3, 0x2, 0x2, 0x2, 0xf, 0x10, 0x3, 0x2, 0x2, 0x2, 
    0x10, 0x12, 0x3, 0x2, 0x2, 0x2, 0x11, 0xf, 0x3, 0x2, 0x2, 0x2, 0x12, 
    0x23, 0x5, 0x4, 0x3, 0x2, 0x13, 0x15, 0x5, 0xa, 0x6, 0x2, 0x14, 0x13, 
    0x3, 0x2, 0x2, 0x2, 0x15, 0x18, 0x3, 0x2, 0x2, 0x2, 0x16, 0x14, 0x3, 
    0x2, 0x2, 0x2, 0x16, 0x17, 0x3, 0x2, 0x2, 0x2, 0x17, 0x19, 0x3, 0x2, 
    0x2, 0x2, 0x18, 0x16, 0x3, 0x2, 0x2, 0x2, 0x19, 0x1d, 0x7, 0xa, 0x2, 
    0x2, 0x1a, 0x1c, 0x5, 0xa, 0x6, 0x2, 0x1b, 0x1a, 0x3, 0x2, 0x2, 0x2, 
    0x1c, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x1d, 0x1b, 0x3, 0x2, 0x2, 0x2, 0x1d, 
    0x1e, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x20, 0x3, 0x2, 0x2, 0x2, 0x1f, 0x1d, 
    0x3, 0x2, 0x2, 0x2, 0x20, 0x22, 0x5, 0x4, 0x3, 0x2, 0x21, 0x16, 0x3, 
    0x2, 0x2, 0x2, 0x22, 0x25, 0x3, 0x2, 0x2, 0x2, 0x23, 0x21, 0x3, 0x2, 
    0x2, 0x2, 0x23, 0x24, 0x3, 0x2, 0x2, 0x2, 0x24, 0x29, 0x3, 0x2, 0x2, 
    0x2, 0x25, 0x23, 0x3, 0x2, 0x2, 0x2, 0x26, 0x28, 0x5, 0xa, 0x6, 0x2, 
    0x27, 0x26, 0x3, 0x2, 0x2, 0x2, 0x28, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x29, 
    0x27, 0x3, 0x2, 0x2, 0x2, 0x29, 0x2a, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x2c, 
    0x3, 0x2, 0x2, 0x2, 0x2b, 0x29, 0x3, 0x2, 0x2, 0x2, 0x2c, 0x2d, 0x7, 
    0x2, 0x2, 0x3, 0x2d, 0x3, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x32, 0x7, 0x3, 
    0x2, 0x2, 0x2f, 0x31, 0x5, 0xa, 0x6, 0x2, 0x30, 0x2f, 0x3, 0x2, 0x2, 
    0x2, 0x31, 0x34, 0x3, 0x2, 0x2, 0x2, 0x32, 0x30, 0x3, 0x2, 0x2, 0x2, 
    0x32, 0x33, 0x3, 0x2, 0x2, 0x2, 0x33, 0x35, 0x3, 0x2, 0x2, 0x2, 0x34, 
    0x32, 0x3, 0x2, 0x2, 0x2, 0x35, 0x3f, 0x7, 0xc, 0x2, 0x2, 0x36, 0x38, 
    0x5, 0xa, 0x6, 0x2, 0x37, 0x36, 0x3, 0x2, 0x2, 0x2, 0x38, 0x39, 0x3, 
    0x2, 0x2, 0x2, 0x39, 0x37, 0x3, 0x2, 0x2, 0x2, 0x39, 0x3a, 0x3, 0x2, 
    0x2, 0x2, 0x3a, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x3b, 0x3c, 0x5, 0x6, 0x4, 
    0x2, 0x3c, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x3d, 0x37, 0x3, 0x2, 0x2, 0x2, 
    0x3e, 0x41, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x3d, 0x3, 0x2, 0x2, 0x2, 0x3f, 
    0x40, 0x3, 0x2, 0x2, 0x2, 0x40, 0x45, 0x3, 0x2, 0x2, 0x2, 0x41, 0x3f, 
    0x3, 0x2, 0x2, 0x2, 0x42, 0x44, 0x5, 0xa, 0x6, 0x2, 0x43, 0x42, 0x3, 
    0x2, 0x2, 0x2, 0x44, 0x47, 0x3, 0x2, 0x2, 0x2, 0x45, 0x43, 0x3, 0x2, 
    0x2, 0x2, 0x45, 0x46, 0x3, 0x2, 0x2, 0x2, 0x46, 0x48, 0x3, 0x2, 0x2, 
    0x2, 0x47, 0x45, 0x3, 0x2, 0x2, 0x2, 0x48, 0x52, 0x7, 0x4, 0x2, 0x2, 
    0x49, 0x4b, 0x9, 0x2, 0x2, 0x2, 0x4a, 0x49, 0x3, 0x2, 0x2, 0x2, 0x4b, 
    0x4e, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x4c, 0x4d, 
    0x3, 0x2, 0x2, 0x2, 0x4d, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x4c, 0x3, 
    0x2, 0x2, 0x2, 0x4f, 0x51, 0x5, 0x4, 0x3, 0x2, 0x50, 0x4c, 0x3, 0x2, 
    0x2, 0x2, 0x51, 0x54, 0x3, 0x2, 0x2, 0x2, 0x52, 0x50, 0x3, 0x2, 0x2, 
    0x2, 0x52, 0x53, 0x3, 0x2, 0x2, 0x2, 0x53, 0xb0, 0x3, 0x2, 0x2, 0x2, 
    0x54, 0x52, 0x3, 0x2, 0x2, 0x2, 0x55, 0x59, 0x7, 0x5, 0x2, 0x2, 0x56, 
    0x58, 0x5, 0xa, 0x6, 0x2, 0x57, 0x56, 0x3, 0x2, 0x2, 0x2, 0x58, 0x5b, 
    0x3, 0x2, 0x2, 0x2, 0x59, 0x57, 0x3, 0x2, 0x2, 0x2, 0x59, 0x5a, 0x3, 
    0x2, 0x2, 0x2, 0x5a, 0x5c, 0x3, 0x2, 0x2, 0x2, 0x5b, 0x59, 0x3, 0x2, 
    0x2, 0x2, 0x5c, 0x66, 0x7, 0xc, 0x2, 0x2, 0x5d, 0x5f, 0x5, 0xa, 0x6, 
    0x2, 0x5e, 0x5d, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x60, 0x3, 0x2, 0x2, 0x2, 
    0x60, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x60, 0x61, 0x3, 0x2, 0x2, 0x2, 0x61, 
    0x62, 0x3, 0x2, 0x2, 0x2, 0x62, 0x63, 0x5, 0x6, 0x4, 0x2, 0x63, 0x65, 
    0x3, 0x2, 0x2, 0x2, 0x64, 0x5e, 0x3, 0x2, 0x2, 0x2, 0x65, 0x68, 0x3, 
    0x2, 0x2, 0x2, 0x66, 0x64, 0x3, 0x2, 0x2, 0x2, 0x66, 0x67, 0x3, 0x2, 
    0x2, 0x2, 0x67, 0x6c, 0x3, 0x2, 0x2, 0x2, 0x68, 0x66, 0x3, 0x2, 0x2, 
    0x2, 0x69, 0x6b, 0x5, 0xa, 0x6, 0x2, 0x6a, 0x69, 0x3, 0x2, 0x2, 0x2, 
    0x6b, 0x6e, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6c, 
    0x6d, 0x3, 0x2, 0x2, 0x2, 0x6d, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6c, 
    0x3, 0x2, 0x2, 0x2, 0x6f, 0x79, 0x7, 0x6, 0x2, 0x2, 0x70, 0x72, 0x9, 
    0x2, 0x2, 0x2, 0x71, 0x70, 0x3, 0x2, 0x2, 0x2, 0x72, 0x75, 0x3, 0x2, 
    0x2, 0x2, 0x73, 0x71, 0x3, 0x2, 0x2, 0x2, 0x73, 0x74, 0x3, 0x2, 0x2, 
    0x2, 0x74, 0x76, 0x3, 0x2, 0x2, 0x2, 0x75, 0x73, 0x3, 0x2, 0x2, 0x2, 
    0x76, 0x78, 0x5, 0x4, 0x3, 0x2, 0x77, 0x73, 0x3, 0x2, 0x2, 0x2, 0x78, 
    0x7b, 0x3, 0x2, 0x2, 0x2, 0x79, 0x77, 0x3, 0x2, 0x2, 0x2, 0x79, 0x7a, 
    0x3, 0x2, 0x2, 0x2, 0x7a, 0xb0, 0x3, 0x2, 0x2, 0x2, 0x7b, 0x79, 0x3, 
    0x2, 0x2, 0x2, 0x7c, 0x80, 0x7, 0x7, 0x2, 0x2, 0x7d, 0x7f, 0x5, 0xa, 
    0x6, 0x2, 0x7e, 0x7d, 0x3, 0x2, 0x2, 0x2, 0x7f, 0x82, 0x3, 0x2, 0x2, 
    0x2, 0x80, 0x7e, 0x3, 0x2, 0x2, 0x2, 0x80, 0x81, 0x3, 0x2, 0x2, 0x2, 
    0x81, 0x83, 0x3, 0x2, 0x2, 0x2, 0x82, 0x80, 0x3, 0x2, 0x2, 0x2, 0x83, 
    0x8d, 0x7, 0xc, 0x2, 0x2, 0x84, 0x86, 0x5, 0xa, 0x6, 0x2, 0x85, 0x84, 
    0x3, 0x2, 0x2, 0x2, 0x86, 0x87, 0x3, 0x2, 0x2, 0x2, 0x87, 0x85, 0x3, 
    0x2, 0x2, 0x2, 0x87, 0x88, 0x3, 0x2, 0x2, 0x2, 0x88, 0x89, 0x3, 0x2, 
    0x2, 0x2, 0x89, 0x8a, 0x5, 0x6, 0x4, 0x2, 0x8a, 0x8c, 0x3, 0x2, 0x2, 
    0x2, 0x8b, 0x85, 0x3, 0x2, 0x2, 0x2, 0x8c, 0x8f, 0x3, 0x2, 0x2, 0x2, 
    0x8d, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8e, 0x3, 0x2, 0x2, 0x2, 0x8e, 
    0x93, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x8d, 0x3, 0x2, 0x2, 0x2, 0x90, 0x92, 
    0x5, 0xa, 0x6, 0x2, 0x91, 0x90, 0x3, 0x2, 0x2, 0x2, 0x92, 0x95, 0x3, 
    0x2, 0x2, 0x2, 0x93, 0x91, 0x3, 0x2, 0x2, 0x2, 0x93, 0x94, 0x3, 0x2, 
    0x2, 0x2, 0x94, 0x96, 0x3, 0x2, 0x2, 0x2, 0x95, 0x93, 0x3, 0x2, 0x2, 
    0x2, 0x96, 0xa0, 0x7, 0x8, 0x2, 0x2, 0x97, 0x99, 0x9, 0x2, 0x2, 0x2, 
    0x98, 0x97, 0x3, 0x2, 0x2, 0x2, 0x99, 0x9c, 0x3, 0x2, 0x2, 0x2, 0x9a, 
    0x98, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x3, 0x2, 0x2, 0x2, 0x9b, 0x9d, 
    0x3, 0x2, 0x2, 0x2, 0x9c, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9d, 0x9f, 0x5, 
    0x4, 0x3, 0x2, 0x9e, 0x9a, 0x3, 0x2, 0x2, 0x2, 0x9f, 0xa2, 0x3, 0x2, 
    0x2, 0x2, 0xa0, 0x9e, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x3, 0x2, 0x2, 
    0x2, 0xa1, 0xb0, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa0, 0x3, 0x2, 0x2, 0x2, 
    0xa3, 0xac, 0x7, 0xc, 0x2, 0x2, 0xa4, 0xa6, 0x9, 0x2, 0x2, 0x2, 0xa5, 
    0xa4, 0x3, 0x2, 0x2, 0x2, 0xa6, 0xa7, 0x3, 0x2, 0x2, 0x2, 0xa7, 0xa5, 
    0x3, 0x2, 0x2, 0x2, 0xa7, 0xa8, 0x3, 0x2, 0x2, 0x2, 0xa8, 0xa9, 0x3, 
    0x2, 0x2, 0x2, 0xa9, 0xab, 0x5, 0x6, 0x4, 0x2, 0xaa, 0xa5, 0x3, 0x2, 
    0x2, 0x2, 0xab, 0xae, 0x3, 0x2, 0x2, 0x2, 0xac, 0xaa, 0x3, 0x2, 0x2, 
    0x2, 0xac, 0xad, 0x3, 0x2, 0x2, 0x2, 0xad, 0xb0, 0x3, 0x2, 0x2, 0x2, 
    0xae, 0xac, 0x3, 0x2, 0x2, 0x2, 0xaf, 0x2e, 0x3, 0x2, 0x2, 0x2, 0xaf, 
    0x55, 0x3, 0x2, 0x2, 0x2, 0xaf, 0x7c, 0x3, 0x2, 0x2, 0x2, 0xaf, 0xa3, 
    0x3, 0x2, 0x2, 0x2, 0xb0, 0x5, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb5, 0x7, 
    0x3, 0x2, 0x2, 0xb2, 0xb4, 0x5, 0xa, 0x6, 0x2, 0xb3, 0xb2, 0x3, 0x2, 
    0x2, 0x2, 0xb4, 0xb7, 0x3, 0x2, 0x2, 0x2, 0xb5, 0xb3, 0x3, 0x2, 0x2, 
    0x2, 0xb5, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb6, 0xb8, 0x3, 0x2, 0x2, 0x2, 
    0xb7, 0xb5, 0x3, 0x2, 0x2, 0x2, 0xb8, 0xbc, 0x5, 0x4, 0x3, 0x2, 0xb9, 
    0xbb, 0x5, 0xa, 0x6, 0x2, 0xba, 0xb9, 0x3, 0x2, 0x2, 0x2, 0xbb, 0xbe, 
    0x3, 0x2, 0x2, 0x2, 0xbc, 0xba, 0x3, 0x2, 0x2, 0x2, 0xbc, 0xbd, 0x3, 
    0x2, 0x2, 0x2, 0xbd, 0xbf, 0x3, 0x2, 0x2, 0x2, 0xbe, 0xbc, 0x3, 0x2, 
    0x2, 0x2, 0xbf, 0xc0, 0x7, 0x4, 0x2, 0x2, 0xc0, 0xe3, 0x3, 0x2, 0x2, 
    0x2, 0xc1, 0xc5, 0x7, 0x7, 0x2, 0x2, 0xc2, 0xc4, 0x5, 0xa, 0x6, 0x2, 
    0xc3, 0xc2, 0x3, 0x2, 0x2, 0x2, 0xc4, 0xc7, 0x3, 0x2, 0x2, 0x2, 0xc5, 
    0xc3, 0x3, 0x2, 0x2, 0x2, 0xc5, 0xc6, 0x3, 0x2, 0x2, 0x2, 0xc6, 0xc8, 
    0x3, 0x2, 0x2, 0x2, 0xc7, 0xc5, 0x3, 0x2, 0x2, 0x2, 0xc8, 0xcc, 0x5, 
    0x4, 0x3, 0x2, 0xc9, 0xcb, 0x5, 0xa, 0x6, 0x2, 0xca, 0xc9, 0x3, 0x2, 
    0x2, 0x2, 0xcb, 0xce, 0x3, 0x2, 0x2, 0x2, 0xcc, 0xca, 0x3, 0x2, 0x2, 
    0x2, 0xcc, 0xcd, 0x3, 0x2, 0x2, 0x2, 0xcd, 0xcf, 0x3, 0x2, 0x2, 0x2, 
    0xce, 0xcc, 0x3, 0x2, 0x2, 0x2, 0xcf, 0xd0, 0x7, 0x8, 0x2, 0x2, 0xd0, 
    0xe3, 0x3, 0x2, 0x2, 0x2, 0xd1, 0xd5, 0x7, 0x5, 0x2, 0x2, 0xd2, 0xd4, 
    0x5, 0xa, 0x6, 0x2, 0xd3, 0xd2, 0x3, 0x2, 0x2, 0x2, 0xd4, 0xd7, 0x3, 
    0x2, 0x2, 0x2, 0xd5, 0xd3, 0x3, 0x2, 0x2, 0x2, 0xd5, 0xd6, 0x3, 0x2, 
    0x2, 0x2, 0xd6, 0xd8, 0x3, 0x2, 0x2, 0x2, 0xd7, 0xd5, 0x3, 0x2, 0x2, 
    0x2, 0xd8, 0xdc, 0x5, 0x4, 0x3, 0x2, 0xd9, 0xdb, 0x5, 0xa, 0x6, 0x2, 
    0xda, 0xd9, 0x3, 0x2, 0x2, 0x2, 0xdb, 0xde, 0x3, 0x2, 0x2, 0x2, 0xdc, 
    0xda, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdd, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xdf, 
    0x3, 0x2, 0x2, 0x2, 0xde, 0xdc, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xe0, 0x7, 
    0x6, 0x2, 0x2, 0xe0, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe1, 0xe3, 0x5, 0x8, 
    0x5, 0x2, 0xe2, 0xb1, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xc1, 0x3, 0x2, 0x2, 
    0x2, 0xe2, 0xd1, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe1, 0x3, 0x2, 0x2, 0x2, 
    0xe3, 0x7, 0x3, 0x2, 0x2, 0x2, 0xe4, 0xe5, 0x9, 0x3, 0x2, 0x2, 0xe5, 
    0x9, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe7, 0x9, 0x4, 0x2, 0x2, 0xe7, 0xb, 
    0x3, 0x2, 0x2, 0x2, 0x23, 0xf, 0x16, 0x1d, 0x23, 0x29, 0x32, 0x39, 0x3f, 
    0x45, 0x4c, 0x52, 0x59, 0x60, 0x66, 0x6c, 0x73, 0x79, 0x80, 0x87, 0x8d, 
    0x93, 0x9a, 0xa0, 0xa7, 0xac, 0xaf, 0xb5, 0xbc, 0xc5, 0xcc, 0xd5, 0xdc, 
    0xe2, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

FlightParser::Initializer FlightParser::_init;
