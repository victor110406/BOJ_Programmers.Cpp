#include <string>
#include <vector>
#include <ctype.h>
using namespace std;

string solution(string s) {
    string answer = s;
    for (int i = 0, cnt = 0; i < s.length(); i++, cnt++)
    {
        if (cnt % 2 == 0 && islower(answer[i]))
        {
            answer[i] -= 32;
        }
        else if (cnt % 2 == 1 && isupper(answer[i]))
        {
            answer[i] += 32;
        }
        else if (answer[i] == ' ')
        {
            cnt = -1;
        }
    }

    return answer;
}