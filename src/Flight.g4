grammar Flight;

/* Non-Terminals */
file            : ws? ((otherCodeRegion|flightCode) ws?)* EOF;
otherCodeRegion : OTHERLANGUAGE ws? OTHERCODE;
flightCode      : (statement (ws? (NL|SC))+ )+;
 
statement       : infixStatement
                | prefixStatement
                ;

infixStatement  : (argument SPACE+)? infixOperator (SPACE+ argument)?;

prefixStatement : KEYWORD (SPACE+ argument)*; // PrefixOperator

argument        : LP ws? statement ws? RP
                | expression
                ;

expression      : expression ws? (POWER|ROOT) ws? expression
                | expression ws? (TIMES|DIVIDE|MODULO) ws? expression
                | expression ws? (PLUS|MINUS) ws? expression
                | datatype
                | KEYWORD  // Variable
                ;

datatype        : HEXVALUE
                | UINT
                | INT
                | CHAR
                | STRING
                | BOOL
                ;

infixOperator   : PLUS
                | MINUS
                | DIVIDE
                | TIMES
                | MODULO
                | POWER
                | ROOT
                | EQUALS
                | ISEQUALTO
                | NOTEQUAL
                | GREATERTHAN
                | LESSTHAN
                | GREATERTHANEQUALTO
                | LESSTHANEQUALTO
                | ARROW
                | DOUBLEARROW
                | TILDE
                ;

ws      : (NL|SPACE|TAB)+;

/* Terminals */
COMMENT         : ('##' .*? '##'
                | '#' .*? '\n') -> skip;

OTHERCODE       : '`' (~[`])* '`';
OTHERLANGUAGE   : '__x64__'
                | '__x86__'
                | '__x16__'
                | '__ARM64__'
                | '__CXX__'
                | '__C__'
                ;

CHAR            : '\'' .*? '\'';
STRING          : '"' .*? '"';
HEXVALUE        : ('0')? [xX] [0-9]+;
UINT            : [0-9]+;
INT             : ('+'|'-')? [0-9]+;
DECIMAL         : [0-9]+ '.' [0-9]+;
BOOL            : [Tt] [Rr] [Uu] [Ee]
                | [Ff] [Aa] [Ll] [Ss] [Ee]
                ;

PLUS            : '+';
MINUS           : '-';
DIVIDE          : '/';
TIMES           : '*';
MODULO          : '%';
POWER           : '^';
ROOT            : 'root';
EQUALS          : '='; // Set a variable
ISEQUALTO       : '==';
NOTEQUAL        : '!=';
LESSTHAN        : '<';
GREATERTHAN             : '>';
LESSTHANEQUALTO         : '<=';
GREATERTHANEQUALTO      : '>=';
ARROW                   : '->';
DOUBLEARROW             : '=>';
TILDE                   : '~';

LP  :   '(';
RP  :   ')';
LB  :   '[';
RB  :   ']';
L3  :   '{';
R3  :   '}';
SC  :   ';';

TAB     : '\t';
SPACE   : ' ';
NL      : '\n';


KEYWORD         : [a-zA-Z] [a-zA-Z0-9]*; // Keywords are both variables and operators  

// Valid Keywords for Other Code Regions
/*
CXX
C
ASM
*/