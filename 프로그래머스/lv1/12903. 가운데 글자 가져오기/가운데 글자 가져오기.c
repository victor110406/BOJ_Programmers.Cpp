#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>


char* solution(const char* s) {
    size_t length = strlen(s);
    if (length % 2 == 1) {
        char* answer = (char*)calloc(sizeof(char),2);
        answer[0] = s[length / 2];
        return answer;
    }
    else if (length % 2 == 0) {
        char* answer = (char*)calloc(sizeof(char),3);
        answer[0] = s[length / 2 - 1];
        answer[1] = s[length / 2];
        return answer;
    }
}