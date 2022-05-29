#include <iostream>

using namespace std;

int main() {

    int month, date, sum = 0;
    int day[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    cin >> month >> date;

    sum += date;
    for (int i = 0; i < month - 1; i++) {
        sum += day[i];
    }

    switch (sum % 7) {
    case 0:
        cout << "SUN";
        break;
    case 1:
        cout << "MON";
        break;
    case 2:
        cout << "TUE";
        break;
    case 3:
        cout << "WED";
        break;
    case 4:
        cout << "THU";
        break;
    case 5:
        cout << "FRI";
        break;
    case 6:
        cout << "SAT";
        break;
    }
}
