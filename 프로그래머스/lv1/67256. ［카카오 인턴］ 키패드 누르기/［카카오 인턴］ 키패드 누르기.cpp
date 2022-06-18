#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    int left = 10, right = 12;
    int leftLen = 0, rightLen = 0, temp;
    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] == 1 || numbers[i] == 4 || numbers[i] == 7) {
            left = numbers[i];
            answer += 'L';
        }
        else if (numbers[i] == 3 || numbers[i] == 6 || numbers[i] == 9) {
            right = numbers[i];
            answer += 'R';
        }
        else {
            if (numbers[i] == 0) {
                numbers[i] = 11;
            }
            temp = abs(left - numbers[i]);
            leftLen = (temp / 3) + (temp % 3);
            temp = abs(right - numbers[i]);
            rightLen = (temp / 3) + (temp % 3);

            if (leftLen == rightLen)
            {
                if (hand == "right")
                {
                    answer += "R";
                    right = numbers[i];
                }
                else
                {
                    answer += "L";
                    left= numbers[i];
                }
            }
            else if (leftLen > rightLen)
            {
                answer += "R";
                right = numbers[i];
            }
            else
            {
                answer += "L";
                left = numbers[i];
            }
        }
    }
    return answer;
}