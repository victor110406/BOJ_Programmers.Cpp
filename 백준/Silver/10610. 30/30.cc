#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<ctype.h>
using namespace std;

int main() {
    
    string str;
    cin >> str;
    sort(str.begin(), str.end(), greater<>());
    if (str[str.length() - 1] != '0') {
        cout << -1;
    }
    else {
        long long sum = 0;
        for (int i = 0; i < str.length(); i++) {
            sum += (int)(str[i] - '0');
        }
        if (sum % 3 == 0) {
            cout << str;
        }
        else {
            cout << -1;
        }
    }
    return 0;
}