#include<iostream>
using namespace std;

int main(void)
{
    int a, b;
    cin >> a >> b;
    if (a % 2 == 0) {
        cout << "礎熱" << "+";
    }
    else {
        cout << "�汝�" << "+";
    }
    if (b % 2 == 0) {
        cout << "礎熱" << "=";
    }
    else {
        cout << "�汝�" << "=";
    }
    if ((a + b) % 2 == 0) {
        cout << "礎熱";
    }
    else {
        cout << "�汝�";
    }

    return 0;
}