//
// Created by YoungTr on 2022/11/15.
//

#ifndef LANCER_PARSER_H
#define LANCER_PARSER_H

#include <cstdio>

class Parser {

public:
    explicit Parser(FILE *fd) : fd_(fd) {}

    virtual void Parse(const char *time, const char *type, const char *method, bool in) = 0;

    virtual void Finish() {
        if (nullptr != fd_) {
            fclose(fd_);
        }
    }

protected:
    bool IsInjectMethod(const char *method) {
        return nullptr != method && (('E' == method[0] || 'B' == method[0]) && ':' == method[1]);
    }

    FILE *fd_;
};

#endif //LANCER_PARSER_H
