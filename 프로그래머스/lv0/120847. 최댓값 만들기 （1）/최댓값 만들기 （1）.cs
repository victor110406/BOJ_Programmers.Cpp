using System;

public class Solution {
    public int solution(int[] numbers) {
        Array.Sort(numbers);
        Array.Reverse(numbers);
        int[] answer = numbers;
        return answer[0] * answer[1];
    } 
}