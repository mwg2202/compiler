#pragma once
#include "FlightBaseVisitor.h"

class MyVisitor {
public:
    antlrcpp::Any visitFile(FlightParser::FileContext *ctx);
    antlrcpp::Any visitStatement(FlightParser::StatementContext *ctx);
    antlrcpp::Any visitExpression(FlightParser::ExpressionContext *ctx);
    antlrcpp::Any visitArgument(FlightParser::ArgumentContext *ctx);
    antlrcpp::Any visitWhitespace(FlightParser::WhitespaceContext *ctx);
};
