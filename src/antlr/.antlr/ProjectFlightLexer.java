// Generated from /home/mwglen/compiler/src/antlr/ProjectFlight.g4 by ANTLR 4.7.1
import org.antlr.v4.runtime.Lexer;
import org.antlr.v4.runtime.CharStream;
import org.antlr.v4.runtime.Token;
import org.antlr.v4.runtime.TokenStream;
import org.antlr.v4.runtime.*;
import org.antlr.v4.runtime.atn.*;
import org.antlr.v4.runtime.dfa.DFA;
import org.antlr.v4.runtime.misc.*;

@SuppressWarnings({"all", "warnings", "unchecked", "unused", "cast"})
public class ProjectFlightLexer extends Lexer {
	static { RuntimeMetaData.checkVersion("4.7.1", RuntimeMetaData.VERSION); }

	protected static final DFA[] _decisionToDFA;
	protected static final PredictionContextCache _sharedContextCache =
		new PredictionContextCache();
	public static final int
		OPENPARENTHESIS=1, CLOSEPARENTHESIS=2, OPENBRACE=3, CLOSEBRACE=4, OPENBRACKET=5, 
		CLOSEBRACKET=6, SPACE=7, NEWLINE=8, TAB=9, KEYWORD=10, NULLSTRING=11, 
		CHARSTRING=12, INTEGER=13, FLOAT=14, HEXVALUE=15;
	public static String[] channelNames = {
		"DEFAULT_TOKEN_CHANNEL", "HIDDEN"
	};

	public static String[] modeNames = {
		"DEFAULT_MODE"
	};

