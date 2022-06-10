#include <string>
#include <vector>
#include <ctype.h>

using namespace std;

string solution(string s) {
    for (int i = 0; i < s.length(); i++) {
        s[i] = tolower(s[i]);
    }
    s[0] = toupper(s[0]);
    for (int i = 1; i < s.length() - 1; i++) {
        if (s[i] == ' ' && s[i + 1] != ' ') {
            s[i + 1] = toupper(s[i + 1]);
        }
    }
    return s;
}