#include<iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;

    cout << num;
    if (num % 10 == 1) {
        if (num == 11) {
            cout << "th";
        }
        else {
            cout << "st";
        }
    }
    else if (num % 10 == 2) {
        if (num == 12) {
            cout << "th";
        }
        else {
            cout << "nd";
        }
    }
    else if (num % 10 == 3) {
        if (num == 13) {
            cout << "th";
        }
        else {
            cout << "rd";
        }
    }
    else { cout << "th"; }

    return 0;
}