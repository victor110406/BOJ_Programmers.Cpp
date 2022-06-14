#include<iostream>
using namespace std;

int main(void)
{
    int a, b;
    cin >> a >> b;
    if (a % 2 == 0) {
        cout << "Â¦¼ö" << "+";
    }
    else {
        cout << "È¦¼ö" << "+";
    }
    if (b % 2 == 0) {
        cout << "Â¦¼ö" << "=";
    }
    else {
        cout << "È¦¼ö" << "=";
    }
    if ((a + b) % 2 == 0) {
        cout << "Â¦¼ö";
    }
    else {
        cout << "È¦¼ö";
    }

    return 0;
}