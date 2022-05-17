#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

wchar_t* solution(int n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    wchar_t* answer = (wchar_t*)malloc(sizeof(wchar_t)*n + 1);
    answer[0]='\0';
    for(int i=0; i<n; i++){
        if(i % 2 == 0){
            strcat(answer, "수");
        }
        else{
            strcat(answer, "박");
        }
    }
    return answer;
}