//
// Created by YoungTr on 2022/11/15.
//

#include "TimelineParser.h"
#include "../lancer.h"


char temp[512];


void TimelineParser::Parse(const char *time, const char *type, const char *method, bool in) {



    if (nullptr == method) {
        snprintf(temp, sizeof(temp), "%s-%s [000] ...1 %s: tracing_mark_write: %s|%s\n",
                 DEFAULT_PACKAGE,
                 DEFAULT_PID,
                 time,
                 type,
                 DEFAULT_PID);
    } else {
        char *real_method;
        if (IsInjectMethod(method)) {
            real_method = (char *)method + 2;
        } else {
            real_method = (char *)method;
        }
        snprintf(temp, sizeof(temp), "%s-%s [000] ...1 %s: tracing_mark_write: %s|%s|%s\n",
                 DEFAULT_PACKAGE,
                 DEFAULT_PID,
                 time,
                 type,
                 DEFAULT_PID,
                 real_method);
    }

    fputs(temp, fd_);

}
