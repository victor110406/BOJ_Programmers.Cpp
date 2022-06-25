#include <iostream>
#include <string>
using namespace std;

int main() {

    string str, str1;
    int count = 0;
    getline(cin, str);
    getline(cin, str1);
    while (str.find(str1) != string::npos) {
        int a = str.find(str1);
        count++;
        for (int i = 0; i < str1.length(); i++) {
            str[a + i] = ' ';
        }
    }
    cout << count << '\n';

    return 0;
}