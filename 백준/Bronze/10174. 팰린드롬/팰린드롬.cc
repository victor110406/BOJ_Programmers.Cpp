#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main() {

    int N;
    string str;
    cin >> N;
    getline(cin, str);
    while (N--) {
        int count = 0;
        getline(cin, str);
        for (int i = 0; i < str.length(); i++) {
            str[i] = tolower(str[i]);
        }
        for (int i = 0; i < str.length() / 2; i++) {
            if (str[i] != str[str.length() - 1 - i]) {
                cout << "No" << endl;
                break;
            }
            else {
                count++;
            }
        }
        if (count == str.length() / 2) {
            cout << "Yes" << endl;
        }
    }
    return 0;
}
