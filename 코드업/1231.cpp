#include<iostream>
using namespace std;

int main()
{
    int a, b;
    char Ar;
    cin >> a >> Ar >> b;
    switch (Ar) {
    case '+':
        cout << a + b;
        break;
    case '-':
        cout << a - b;
        break;
    case '*':
        cout << a * b;
        break;
    case '/':
        cout << fixed;
        cout.precision(2);
        cout << float(a) / b;
        break;

    }

    return 0;
}