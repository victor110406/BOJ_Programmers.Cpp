using System;

public class Solution {
    public string solution(string my_string) {
        string[] charsToRemove = new string[] { "a", "e", "i", "o", "u" };
        foreach (var c in charsToRemove)
        {
            my_string = my_string.Replace(c, string.Empty);
        }
        return my_string;
    }
}