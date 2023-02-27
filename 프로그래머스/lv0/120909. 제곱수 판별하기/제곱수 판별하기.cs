using System;

public class Solution {
    public int solution(int n) {
        int result = (int)Math.Sqrt(n);
        if(result * result == n){
            return 1;
        }
        else{
            return 2;
        }
    }
}