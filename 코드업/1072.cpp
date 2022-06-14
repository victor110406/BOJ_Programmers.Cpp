#include<iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n;
    reget:
    cin >> m;
    if (n-- != 0) {
        cout << m << endl;
        goto reget;
    }

    return 0;
}