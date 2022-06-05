#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    size_t length = s.length();
    if (length % 2 == 1) {
        char* answer = (char*)calloc(sizeof(char),2);
        answer[0] = s[length / 2];
        return answer;
    }
    else if (length % 2 == 0) {
        char* answer = (char*)calloc(sizeof(char),3);
        answer[0] = s[length / 2 - 1];
        answer[1] = s[length / 2];
        return answer;
    }
}