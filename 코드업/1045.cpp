#include<iostream>
using namespace std;

int main()
{
    long long int a, b;
    cin >> a >> b;
    cout << a + b << endl;
    cout << a - b << endl;
    cout << a * b << endl;
    cout << a / b << endl;
    cout << a % b << endl;
    cout << fixed;
    cout.precision(2);
    cout << float(a) / b;

    return 0;
}