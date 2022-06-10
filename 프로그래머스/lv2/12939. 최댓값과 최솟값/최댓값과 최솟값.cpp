#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    string str;
    vector<int>ve;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == ' ') {
            ve.push_back(stoi(str));
            str = "";
            continue;
        }
        str += s[i];
    }
    ve.push_back(stoi(str));

    answer += to_string(*min_element(ve.begin(), ve.end()));
    answer += " ";
    answer += to_string(*max_element(ve.begin(), ve.end()));
    
    return answer;
}