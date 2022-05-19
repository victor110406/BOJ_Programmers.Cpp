#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) {
    int length = strlen(s);
    int answer = 0;
    if(s[0]== '-' || s[0] == '+'){
        for(int i=1; i < length; i++){
            answer += (s[i] - 48);
            if(i != length - 1){
                answer *= 10;
            }
        }
        if(s[0]=='-'){
            answer *= -1;
        }
    }
    else{
        for(int i=0; i < length; i++){
            answer += (s[i] - 48);
            if(i != length - 1){
                answer *= 10;
            }
        }
    }
    return answer;
}