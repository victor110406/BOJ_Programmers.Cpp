using System;

public class Solution {
    public string solution(string my_string, string letter) {
        my_string = my_string.Replace(letter, string.Empty);
        return my_string;
    }
}