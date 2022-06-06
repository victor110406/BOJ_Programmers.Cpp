#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    while (getline(cin, str)) {
        if (str == "***") {
            break;
        }
        for (int i = 0; i < str.length()/2; i++) {
            swap(str[i], str[str.length() - 1 - i]);
        }
        cout << str << endl;
    }
    return 0;
}