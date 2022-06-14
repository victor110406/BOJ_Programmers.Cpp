#include<iostream>
using namespace std;

int main()
{
    int  a, b;
    cin >> a >> b;
    if (a % b == 0 || b % a == 0) {
        int i;
        if (a > b) {
            i = a / b;
            cout << b << "*" << i << "=" << a;
        }
        else {
            i = b / a;
            cout << a << "*" << i << "=" << b;
        }
    }
    else {
        cout << "none";
    }

    return 0;
}