#include<iostream>
using namespace std;

int main(void)
{
    int a;
    cin >> a;
    switch (a) {
    case 1:
    case 3:
    case 5:
    case 7:
        cout << "oh my god";
        break;
    case 2:
    case 4:
    case 6:
        cout << "enjoy";
        break;
    }

    return 0;
}