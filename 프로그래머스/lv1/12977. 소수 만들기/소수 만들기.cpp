#include <vector>
#include <iostream>
using namespace std;

int sosu(int num){
    for(int i=2; i < num; i++){
        if(num%i == 0){
            return 0;
        }
    }
    return 1;
}
 
int solution(vector<int> nums) {
    int answer = 0;
    int sum;
    for(int i = 0; i <nums.size() - 2; i++){
        for(int j = i+1; j < nums.size() -1; j++){
            for(int k = j+1; k < nums.size(); k++){
                sum = nums[i] + nums[j] + nums[k];
                if(sosu(sum) == 1){
                    answer++;
                }
            }
        }
    }
    return answer;
}