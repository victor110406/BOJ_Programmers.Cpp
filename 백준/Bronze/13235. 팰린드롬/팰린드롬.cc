#include<iostream>
#include<string.h>

using namespace std;

int main() {

    char a[21] = {};
    cin >> a;
    int len = strlen(a);
    if (len == 1) {
        cout << "true";
        return 0;
    }
    for (int i = 0; i < (len / 2); i++) {
        if (a[i] == a[len - 1 - i]) {
            continue;
        }
        else {
            cout << "false";
            return 0;
        }
    }
    cout << "true";

    return 0;
}