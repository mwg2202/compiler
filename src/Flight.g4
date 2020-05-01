grammar Flight;

// Non-Terminal Symbols
file: whitespace* statement (whitespace* '\n' whitespace* statement)* whitespace* EOF;

statement: OPENPARENTHESIS whitespace* KEYWORD (whitespace+ expression)* whitespace*  CLOSEPARENTHESIS ((SPACE | TAB)* statement)*
        |  OPENBRACE whitespace* KEYWORD (whitespace+ expression)* whitespace* CLOSEBRACE ((SPACE | TAB)* statement)*
        |  OPENBRACKET whitespace* KEYWORD (whitespace+ expression)* whitespace* CLOSEBRACKET ((SPACE | TAB)* statement)*
        |  KEYWORD ((SPACE | TAB)+ expression)*
        ;

expression: OPENPARENTHESIS whitespace* statement whitespace* CLOSEPARENTHESIS
        |   OPENBRACKET whitespace* statement whitespace* CLOSEBRACKET
        |   OPENBRACE whitespace* statement whitespace* CLOSEBRACE
        |   argument
        ;


argument: NULLSTRING
        |   CHARSTRING
        |   HEXVALUE
        |   FLOAT
        |   INTEGER
        |   KEYWORD
        ;

whitespace              : SPACE
                        | NEWLINE
                        | TAB
                        ; 

// Terminal Symbols

OPENPARENTHESIS         : '(';
CLOSEPARENTHESIS        : ')';
OPENBRACE               : '{';
CLOSEBRACE              : '}';
OPENBRACKET             : '[';
CLOSEBRACKET            : ']';

SPACE               : ' ';
NEWLINE             : '\n';
TAB                 : '\t';


KEYWORD            :   ~[\t\n 0-9"'}{)([\]] ~[\t\n }{)([\]]*;

NULLSTRING          :   '"' (~["]* ESCAPEDVARIABLE)* ~["]* '"';
CHARSTRING          :   '\'' ([\\']* ~[']*)* '\'';
INTEGER             :   [0-9]+;
FLOAT               :   [0-9]* [.] [0-9]*;
HEXVALUE            :   ('0')? [xX] [0-9]+;

fragment ESCAPEDVARIABLE        :   '\\"'
                                |   '\\n'
                                |   '\\t'
                                ;


