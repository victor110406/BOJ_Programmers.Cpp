#include<iostream>
#include<string>
#include<vector>
using namespace std;

string solution(string new_id) {
    string answer = new_id;
    for (int i = 0; i < answer.length(); i++)
        if (answer[i] >= 'A' && answer[i] <= 'Z')
            answer[i] = tolower(answer[i]);

    for (int i = 0; i < answer.length(); ) {
        if ((answer[i] >= 'a' && answer[i] <= 'z') || (answer[i] >= '0' && answer[i] <= '9')
            || answer[i] == '-' || answer[i] == '_' || answer[i] == '.')
        {
            i++;
            continue;
        }
        answer.erase(answer.begin() + i);
    }

    for (int i = 1; i < answer.length(); ) {
        if (answer[i] == '.' && answer[i - 1] == '.') {
            answer.erase(answer.begin() + i);
            continue;
        }
        else i++;
    }

    if (answer.front() == '.') {
        answer.erase(answer.begin());
    }
        
    if (answer.back() == '.') {
        answer.erase(answer.end() - 1);
    }

    if (answer.length() == 0) {
        answer += "a";
    }

    if (answer.length() >= 16) {
        while (answer.length() != 15) {
            answer.erase(answer.begin() + 15);
        }
    }
    if (answer.back() == '.') answer.erase(answer.end() - 1);

    if (answer.length() <= 2) {
        while (answer.length() != 3) {
            answer += answer.back();
        }
    }
    return answer;
}