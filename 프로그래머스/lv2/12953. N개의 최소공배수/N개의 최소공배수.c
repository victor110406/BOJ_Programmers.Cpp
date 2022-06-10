#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int GCD(int a, int b) {      
    if (a == 0) {
        return b;
    }
    return GCD(b % a, a);
}

int LCM(int a, int b) {
    return a * b / GCD(a, b);
}

int solution(int arr[], size_t arr_len) {
    int answer = 0;
    answer = arr[0];
    for (int i = 1; i < arr_len; i++) {
        answer = LCM(answer, arr[i]);
    }
    return answer;
}