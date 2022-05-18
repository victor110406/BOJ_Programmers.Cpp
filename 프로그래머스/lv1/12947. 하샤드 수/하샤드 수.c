#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    bool answer = true;
    int sum = 0;
    int result = x;
    while(x>0){
        sum += (x % 10);
        x /= 10;
    }
    if(result % sum == 0){
        return answer;
    }
    else{
        answer = false;
        return false;
    }
}