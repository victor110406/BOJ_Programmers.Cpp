#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
    string str, str1;
    string result;
    cin >> str >> str1;
    if (str.length() > str1.length()) {
        string temp = str;
        str = str1;
        str1 = temp;
    }
    int gap = str1.length() - str.length();
    for (int i = 0; i < str1.length(); i++) {
        if (i - gap < 0) {
            result += str1[i];
        }
        else {
            int sum = str[i - gap] - '0' + str1[i] - '0';
            result += to_string(sum);
        }
    }
    cout << result << '\n';
    return 0;
}