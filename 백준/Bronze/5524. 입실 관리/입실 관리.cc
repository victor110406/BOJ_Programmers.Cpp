#include <iostream>
#include <ctype.h>
using namespace std;

int main() {
    int N;
    string str;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> str;
        for (int i = 0; i < str.length(); i++) {
            str[i] = tolower(str[i]);
        }
        cout << str << endl;
    }
    return 0;
}