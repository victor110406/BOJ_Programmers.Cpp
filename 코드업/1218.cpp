#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a >= b + c || b >= a + c || c >= a + b) {
        cout << "»ï°¢Çü¾Æ´Ô";
    }
    else if (a == b && a == c) {
        cout << "Á¤»ï°¢Çü";
    }
    else if (a == b || b == c || c == a) {
        cout << "ÀÌµîº¯»ï°¢Çü";
    }
    else if (a * a + b * b == c * c) {
        cout << "Á÷°¢»ï°¢Çü";
    }
    else {
        cout << "»ï°¢Çü";
    }

    return 0;
}