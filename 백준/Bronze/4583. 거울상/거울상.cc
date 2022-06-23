#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

char checkSpli(char a) {
    if (a == 'b') {
        return 'd';
    }
    else if (a == 'd') {
        return 'b';
    }
    else if (a == 'q') {
        return 'p';
    }
    else if (a == 'p') {
        ;
        return 'q';
    }
    else if (a == 'i' || a == 'o' || a == 'v' || a == 'w' || a == 'x') {
        return a;
    }
    else {
        return 'f';
    }

}

int main() {
    string str,str1;
    while (cin >> str) {
        if (str == "#") {
            break;
        }
        int length = str.length();
        for (int i = str.length() -1; i >= 0; i--) {
            if (checkSpli(str[i]) == 'f') {
                cout << "INVALID" << '\n';
                break;
            }
            else{
                str1 += checkSpli(str[i]);
            }
        }
        if (str.length() == str1.length()) {
            cout << str1 << '\n';
        }
        str1 = "";
        
    }
    
    return 0;
}