	public static final String[] ruleNames = {
		"OPENPARENTHESIS", "CLOSEPARENTHESIS", "OPENBRACE", "CLOSEBRACE", "OPENBRACKET", 
		"CLOSEBRACKET", "SPACE", "NEWLINE", "TAB", "KEYWORD", "NULLSTRING", "CHARSTRING", 
		"INTEGER", "FLOAT", "HEXVALUE", "ESCAPEDVARIABLE"
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


	public ProjectFlightLexer(CharStream input) {
		super(input);
		_interp = new LexerATNSimulator(this,_ATN,_decisionToDFA,_sharedContextCache);
	}

	@Override
	public String getGrammarFileName() { return "ProjectFlight.g4"; }

	@Override
	public String[] getRuleNames() { return ruleNames; }

	@Override
	public String getSerializedATN() { return _serializedATN; }

	@Override
	public String[] getChannelNames() { return channelNames; }

	@Override
	public String[] getModeNames() { return modeNames; }

	@Override
	public ATN getATN() { return _ATN; }

	public static final String _serializedATN =
		"\3\u608b\ua72a\u8133\ub9ed\u417c\u3be7\u7786\u5964\2\21\u0088\b\1\4\2"+
		"\t\2\4\3\t\3\4\4\t\4\4\5\t\5\4\6\t\6\4\7\t\7\4\b\t\b\4\t\t\t\4\n\t\n\4"+
		"\13\t\13\4\f\t\f\4\r\t\r\4\16\t\16\4\17\t\17\4\20\t\20\4\21\t\21\3\2\3"+
		"\2\3\3\3\3\3\4\3\4\3\5\3\5\3\6\3\6\3\7\3\7\3\b\3\b\3\t\3\t\3\n\3\n\3\13"+
		"\3\13\7\138\n\13\f\13\16\13;\13\13\3\f\3\f\7\f?\n\f\f\f\16\fB\13\f\3\f"+
		"\7\fE\n\f\f\f\16\fH\13\f\3\f\7\fK\n\f\f\f\16\fN\13\f\3\f\3\f\3\r\3\r\7"+
		"\rT\n\r\f\r\16\rW\13\r\3\r\7\rZ\n\r\f\r\16\r]\13\r\7\r_\n\r\f\r\16\rb"+
		"\13\r\3\r\3\r\3\16\6\16g\n\16\r\16\16\16h\3\17\7\17l\n\17\f\17\16\17o"+
		"\13\17\3\17\3\17\7\17s\n\17\f\17\16\17v\13\17\3\20\5\20y\n\20\3\20\3\20"+
		"\6\20}\n\20\r\20\16\20~\3\21\3\21\3\21\3\21\3\21\3\21\5\21\u0087\n\21"+
		"\2\2\22\3\3\5\4\7\5\t\6\13\7\r\b\17\t\21\n\23\13\25\f\27\r\31\16\33\17"+
		"\35\20\37\21!\2\3\2\n\13\2\13\f\"\"$$)+\62;]]__}}\177\177\t\2\13\f\"\""+
		"*+]]__}}\177\177\3\2$$\4\2))^^\3\2))\3\2\62;\3\2\60\60\4\2ZZzz\2\u0094"+
		"\2\3\3\2\2\2\2\5\3\2\2\2\2\7\3\2\2\2\2\t\3\2\2\2\2\13\3\2\2\2\2\r\3\2"+
		"\2\2\2\17\3\2\2\2\2\21\3\2\2\2\2\23\3\2\2\2\2\25\3\2\2\2\2\27\3\2\2\2"+
		"\2\31\3\2\2\2\2\33\3\2\2\2\2\35\3\2\2\2\2\37\3\2\2\2\3#\3\2\2\2\5%\3\2"+
		"\2\2\7\'\3\2\2\2\t)\3\2\2\2\13+\3\2\2\2\r-\3\2\2\2\17/\3\2\2\2\21\61\3"+
		"\2\2\2\23\63\3\2\2\2\25\65\3\2\2\2\27<\3\2\2\2\31Q\3\2\2\2\33f\3\2\2\2"+
		"\35m\3\2\2\2\37x\3\2\2\2!\u0086\3\2\2\2#$\7*\2\2$\4\3\2\2\2%&\7+\2\2&"+
		"\6\3\2\2\2\'(\7}\2\2(\b\3\2\2\2)*\7\177\2\2*\n\3\2\2\2+,\7]\2\2,\f\3\2"+
		"\2\2-.\7_\2\2.\16\3\2\2\2/\60\7\"\2\2\60\20\3\2\2\2\61\62\7\f\2\2\62\22"+
		"\3\2\2\2\63\64\7\13\2\2\64\24\3\2\2\2\659\n\2\2\2\668\n\3\2\2\67\66\3"+
		"\2\2\28;\3\2\2\29\67\3\2\2\29:\3\2\2\2:\26\3\2\2\2;9\3\2\2\2<F\7$\2\2"+
		"=?\n\4\2\2>=\3\2\2\2?B\3\2\2\2@>\3\2\2\2@A\3\2\2\2AC\3\2\2\2B@\3\2\2\2"+
		"CE\5!\21\2D@\3\2\2\2EH\3\2\2\2FD\3\2\2\2FG\3\2\2\2GL\3\2\2\2HF\3\2\2\2"+
		"IK\n\4\2\2JI\3\2\2\2KN\3\2\2\2LJ\3\2\2\2LM\3\2\2\2MO\3\2\2\2NL\3\2\2\2"+
		"OP\7$\2\2P\30\3\2\2\2Q`\7)\2\2RT\t\5\2\2SR\3\2\2\2TW\3\2\2\2US\3\2\2\2"+
		"UV\3\2\2\2V[\3\2\2\2WU\3\2\2\2XZ\n\6\2\2YX\3\2\2\2Z]\3\2\2\2[Y\3\2\2\2"+
		"[\\\3\2\2\2\\_\3\2\2\2][\3\2\2\2^U\3\2\2\2_b\3\2\2\2`^\3\2\2\2`a\3\2\2"+
		"\2ac\3\2\2\2b`\3\2\2\2cd\7)\2\2d\32\3\2\2\2eg\t\7\2\2fe\3\2\2\2gh\3\2"+
		"\2\2hf\3\2\2\2hi\3\2\2\2i\34\3\2\2\2jl\t\7\2\2kj\3\2\2\2lo\3\2\2\2mk\3"+
		"\2\2\2mn\3\2\2\2np\3\2\2\2om\3\2\2\2pt\t\b\2\2qs\t\7\2\2rq\3\2\2\2sv\3"+
		"\2\2\2tr\3\2\2\2tu\3\2\2\2u\36\3\2\2\2vt\3\2\2\2wy\7\62\2\2xw\3\2\2\2"+
		"xy\3\2\2\2yz\3\2\2\2z|\t\t\2\2{}\t\7\2\2|{\3\2\2\2}~\3\2\2\2~|\3\2\2\2"+
		"~\177\3\2\2\2\177 \3\2\2\2\u0080\u0081\7^\2\2\u0081\u0087\7$\2\2\u0082"+
		"\u0083\7^\2\2\u0083\u0087\7p\2\2\u0084\u0085\7^\2\2\u0085\u0087\7v\2\2"+
		"\u0086\u0080\3\2\2\2\u0086\u0082\3\2\2\2\u0086\u0084\3\2\2\2\u0087\"\3"+
		"\2\2\2\20\29@FLU[`hmtx~\u0086\2";
	public static final ATN _ATN =
		new ATNDeserializer().deserialize(_serializedATN.toCharArray());
	static {
		_decisionToDFA = new DFA[_ATN.getNumberOfDecisions()];
		for (int i = 0; i < _ATN.getNumberOfDecisions(); i++) {
			_decisionToDFA[i] = new DFA(_ATN.getDecisionState(i), i);
		}
	}
}