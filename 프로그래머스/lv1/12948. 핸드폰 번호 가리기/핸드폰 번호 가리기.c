#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

char* solution(const char* phone_number) {
    int length = strlen(phone_number);
    char* answer = (char*)malloc(sizeof(char)*length + 1);
    strcpy(answer, phone_number);
    for(int i=0; i<length - 4; i++){
        answer[i]='*';
    }
    return answer;
}