using System;

public class Solution {
    public int solution(int price) {
        if(price < 100000){
            return price;
        }
        else if(price < 300000 ){
            return price - (int)Math.Ceiling((double)price * 0.05);
        }
        else if(price < 500000 ){
            return price - (int)Math.Ceiling((double)price * 0.1);
        } 
        else{
            return price - (int)Math.Ceiling((double)price * 0.2);
        }
    }
}