using System;

public class Solution {
    public int solution(int num1, int num2) {
        double temp = 0;
        
        temp = (double)num1 / (double)num2;
        temp *= 1000;
        
        return (int)temp;
    }
}