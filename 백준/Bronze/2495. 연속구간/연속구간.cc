#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    for (int i = 0; i < 3; i++) {
        cin >> str;
        int count = 1, max = 0;
        for (int i = 0; i < str.length() -1; i++) {
            if (str[i] == str[i + 1]) {
                count++;
            }
            else {
                if (max < count) {
                    max = count;
                }
                count = 1;
            }
        }
        if (max < count) {
            max = count;
        }
        cout << max << endl;
    }
    return 0;
}