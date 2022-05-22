#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int prices[], size_t prices_len) {
    
    int result = 0;
    int* answer = (int*)calloc(sizeof(int),prices_len);
    for(int i = 0; i < prices_len; i++) {
         for(int j = i; j < prices_len; j++) {
             result = j;
             if(prices[i] > prices[j])  {
                 break;
             }
         }
        answer[i] = result - i;
    }
    return answer;
}