using System;

public class Solution {
    public string solution(string cipher, int code) {
        string answer = "";
        for(int i=0; i<cipher.Length; i++){
            if(i % code == code - 1){
                answer += cipher[i];
            }
        }
        return answer;
    }
}