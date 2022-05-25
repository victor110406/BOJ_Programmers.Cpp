#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0, fir = 0, se = 1;
    for (int i = 2; i <= n; i++) {
        answer = (fir + se) % 1234567;
        fir = se;
        se = answer;
    }
    return answer;
}