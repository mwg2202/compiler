
// Generated from /home/mwglen/compiler/src/Flight.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "FlightParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by FlightParser.
 */
class  FlightVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by FlightParser.
   */
    virtual antlrcpp::Any visitFile(FlightParser::FileContext *context) = 0;

    virtual antlrcpp::Any visitStatement(FlightParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitExpression(FlightParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitArgument(FlightParser::ArgumentContext *context) = 0;

    virtual antlrcpp::Any visitWhitespace(FlightParser::WhitespaceContext *context) = 0;


};

