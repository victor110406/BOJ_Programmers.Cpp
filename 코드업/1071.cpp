#include<iostream>
using namespace std;

int main()
{
    int n;
    comeback:
    cin >> n;
    if (n != 0) {
        cout << n << endl;
        goto comeback;
    }

    return 0;
}