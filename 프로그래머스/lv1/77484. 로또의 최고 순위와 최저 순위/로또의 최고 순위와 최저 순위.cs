using System;

public class Solution {
    public int[] solution(int[] lottos, int[] win_nums) {
        int count = 0;
    int zeroCount = 0;
    for(int i=0; i<lottos.Length; i++){
        if(lottos[i] == 0){
                zeroCount++;
                continue;
            }
        for(int j=0; j<win_nums.Length; j++){
            if(lottos[i] == win_nums[j]){
                count++;
            }
        }
    }
    int[] answer = new int[2];
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
}