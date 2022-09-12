using System;

public class Solution {
    public int solution(int n) {
        for(int loop_i = 1; loop_i < n; loop_i++)
        {
            if (n % loop_i == 1)
                return loop_i;
        }
        return -1;
    }
}