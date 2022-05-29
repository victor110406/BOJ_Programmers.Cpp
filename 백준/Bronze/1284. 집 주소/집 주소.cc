#include <iostream>

using namespace std;

int range_s(int a);

int main() {

    int N;
    while (cin >> N) {
        if (N == 0) {
            break;
        }
        if (N < 10) {
            cout << range_s(N % 10) + 2 << '\n';
        }
        else if (N < 100) {
            cout << range_s(N / 10) + range_s(N % 10) + 3 << '\n';
        }
        else if (N < 1000) {
            cout << range_s(N / 100) + range_s((N / 10) % 10) + range_s(N % 10) + 4 << '\n';
        }
        else if (N < 10000) {
            cout << range_s(N / 1000) + range_s((N / 100) % 10) + range_s((N / 10) % 10) + range_s(N % 10) + 5 << '\n';
        }
    }

    return 0;
}

int range_s(int a) {
    switch (a) {
    case 0:
        return 4;
    case 1:
        return 2;
    default:
        return 3;
    }
}