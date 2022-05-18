#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(long long n) {
    long long x = 0;
    long long i = 1;
    while(1){
        if(n == i * i){
            return (i + 1)*(i + 1);
        }
        else if(n < i * i){
            return -1;
        }
        i++;
    }
 
}