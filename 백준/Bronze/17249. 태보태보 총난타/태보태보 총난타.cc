#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int left = 0, right= 0;
    bool leftBool = true, rightBool = false;
    string str;
    cin >> str;
    for (int i = 0; i <= str.length(); i++) {
        if (leftBool && str[i] == '@') {
            left++;
        }
        else if(rightBool && str[i] == '@') {
            right++;
        }
        else if (str[i] == '(') {
            leftBool = false;
            rightBool = true;
        }
    }
    cout << left << " " << right;

    return 0;
}