//
// Created by YoungTr on 2022/11/15.
//

#include <stack>
#include <string>

#include "CheckParser.h"

static int count_ = 0;

void CheckParser::Parse(const char *time, const char *type, const char *method, bool in) {

    if (in) {
        words.push(string(method));
    } else {
        if (words.empty()) {
            printf("not find in method: %s, index: %d\n", method, count_);
        } else {
            words.pop();
        }
    }
    count_++;

}

void CheckParser::Finish() {
    printf("words size: %lu\n", words.size());
}
