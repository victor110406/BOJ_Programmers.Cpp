#include<iostream>
using namespace std;

int main()
{
    int a[4] = {};
    int num = 0;
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
        if (a[i] == 1) {
            num++;
        }
    }
    switch (num) {
    case 1:
        cout << "µµ";
        break;
    case 2:
        cout << "°³";
        break;
    case 3:
        cout << "°É";
        break;
    case 4:
        cout << "À·";
        break;
    default:
        cout << "¸ð";
        break;
    }

    return 0;
}