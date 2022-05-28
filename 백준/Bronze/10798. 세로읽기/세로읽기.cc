#include<iostream>
#include<string>

using namespace std;

int main() {

    string str[5];
    size_t max = 0;
    for (int i = 0; i < 5; i++) {
        cin >> str[i];
        if (str[i].length() > max) {
            max = str[i].length();
        }
    }

    for (int i = 0; i < max; i++) {
        for (int j = 0; j < 5; j++) {
            if (str[j].length() <= i) {
                continue;
            }
            cout << str[j][i];
        }
    }
    return 0;
}