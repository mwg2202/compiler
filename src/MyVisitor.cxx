#include "MyVisitor.hxx"

antlrcpp::Any visitFile(FlightParser::FileContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any visitStatement(FlightParser::StatementContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any visitExpression(FlightParser::ExpressionContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any visitArgument(FlightParser::ArgumentContext *ctx) {
    return visitChildren(ctx);
}

antlrcpp::Any visitWhitespace(FlightParser::WhitespaceContext *ctx) {
    return visitChildren(ctx);
}