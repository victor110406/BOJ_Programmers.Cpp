using System;

public class Solution {
    public int solution(int n, int k) {
        if(n / 10 >= k){
            return n * 12000 ;
        }
        else{
            return n * 12000 + (k - (n/10)) * 2000;
        }
    }
}