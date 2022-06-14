#include<iostream>
using namespace std;

int main(void)
{
    int a;
    cin >> a;
    if ((a >= 60 && a <= 70) || (a >= 30 && a <= 40)) {
        cout << "win";
    }
    else {
        cout << "lose";
    }

    return 0;
}