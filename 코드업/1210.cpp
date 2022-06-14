#include<iostream>
using namespace std;

int main()
{
    int a, b, sum = 0;
    cin >> a >> b;
    switch (a) {
    case 1:
        sum += 400;
        break;
    case 2:
        sum += 340;
        break;
    case 3:
        sum += 170;
        break;
    case 4:
        sum += 100;
        break;
    case 5:
        sum += 70;
        break;
    }

    switch (b) {
    case 1:
        sum += 400;
        break;
    case 2:
        sum += 340;
        break;
    case 3:
        sum += 170;
        break;
    case 4:
        sum += 100;
        break;
    case 5:
        sum += 70;
        break;
    }

    if (sum > 500) {
        cout << "angry";
    }
    else {
        cout << "no angry";
    }

    return 0;
}