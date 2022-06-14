#include<iostream>
using namespace std;

int main(void)
{
    int a[3] = {};
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
        if (a[i] <= 170) {
            cout << "CRASH";
            break;
        }
    }
    if (a[0] > 170 && a[1] > 170 && a[2] > 170) {
        cout << "PASS";
    }

    return 0;
}