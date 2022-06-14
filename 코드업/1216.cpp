#include<iostream>
using namespace std;

int main(void)
{

    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;

    if ((num2 - num1) > num3) {
        cout << "advertise";
    }
    else if ((num2 - num1) == num3) {
        cout << "does not matter";
    }
    else {
        cout << "do not advertise";
    }
    return 0;
}