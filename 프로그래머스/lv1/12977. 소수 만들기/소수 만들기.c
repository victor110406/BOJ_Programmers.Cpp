#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
 
int sosu(int num){
    for(int i=2; i < num; i++){
        if(num%i == 0){
            return 0;
        }
    }
    return 1;
}
 
int solution(int nums[], size_t nums_len) {
    int answer = 0;
    int sum;
    for(int i = 0; i <nums_len - 2; i++){
        for(int j = i+1; j < nums_len -1; j++){
            for(int k = j+1; k < nums_len; k++){
                sum = nums[i] + nums[j] + nums[k];
                if(sosu(sum) == 1){
                    answer++;
                }
            }
        }
    }
    return answer;
}