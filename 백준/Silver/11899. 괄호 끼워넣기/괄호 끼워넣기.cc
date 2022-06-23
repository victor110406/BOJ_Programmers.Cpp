#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string str;
    vector<char> ve;
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '(') {
            ve.push_back(str[i]);
        }
        else if (str[i] == ')') {
            if (ve.empty() || ve.back() == ')') {
                ve.push_back(str[i]);
            }
            else {
                ve.pop_back();
            }
        }
    }
    cout << ve.size() << '\n';
    return 0;
}