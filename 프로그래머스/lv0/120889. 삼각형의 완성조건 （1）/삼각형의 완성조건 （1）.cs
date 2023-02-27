using System;

public class Solution {
    public int solution(int[] sides) {
        Array.Sort(sides);
        if(sides[2] < sides[0] + sides[1]){
            return 1;
        }
        else{
            return 2;
        }
    }
}