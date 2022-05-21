#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

// lottos_len은 배열 lottos의 길이입니다.
// win_nums_len은 배열 win_nums의 길이입니다.
int* solution(int lottos[], size_t lottos_len, int win_nums[], size_t win_nums_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int count = 0;
    int zeroCount = 0;
    for(int i=0; i<lottos_len; i++){
        if(lottos[i] == 0){
                zeroCount++;
                continue;
            }
        for(int j=0; j<win_nums_len; j++){
            if(lottos[i] == win_nums[j]){
                count++;
            }
        }
    }
    int* answer = (int*)calloc(sizeof(int),2);
    if((count + zeroCount) > 1){
        answer[0]=7-(count + zeroCount);
    }
    else{
        answer[0]=6;
    }
    if(count > 1){
        answer[1]= 7 - count;
    }
    else{
        answer[1]= 6;
    }
    return answer;
}