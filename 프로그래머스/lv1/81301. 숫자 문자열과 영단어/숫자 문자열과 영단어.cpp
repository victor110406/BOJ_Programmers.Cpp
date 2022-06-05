#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    for (int i = 0; i < s.length(); i++) {
        answer *= 10;
        if (s[i] >= 48 && s[i] <= 57) {
            answer += (s[i] - 48);
            continue;
        }
        if (s[i] == 'z' && s[i + 1] == 'e' && s[i + 2] == 'r' && s[i + 3] == 'o') {
            i += 3;
            answer += 0;
            continue;
        }
        if (s[i] == 'o' && s[i + 1] == 'n' && s[i + 2] == 'e') {
            i += 2;
            answer += 1;
            continue;
        }
        if (s[i] == 't' && s[i + 1] == 'w' && s[i + 2] == 'o') {
            i += 2;
            answer += 2;
            continue;
        }
        if (s[i] == 't' && s[i + 1] == 'h' && s[i + 2] == 'r' && s[i + 3] == 'e' && s[i + 4] == 'e') {
            i += 4;
            answer += 3;
            continue;
        }
        if (s[i] == 'f' && s[i + 1] == 'o' && s[i + 2] == 'u' && s[i + 3] == 'r') {
            i += 3;
            answer += 4;
            continue;
        }
        if (s[i] == 'f' && s[i + 1] == 'i' && s[i + 2] == 'v' && s[i + 3] == 'e') {
            i += 3;
            answer += 5;
            continue;
        }
        if (s[i] == 's' && s[i + 1] == 'i' && s[i + 2] == 'x') {
            i += 2;
            answer += 6;
            continue;
        }
        if (s[i] == 's' && s[i + 1] == 'e' && s[i + 2] == 'v' && s[i + 3] == 'e' && s[i + 4] == 'n') {
            i += 4;
            answer += 7;
            continue;
        }
        if (s[i] == 'e' && s[i + 1] == 'i' && s[i + 2] == 'g' && s[i + 3] == 'h' && s[i + 4] == 't') {
            i += 4;
            answer += 8;
            continue;
        }
        if (s[i] == 'n' && s[i + 1] == 'i' && s[i + 2] == 'n' && s[i + 3] == 'e') {
            i += 3;
            answer += 9;
            continue;
        }
    }
    return answer;
}