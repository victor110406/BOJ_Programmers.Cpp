#include<iostream>
using namespace std;

int main()
{
    char a;
    reload:
    cin >> a;
    cout << a << endl;
    if (a != 'q')goto reload;

    return 0;
}