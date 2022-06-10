#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <ctype.h>
using namespace std;

int main() {
    
    string str;
    while (getline(cin, str)) {
        if (str == "EOI") {
            break;
        }
        for (int i = 0; i < str.length(); i++) {
            str[i] = tolower(str[i]);
        }
        if (str.find("nemo") != -1) {
            cout << "Found" << endl;
        }
        else {
            cout << "Missing" << endl;
        }
    }
    return 0;
}