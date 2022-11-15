//
// Created by YoungTr on 2022/11/15.
//

#ifndef LANCER_CHECKPARSER_H
#define LANCER_CHECKPARSER_H

#include "Parser.h"

using namespace std;

class CheckParser : public Parser {
public:
    explicit CheckParser(FILE *fd) : Parser(fd) {}

    void Parse(const char *time, const char *type, const char *method, bool in) override;

    void Finish() override;

private:
    stack<string> words;

};

#endif //LANCER_CHECKPARSER_H
