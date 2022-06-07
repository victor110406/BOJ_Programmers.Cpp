#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
    string str;
    vector<char> vr;
    while (getline(cin, str)) {
        if (str == ".") {
            break;
        }
        for (int i = 0; i < str.length(); i++) {
            if (str[i] == '(' || str[i] == '[') {
                vr.push_back(str[i]);
            }
            else if (str[i] == ')') {
                if (!vr.empty() && vr.back() == '(') {
                    vr.pop_back();
                }
                else {
                    vr.push_back(str[i]);
                }
            }
            else if (str[i] == ']') {
                if (!vr.empty() && vr.back() == '[') {
                    vr.pop_back();
                }
                else {
                    vr.push_back(str[i]);
                }
            }
        }
        if (vr.empty()) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
        vr.clear();

    }
    return 0;
}