#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

char* solution(const char* s) {
    int temp;
    int length = strlen(s);
    char* answer = (char*)calloc(sizeof(char),length+1);
    strcpy(answer,s);
    for(int i=0; i<length; i++){
        for(int j=i+1; j<length; j++){
            if(answer[i] < answer[j]){
                temp = answer[i];
                answer[i] = answer[j];
                answer[j] = temp;
            }
        }
    }
    return answer;
}