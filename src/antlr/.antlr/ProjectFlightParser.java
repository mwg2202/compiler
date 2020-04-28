// Generated from /home/mwglen/compiler/src/antlr/ProjectFlight.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.misc.*;
import org.antlr.v4.runtime.tree.*;
import java.util.List;
import java.util.Iterator;
import java.util.ArrayList;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class ProjectFlightParser extends Parser {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		OPENPARENTHESIS=1, CLOSEPARENTHESIS=2, OPENBRACE=3, CLOSEBRACE=4, OPENBRACKET=5, 
		CLOSEBRACKET=6, SPACE=7, NEWLINE=8, TAB=9, KEYWORD=10, NULLSTRING=11, 
		CHARSTRING=12, INTEGER=13, FLOAT=14, HEXVALUE=15;
	public static final int
		RULE_file = 0, RULE_statement = 1, RULE_expression = 2, RULE_argument = 3, 
		RULE_whitespace = 4;
	public static final String[] ruleNames = {
		"file", "statement", "expression", "argument", "whitespace"
	};

	private static final String[] _LITERAL_NAMES = {
		null, "'('", "')'", "'{'", "'}'", "'['", "']'", "' '", "'\n'", "'\t'"
	};
	private static final String[] _SYMBOLIC_NAMES = {
		null, "OPENPARENTHESIS", "CLOSEPARENTHESIS", "OPENBRACE", "CLOSEBRACE", 
		"OPENBRACKET", "CLOSEBRACKET", "SPACE", "NEWLINE", "TAB", "KEYWORD", "NULLSTRING", 
		"CHARSTRING", "INTEGER", "FLOAT", "HEXVALUE"
	};
	public static final Vocabulary VOCABULARY = new VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

	/**
	 * @deprecated Use {@link #VOCABULARY} instead.
	 */
	@Deprecated
	public static final String[] tokenNames;
	static {
		tokenNames = new String[_SYMBOLIC_NAMES.length];
		for (int i = 0; i < tokenNames.length; i++) {
			tokenNames[i] = VOCABULARY.getLiteralName(i);
			if (tokenNames[i] == null) {
				tokenNames[i] = VOCABULARY.getSymbolicName(i);
			}

			if (tokenNames[i] == null) {
				tokenNames[i] = "<INVALID>";
			}
		}
	}

	@Override
	@Deprecated
	public String[] getTokenNames() {
		return tokenNames;
	}

	@Override

	public Vocabulary getVocabulary() {
		return VOCABULARY;
	}

	@Override
	public String getGrammarFileName() { return "ProjectFlight.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public ATN getATN() { return _ATN; }

	public ProjectFlightParser(TokenStream input) {
		super(input);
		_interp = new ParserATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}
	public static class FileContext extends ParserRuleContext {
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public TerminalNode EOF() { return getToken(ProjectFlightParser.EOF, 0); }
		public List<WhitespaceContext> whitespace() {
			return getRuleContexts(WhitespaceContext.class);
		}
		public WhitespaceContext whitespace(int i) {
			return getRuleContext(WhitespaceContext.class,i);
		}
		public FileContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_file; }
	}

	public final FileContext file() throws RecognitionException {
		FileContext _localctx = new FileContext(_ctx, getState());
		enterRule(_localctx, 0, RULE_file);
		int _la;
		try {
			int _alt;
			enterOuterAlt(_localctx, 1);
			{
			setState(13);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << SPACE) | (1L << NEWLINE) | (1L << TAB))) != 0)) {
				{
				{
				setState(10);
				whitespace();
				}
				}
				setState(15);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(16);
			statement();
			setState(33);
			_errHandler.sync(this);
			_alt = getInterpreter().adaptivePredict(_input,3,_ctx);
			while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
				if ( _alt==1 ) {
					{
					{
					setState(20);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,1,_ctx);
					while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
						if ( _alt==1 ) {
							{
							{
							setState(17);
							whitespace();
							}
							} 
						}
						setState(22);
						_errHandler.sync(this);
						_alt = getInterpreter().adaptivePredict(_input,1,_ctx);
					}
					setState(23);
					match(NEWLINE);
					setState(27);
					_errHandler.sync(this);
					_la = _input.LA(1);
					while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << SPACE) | (1L << NEWLINE) | (1L << TAB))) != 0)) {
						{
						{
						setState(24);
						whitespace();
						}
						}
						setState(29);
						_errHandler.sync(this);
						_la = _input.LA(1);
					}
					setState(30);
					statement();
					}
					} 
				}
				setState(35);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,3,_ctx);
			}
			setState(39);
			_errHandler.sync(this);
			_la = _input.LA(1);
			while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << SPACE) | (1L << NEWLINE) | (1L << TAB))) != 0)) {
				{
				{
				setState(36);
				whitespace();
				}
				}
				setState(41);
				_errHandler.sync(this);
				_la = _input.LA(1);
			}
			setState(42);
			match(EOF);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class StatementContext extends ParserRuleContext {
		public TerminalNode OPENPARENTHESIS() { return getToken(ProjectFlightParser.OPENPARENTHESIS, 0); }
		public TerminalNode KEYWORD() { return getToken(ProjectFlightParser.KEYWORD, 0); }
		public TerminalNode CLOSEPARENTHESIS() { return getToken(ProjectFlightParser.CLOSEPARENTHESIS, 0); }
		public List<WhitespaceContext> whitespace() {
			return getRuleContexts(WhitespaceContext.class);
		}
		public WhitespaceContext whitespace(int i) {
			return getRuleContext(WhitespaceContext.class,i);
		}
		public List<ExpressionContext> expression() {
			return getRuleContexts(ExpressionContext.class);
		}
		public ExpressionContext expression(int i) {
			return getRuleContext(ExpressionContext.class,i);
		}
		public List<StatementContext> statement() {
			return getRuleContexts(StatementContext.class);
		}
		public StatementContext statement(int i) {
			return getRuleContext(StatementContext.class,i);
		}
		public List<TerminalNode> SPACE() { return getTokens(ProjectFlightParser.SPACE); }
		public TerminalNode SPACE(int i) {
			return getToken(ProjectFlightParser.SPACE, i);
		}
		public List<TerminalNode> TAB() { return getTokens(ProjectFlightParser.TAB); }
		public TerminalNode TAB(int i) {
			return getToken(ProjectFlightParser.TAB, i);
		}
		public TerminalNode OPENBRACE() { return getToken(ProjectFlightParser.OPENBRACE, 0); }
		public TerminalNode CLOSEBRACE() { return getToken(ProjectFlightParser.CLOSEBRACE, 0); }
		public TerminalNode OPENBRACKET() { return getToken(ProjectFlightParser.OPENBRACKET, 0); }
		public TerminalNode CLOSEBRACKET() { return getToken(ProjectFlightParser.CLOSEBRACKET, 0); }
		public StatementContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_statement; }
	}

	public final StatementContext statement() throws RecognitionException {
		StatementContext _localctx = new StatementContext(_ctx, getState());
		enterRule(_localctx, 2, RULE_statement);
		int _la;
		try {
			int _alt;
			setState(173);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case OPENPARENTHESIS:
				enterOuterAlt(_localctx, 1);
				{
				setState(44);
				match(OPENPARENTHESIS);
				setState(48);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << SPACE) | (1L << NEWLINE) | (1L << TAB))) != 0)) {
					{
					{
					setState(45);
					whitespace();
					}
					}
					setState(50);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(51);
				match(KEYWORD);
				setState(61);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,7,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(53); 
						_errHandler.sync(this);
						_la = _input.LA(1);
						do {
							{
							{
							setState(52);
							whitespace();
							}
							}
							setState(55); 
							_errHandler.sync(this);
							_la = _input.LA(1);
						} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << SPACE) | (1L << NEWLINE) | (1L << TAB))) != 0) );
						setState(57);
						expression();
						}
						} 
					}
					setState(63);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,7,_ctx);
				}
				setState(67);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << SPACE) | (1L << NEWLINE) | (1L << TAB))) != 0)) {
					{
					{
					setState(64);
					whitespace();
					}
					}
					setState(69);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(70);
				match(CLOSEPARENTHESIS);
				setState(80);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,10,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(74);
						_errHandler.sync(this);
						_la = _input.LA(1);
						while (_la==SPACE || _la==TAB) {
							{
							{
							setState(71);
							_la = _input.LA(1);
							if ( !(_la==SPACE || _la==TAB) ) {
							_errHandler.recoverInline(this);
							}
							else {
								if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
								_errHandler.reportMatch(this);
								consume();
							}
							}
							}
							setState(76);
							_errHandler.sync(this);
							_la = _input.LA(1);
						}
						setState(77);
						statement();
						}
						} 
					}
					setState(82);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,10,_ctx);
				}
				}
				break;
			case OPENBRACE:
				enterOuterAlt(_localctx, 2);
				{
				setState(83);
				match(OPENBRACE);
				setState(87);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << SPACE) | (1L << NEWLINE) | (1L << TAB))) != 0)) {
					{
					{
					setState(84);
					whitespace();
					}
					}
					setState(89);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(90);
				match(KEYWORD);
				setState(100);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,13,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(92); 
						_errHandler.sync(this);
						_la = _input.LA(1);
						do {
							{
							{
							setState(91);
							whitespace();
							}
							}
							setState(94); 
							_errHandler.sync(this);
							_la = _input.LA(1);
						} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << SPACE) | (1L << NEWLINE) | (1L << TAB))) != 0) );
						setState(96);
						expression();
						}
						} 
					}
					setState(102);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,13,_ctx);
				}
				setState(106);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << SPACE) | (1L << NEWLINE) | (1L << TAB))) != 0)) {
					{
					{
					setState(103);
					whitespace();
					}
					}
					setState(108);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(109);
				match(CLOSEBRACE);
				setState(119);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,16,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(113);
						_errHandler.sync(this);
						_la = _input.LA(1);
						while (_la==SPACE || _la==TAB) {
							{
							{
							setState(110);
							_la = _input.LA(1);
							if ( !(_la==SPACE || _la==TAB) ) {
							_errHandler.recoverInline(this);
							}
							else {
								if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
								_errHandler.reportMatch(this);
								consume();
							}
							}
							}
							setState(115);
							_errHandler.sync(this);
							_la = _input.LA(1);
						}
						setState(116);
						statement();
						}
						} 
					}
					setState(121);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,16,_ctx);
				}
				}
				break;
			case OPENBRACKET:
				enterOuterAlt(_localctx, 3);
				{
				setState(122);
				match(OPENBRACKET);
				setState(126);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << SPACE) | (1L << NEWLINE) | (1L << TAB))) != 0)) {
					{
					{
					setState(123);
					whitespace();
					}
					}
					setState(128);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(129);
				match(KEYWORD);
				setState(139);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,19,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(131); 
						_errHandler.sync(this);
						_la = _input.LA(1);
						do {
							{
							{
							setState(130);
							whitespace();
							}
							}
							setState(133); 
							_errHandler.sync(this);
							_la = _input.LA(1);
						} while ( (((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << SPACE) | (1L << NEWLINE) | (1L << TAB))) != 0) );
						setState(135);
						expression();
						}
						} 
					}
					setState(141);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,19,_ctx);
				}
				setState(145);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << SPACE) | (1L << NEWLINE) | (1L << TAB))) != 0)) {
					{
					{
					setState(142);
					whitespace();
					}
					}
					setState(147);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(148);
				match(CLOSEBRACKET);
				setState(158);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,22,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(152);
						_errHandler.sync(this);
						_la = _input.LA(1);
						while (_la==SPACE || _la==TAB) {
							{
							{
							setState(149);
							_la = _input.LA(1);
							if ( !(_la==SPACE || _la==TAB) ) {
							_errHandler.recoverInline(this);
							}
							else {
								if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
								_errHandler.reportMatch(this);
								consume();
							}
							}
							}
							setState(154);
							_errHandler.sync(this);
							_la = _input.LA(1);
						}
						setState(155);
						statement();
						}
						} 
					}
					setState(160);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,22,_ctx);
				}
				}
				break;
			case KEYWORD:
				enterOuterAlt(_localctx, 4);
				{
				setState(161);
				match(KEYWORD);
				setState(170);
				_errHandler.sync(this);
				_alt = getInterpreter().adaptivePredict(_input,24,_ctx);
				while ( _alt!=2 && _alt!=org.antlr.v4.runtime.atn.ATN.INVALID_ALT_NUMBER ) {
					if ( _alt==1 ) {
						{
						{
						setState(163); 
						_errHandler.sync(this);
						_la = _input.LA(1);
						do {
							{
							{
							setState(162);
							_la = _input.LA(1);
							if ( !(_la==SPACE || _la==TAB) ) {
							_errHandler.recoverInline(this);
							}
							else {
								if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
								_errHandler.reportMatch(this);
								consume();
							}
							}
							}
							setState(165); 
							_errHandler.sync(this);
							_la = _input.LA(1);
						} while ( _la==SPACE || _la==TAB );
						setState(167);
						expression();
						}
						} 
					}
					setState(172);
					_errHandler.sync(this);
					_alt = getInterpreter().adaptivePredict(_input,24,_ctx);
				}
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ExpressionContext extends ParserRuleContext {
		public TerminalNode OPENPARENTHESIS() { return getToken(ProjectFlightParser.OPENPARENTHESIS, 0); }
		public StatementContext statement() {
			return getRuleContext(StatementContext.class,0);
		}
		public TerminalNode CLOSEPARENTHESIS() { return getToken(ProjectFlightParser.CLOSEPARENTHESIS, 0); }
		public List<WhitespaceContext> whitespace() {
			return getRuleContexts(WhitespaceContext.class);
		}
		public WhitespaceContext whitespace(int i) {
			return getRuleContext(WhitespaceContext.class,i);
		}
		public TerminalNode OPENBRACKET() { return getToken(ProjectFlightParser.OPENBRACKET, 0); }
		public TerminalNode CLOSEBRACKET() { return getToken(ProjectFlightParser.CLOSEBRACKET, 0); }
		public TerminalNode OPENBRACE() { return getToken(ProjectFlightParser.OPENBRACE, 0); }
		public TerminalNode CLOSEBRACE() { return getToken(ProjectFlightParser.CLOSEBRACE, 0); }
		public ArgumentContext argument() {
			return getRuleContext(ArgumentContext.class,0);
		}
		public ExpressionContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_expression; }
	}

	public final ExpressionContext expression() throws RecognitionException {
		ExpressionContext _localctx = new ExpressionContext(_ctx, getState());
		enterRule(_localctx, 4, RULE_expression);
		int _la;
		try {
			setState(224);
			_errHandler.sync(this);
			switch (_input.LA(1)) {
			case OPENPARENTHESIS:
				enterOuterAlt(_localctx, 1);
				{
				setState(175);
				match(OPENPARENTHESIS);
				setState(179);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << SPACE) | (1L << NEWLINE) | (1L << TAB))) != 0)) {
					{
					{
					setState(176);
					whitespace();
					}
					}
					setState(181);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(182);
				statement();
				setState(186);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << SPACE) | (1L << NEWLINE) | (1L << TAB))) != 0)) {
					{
					{
					setState(183);
					whitespace();
					}
					}
					setState(188);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(189);
				match(CLOSEPARENTHESIS);
				}
				break;
			case OPENBRACKET:
				enterOuterAlt(_localctx, 2);
				{
				setState(191);
				match(OPENBRACKET);
				setState(195);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << SPACE) | (1L << NEWLINE) | (1L << TAB))) != 0)) {
					{
					{
					setState(192);
					whitespace();
					}
					}
					setState(197);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(198);
				statement();
				setState(202);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << SPACE) | (1L << NEWLINE) | (1L << TAB))) != 0)) {
					{
					{
					setState(199);
					whitespace();
					}
					}
					setState(204);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(205);
				match(CLOSEBRACKET);
				}
				break;
			case OPENBRACE:
				enterOuterAlt(_localctx, 3);
				{
				setState(207);
				match(OPENBRACE);
				setState(211);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << SPACE) | (1L << NEWLINE) | (1L << TAB))) != 0)) {
					{
					{
					setState(208);
					whitespace();
					}
					}
					setState(213);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(214);
				statement();
				setState(218);
				_errHandler.sync(this);
				_la = _input.LA(1);
				while ((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << SPACE) | (1L << NEWLINE) | (1L << TAB))) != 0)) {
					{
					{
					setState(215);
					whitespace();
					}
					}
					setState(220);
					_errHandler.sync(this);
					_la = _input.LA(1);
				}
				setState(221);
				match(CLOSEBRACE);
				}
				break;
			case KEYWORD:
			case NULLSTRING:
			case CHARSTRING:
			case INTEGER:
			case FLOAT:
			case HEXVALUE:
				enterOuterAlt(_localctx, 4);
				{
				setState(223);
				argument();
				}
				break;
			default:
				throw new NoViableAltException(this);
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class ArgumentContext extends ParserRuleContext {
		public TerminalNode NULLSTRING() { return getToken(ProjectFlightParser.NULLSTRING, 0); }
		public TerminalNode CHARSTRING() { return getToken(ProjectFlightParser.CHARSTRING, 0); }
		public TerminalNode HEXVALUE() { return getToken(ProjectFlightParser.HEXVALUE, 0); }
		public TerminalNode FLOAT() { return getToken(ProjectFlightParser.FLOAT, 0); }
		public TerminalNode INTEGER() { return getToken(ProjectFlightParser.INTEGER, 0); }
		public TerminalNode KEYWORD() { return getToken(ProjectFlightParser.KEYWORD, 0); }
		public ArgumentContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_argument; }
	}

	public final ArgumentContext argument() throws RecognitionException {
		ArgumentContext _localctx = new ArgumentContext(_ctx, getState());
		enterRule(_localctx, 6, RULE_argument);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(226);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << KEYWORD) | (1L << NULLSTRING) | (1L << CHARSTRING) | (1L << INTEGER) | (1L << FLOAT) | (1L << HEXVALUE))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static class WhitespaceContext extends ParserRuleContext {
		public TerminalNode SPACE() { return getToken(ProjectFlightParser.SPACE, 0); }
		public TerminalNode NEWLINE() { return getToken(ProjectFlightParser.NEWLINE, 0); }
		public TerminalNode TAB() { return getToken(ProjectFlightParser.TAB, 0); }
		public WhitespaceContext(ParserRuleContext parent, int invokingState) {
			super(parent, invokingState);
		}
		@Override public int getRuleIndex() { return RULE_whitespace; }
	}

	public final WhitespaceContext whitespace() throws RecognitionException {
		WhitespaceContext _localctx = new WhitespaceContext(_ctx, getState());
		enterRule(_localctx, 8, RULE_whitespace);
		int _la;
		try {
			enterOuterAlt(_localctx, 1);
			{
			setState(228);
			_la = _input.LA(1);
			if ( !((((_la) & ~0x3f) == 0 && ((1L << _la) & ((1L << SPACE) | (1L << NEWLINE) | (1L << TAB))) != 0)) ) {
			_errHandler.recoverInline(this);
			}
			else {
				if ( _input.LA(1)==Token.EOF ) matchedEOF = true;
				_errHandler.reportMatch(this);
				consume();
			}
			}
		}
		catch (RecognitionException re) {
			_localctx.exception = re;
			_errHandler.reportError(this, re);
			_errHandler.recover(this, re);
		}
		finally {
			exitRule();
		}
		return _localctx;
	}

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\3\21\u00e9\4\2\t\2"+
		"\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\3\2\7\2\16\n\2\f\2\16\2\21\13\2\3\2\3"+
		"\2\7\2\25\n\2\f\2\16\2\30\13\2\3\2\3\2\7\2\34\n\2\f\2\16\2\37\13\2\3\2"+
		"\7\2\"\n\2\f\2\16\2%\13\2\3\2\7\2(\n\2\f\2\16\2+\13\2\3\2\3\2\3\3\3\3"+
		"\7\3\61\n\3\f\3\16\3\64\13\3\3\3\3\3\6\38\n\3\r\3\16\39\3\3\3\3\7\3>\n"+
		"\3\f\3\16\3A\13\3\3\3\7\3D\n\3\f\3\16\3G\13\3\3\3\3\3\7\3K\n\3\f\3\16"+
		"\3N\13\3\3\3\7\3Q\n\3\f\3\16\3T\13\3\3\3\3\3\7\3X\n\3\f\3\16\3[\13\3\3"+
		"\3\3\3\6\3_\n\3\r\3\16\3`\3\3\3\3\7\3e\n\3\f\3\16\3h\13\3\3\3\7\3k\n\3"+
		"\f\3\16\3n\13\3\3\3\3\3\7\3r\n\3\f\3\16\3u\13\3\3\3\7\3x\n\3\f\3\16\3"+
		"{\13\3\3\3\3\3\7\3\177\n\3\f\3\16\3\u0082\13\3\3\3\3\3\6\3\u0086\n\3\r"+
		"\3\16\3\u0087\3\3\3\3\7\3\u008c\n\3\f\3\16\3\u008f\13\3\3\3\7\3\u0092"+
		"\n\3\f\3\16\3\u0095\13\3\3\3\3\3\7\3\u0099\n\3\f\3\16\3\u009c\13\3\3\3"+
		"\7\3\u009f\n\3\f\3\16\3\u00a2\13\3\3\3\3\3\6\3\u00a6\n\3\r\3\16\3\u00a7"+
		"\3\3\7\3\u00ab\n\3\f\3\16\3\u00ae\13\3\5\3\u00b0\n\3\3\4\3\4\7\4\u00b4"+
		"\n\4\f\4\16\4\u00b7\13\4\3\4\3\4\7\4\u00bb\n\4\f\4\16\4\u00be\13\4\3\4"+
		"\3\4\3\4\3\4\7\4\u00c4\n\4\f\4\16\4\u00c7\13\4\3\4\3\4\7\4\u00cb\n\4\f"+
		"\4\16\4\u00ce\13\4\3\4\3\4\3\4\3\4\7\4\u00d4\n\4\f\4\16\4\u00d7\13\4\3"+
		"\4\3\4\7\4\u00db\n\4\f\4\16\4\u00de\13\4\3\4\3\4\3\4\5\4\u00e3\n\4\3\5"+
		"\3\5\3\6\3\6\3\6\2\2\7\2\4\6\b\n\2\5\4\2\t\t\13\13\3\2\f\21\3\2\t\13\2"+
		"\u0108\2\17\3\2\2\2\4\u00af\3\2\2\2\6\u00e2\3\2\2\2\b\u00e4\3\2\2\2\n"+
		"\u00e6\3\2\2\2\f\16\5\n\6\2\r\f\3\2\2\2\16\21\3\2\2\2\17\r\3\2\2\2\17"+
		"\20\3\2\2\2\20\22\3\2\2\2\21\17\3\2\2\2\22#\5\4\3\2\23\25\5\n\6\2\24\23"+
		"\3\2\2\2\25\30\3\2\2\2\26\24\3\2\2\2\26\27\3\2\2\2\27\31\3\2\2\2\30\26"+
		"\3\2\2\2\31\35\7\n\2\2\32\34\5\n\6\2\33\32\3\2\2\2\34\37\3\2\2\2\35\33"+
		"\3\2\2\2\35\36\3\2\2\2\36 \3\2\2\2\37\35\3\2\2\2 \"\5\4\3\2!\26\3\2\2"+
		"\2\"%\3\2\2\2#!\3\2\2\2#$\3\2\2\2$)\3\2\2\2%#\3\2\2\2&(\5\n\6\2\'&\3\2"+
		"\2\2(+\3\2\2\2)\'\3\2\2\2)*\3\2\2\2*,\3\2\2\2+)\3\2\2\2,-\7\2\2\3-\3\3"+
		"\2\2\2.\62\7\3\2\2/\61\5\n\6\2\60/\3\2\2\2\61\64\3\2\2\2\62\60\3\2\2\2"+
		"\62\63\3\2\2\2\63\65\3\2\2\2\64\62\3\2\2\2\65?\7\f\2\2\668\5\n\6\2\67"+
		"\66\3\2\2\289\3\2\2\29\67\3\2\2\29:\3\2\2\2:;\3\2\2\2;<\5\6\4\2<>\3\2"+
		"\2\2=\67\3\2\2\2>A\3\2\2\2?=\3\2\2\2?@\3\2\2\2@E\3\2\2\2A?\3\2\2\2BD\5"+
		"\n\6\2CB\3\2\2\2DG\3\2\2\2EC\3\2\2\2EF\3\2\2\2FH\3\2\2\2GE\3\2\2\2HR\7"+
		"\4\2\2IK\t\2\2\2JI\3\2\2\2KN\3\2\2\2LJ\3\2\2\2LM\3\2\2\2MO\3\2\2\2NL\3"+
		"\2\2\2OQ\5\4\3\2PL\3\2\2\2QT\3\2\2\2RP\3\2\2\2RS\3\2\2\2S\u00b0\3\2\2"+
		"\2TR\3\2\2\2UY\7\5\2\2VX\5\n\6\2WV\3\2\2\2X[\3\2\2\2YW\3\2\2\2YZ\3\2\2"+
		"\2Z\\\3\2\2\2[Y\3\2\2\2\\f\7\f\2\2]_\5\n\6\2^]\3\2\2\2_`\3\2\2\2`^\3\2"+
		"\2\2`a\3\2\2\2ab\3\2\2\2bc\5\6\4\2ce\3\2\2\2d^\3\2\2\2eh\3\2\2\2fd\3\2"+
		"\2\2fg\3\2\2\2gl\3\2\2\2hf\3\2\2\2ik\5\n\6\2ji\3\2\2\2kn\3\2\2\2lj\3\2"+
		"\2\2lm\3\2\2\2mo\3\2\2\2nl\3\2\2\2oy\7\6\2\2pr\t\2\2\2qp\3\2\2\2ru\3\2"+
		"\2\2sq\3\2\2\2st\3\2\2\2tv\3\2\2\2us\3\2\2\2vx\5\4\3\2ws\3\2\2\2x{\3\2"+
		"\2\2yw\3\2\2\2yz\3\2\2\2z\u00b0\3\2\2\2{y\3\2\2\2|\u0080\7\7\2\2}\177"+
		"\5\n\6\2~}\3\2\2\2\177\u0082\3\2\2\2\u0080~\3\2\2\2\u0080\u0081\3\2\2"+
		"\2\u0081\u0083\3\2\2\2\u0082\u0080\3\2\2\2\u0083\u008d\7\f\2\2\u0084\u0086"+
		"\5\n\6\2\u0085\u0084\3\2\2\2\u0086\u0087\3\2\2\2\u0087\u0085\3\2\2\2\u0087"+
		"\u0088\3\2\2\2\u0088\u0089\3\2\2\2\u0089\u008a\5\6\4\2\u008a\u008c\3\2"+
		"\2\2\u008b\u0085\3\2\2\2\u008c\u008f\3\2\2\2\u008d\u008b\3\2\2\2\u008d"+
		"\u008e\3\2\2\2\u008e\u0093\3\2\2\2\u008f\u008d\3\2\2\2\u0090\u0092\5\n"+
		"\6\2\u0091\u0090\3\2\2\2\u0092\u0095\3\2\2\2\u0093\u0091\3\2\2\2\u0093"+
		"\u0094\3\2\2\2\u0094\u0096\3\2\2\2\u0095\u0093\3\2\2\2\u0096\u00a0\7\b"+
		"\2\2\u0097\u0099\t\2\2\2\u0098\u0097\3\2\2\2\u0099\u009c\3\2\2\2\u009a"+
		"\u0098\3\2\2\2\u009a\u009b\3\2\2\2\u009b\u009d\3\2\2\2\u009c\u009a\3\2"+
		"\2\2\u009d\u009f\5\4\3\2\u009e\u009a\3\2\2\2\u009f\u00a2\3\2\2\2\u00a0"+
		"\u009e\3\2\2\2\u00a0\u00a1\3\2\2\2\u00a1\u00b0\3\2\2\2\u00a2\u00a0\3\2"+
		"\2\2\u00a3\u00ac\7\f\2\2\u00a4\u00a6\t\2\2\2\u00a5\u00a4\3\2\2\2\u00a6"+
		"\u00a7\3\2\2\2\u00a7\u00a5\3\2\2\2\u00a7\u00a8\3\2\2\2\u00a8\u00a9\3\2"+
		"\2\2\u00a9\u00ab\5\6\4\2\u00aa\u00a5\3\2\2\2\u00ab\u00ae\3\2\2\2\u00ac"+
		"\u00aa\3\2\2\2\u00ac\u00ad\3\2\2\2\u00ad\u00b0\3\2\2\2\u00ae\u00ac\3\2"+
		"\2\2\u00af.\3\2\2\2\u00afU\3\2\2\2\u00af|\3\2\2\2\u00af\u00a3\3\2\2\2"+
		"\u00b0\5\3\2\2\2\u00b1\u00b5\7\3\2\2\u00b2\u00b4\5\n\6\2\u00b3\u00b2\3"+
		"\2\2\2\u00b4\u00b7\3\2\2\2\u00b5\u00b3\3\2\2\2\u00b5\u00b6\3\2\2\2\u00b6"+
		"\u00b8\3\2\2\2\u00b7\u00b5\3\2\2\2\u00b8\u00bc\5\4\3\2\u00b9\u00bb\5\n"+
		"\6\2\u00ba\u00b9\3\2\2\2\u00bb\u00be\3\2\2\2\u00bc\u00ba\3\2\2\2\u00bc"+
		"\u00bd\3\2\2\2\u00bd\u00bf\3\2\2\2\u00be\u00bc\3\2\2\2\u00bf\u00c0\7\4"+
		"\2\2\u00c0\u00e3\3\2\2\2\u00c1\u00c5\7\7\2\2\u00c2\u00c4\5\n\6\2\u00c3"+
		"\u00c2\3\2\2\2\u00c4\u00c7\3\2\2\2\u00c5\u00c3\3\2\2\2\u00c5\u00c6\3\2"+
		"\2\2\u00c6\u00c8\3\2\2\2\u00c7\u00c5\3\2\2\2\u00c8\u00cc\5\4\3\2\u00c9"+
		"\u00cb\5\n\6\2\u00ca\u00c9\3\2\2\2\u00cb\u00ce\3\2\2\2\u00cc\u00ca\3\2"+
		"\2\2\u00cc\u00cd\3\2\2\2\u00cd\u00cf\3\2\2\2\u00ce\u00cc\3\2\2\2\u00cf"+
		"\u00d0\7\b\2\2\u00d0\u00e3\3\2\2\2\u00d1\u00d5\7\5\2\2\u00d2\u00d4\5\n"+
		"\6\2\u00d3\u00d2\3\2\2\2\u00d4\u00d7\3\2\2\2\u00d5\u00d3\3\2\2\2\u00d5"+
		"\u00d6\3\2\2\2\u00d6\u00d8\3\2\2\2\u00d7\u00d5\3\2\2\2\u00d8\u00dc\5\4"+
		"\3\2\u00d9\u00db\5\n\6\2\u00da\u00d9\3\2\2\2\u00db\u00de\3\2\2\2\u00dc"+
		"\u00da\3\2\2\2\u00dc\u00dd\3\2\2\2\u00dd\u00df\3\2\2\2\u00de\u00dc\3\2"+
		"\2\2\u00df\u00e0\7\6\2\2\u00e0\u00e3\3\2\2\2\u00e1\u00e3\5\b\5\2\u00e2"+
		"\u00b1\3\2\2\2\u00e2\u00c1\3\2\2\2\u00e2\u00d1\3\2\2\2\u00e2\u00e1\3\2"+
		"\2\2\u00e3\7\3\2\2\2\u00e4\u00e5\t\3\2\2\u00e5\t\3\2\2\2\u00e6\u00e7\t"+
		"\4\2\2\u00e7\13\3\2\2\2#\17\26\35#)\629?ELRY`flsy\u0080\u0087\u008d\u0093"+
		"\u009a\u00a0\u00a7\u00ac\u00af\u00b5\u00bc\u00c5\u00cc\u00d5\u00dc\u00e2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}