#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    int a[3] = { 1,0,0 };
    cin >> str;
    for (int i = 0; i < str.length(); i++)
    {
        switch (str[i])
        {
        case 'A':
            swap(a[0], a[1]);
            break;
        case 'B':
            swap(a[1], a[2]);
            break;
        case 'C':
            swap(a[0], a[2]);
            break;
        }
    }
    for (int i = 0; i < 3; i++) {
        if (a[i] == 1) {
            cout << i + 1 << '\n';
            break;
        }
    }   
    return 0;
}
