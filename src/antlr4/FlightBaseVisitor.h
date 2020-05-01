
// Generated from /home/mwglen/compiler/src/Flight.g4 by ANTLR 4.7.1

#pragma once


#include "antlr4-runtime.h"
#include "FlightVisitor.h"


/**
 * This class provides an empty implementation of FlightVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  FlightBaseVisitor : public FlightVisitor {
public:

  virtual antlrcpp::Any visitFile(FlightParser::FileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitStatement(FlightParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExpression(FlightParser::ExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitArgument(FlightParser::ArgumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitWhitespace(FlightParser::WhitespaceContext *ctx) override {
    return visitChildren(ctx);
  }


};

