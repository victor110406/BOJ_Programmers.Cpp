public class Solution {
    public string solution(string phone_number) {
        string str = "";
        for (int i = 0; i < phone_number.Length; i++) {
            if(i < phone_number.Length - 4)
            {
                str += "*";
            }
            else
            {
                str += phone_number[i];
            }
        }
    return str;
    }
}