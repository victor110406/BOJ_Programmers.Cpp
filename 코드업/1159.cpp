#include<iostream>
using namespace std;

int main(void)
{
    int a;
    cin >> a;
    if ((a >= 50 && a <= 70) || (a % 6 == 0)) {
        cout << "win";
    }
    else {
        cout << "lose";
    }

    return 0;
}