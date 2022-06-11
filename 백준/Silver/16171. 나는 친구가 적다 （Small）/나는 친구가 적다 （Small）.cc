#include <iostream>
#include <string>
using namespace std;

int main() {
    string str, str1, str2 = "";
    cin >> str >> str1;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
            str2 += str[i];
    }
    if (str2.find(str1) != string::npos) {
        cout << 1;
    }
    else {
        cout << 0;
    }
    return 0;
}