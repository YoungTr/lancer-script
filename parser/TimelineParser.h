//
// Created by YoungTr on 2022/11/15.
//

#ifndef LANCER_TIMELINEPARSER_H
#define LANCER_TIMELINEPARSER_H

#include "Parser.h"

class TimelineParser : public Parser {
public:
    explicit TimelineParser(FILE *fd) : Parser(fd) {}

    void Parse(const char *time, const char *type, const char *method, bool in) override;
};


#endif //LANCER_TIMELINEPARSER_H
