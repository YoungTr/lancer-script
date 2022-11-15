//
// Created by YoungTr on 2022/11/15.
//

#ifndef LANCER_HANDLERPARSER_H
#define LANCER_HANDLERPARSER_H

#include <cstdio>
#include "Parser.h"

class HandlerParser : public Parser {
public:
    HandlerParser(FILE *fd) : Parser(fd) {}

    void Parse(const char *time, const char *type, const char *method, bool in) override;
};

#endif //LANCER_HANDLERPARSER_H
