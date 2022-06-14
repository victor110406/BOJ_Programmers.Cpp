#include <iostream>
#include <string>
using namespace std;

int main() {
    int count = 1;
    while (true) {
        int a, b; string s;
        cin >> a >> s >> b;
        if (s == "E") {
            break;
        }
        cout << "Case " << count << ": ";
        if (s == "<") {
            if (a < b) {
                cout << "true";
            }
            else {
                cout << "false";
            }
        }
        else if (s == "<=") {
            if (a <= b) {
                cout << "true";
            }
            else {
                cout << "false";
            }
        }
        else if (s == ">") {
            if (a > b) {
                cout << "true";
            }
            else {
                cout << "false";
            }
        }
        else if (s == ">=") {
            if (a >= b) {
                cout << "true";
            }
            else {
                cout << "false";
            }
        }
        else if (s == "==") {
            if (a == b) {
                cout << "true";
            }
            else {
                cout << "false";
            }
        }
        else if (s == "!=") {
            if (a != b) {
                cout << "true";
            }
            else {
                cout << "false";
            }
        }
        cout << '\n';
        count++;
    }
    return 0;
}