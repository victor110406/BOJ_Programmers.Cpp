#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int numbers[], size_t numbers_len) {
    int index[201]={};
    int count = 0;
    for(int i=0; i<numbers_len; i++){
       for(int j=i+1; j<numbers_len; j++){
           index[numbers[i]+numbers[j]]++;
       } 
    }
    
    for(int i=0; i<201; i++){
        if(index[i] > 0){
            count++;
        }
    }
    int* answer = (int*)calloc(sizeof(int),count);
    int j = 0;
    for(int i=0; i<201; i++){
        if(index[i] > 0){
            answer[j] = i;
            j++;
        }
    }
    return answer;
}