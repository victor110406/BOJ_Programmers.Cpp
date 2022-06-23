#include<iostream>
using namespace std;

int main() {
    int N, a, b, c;
    cin >> N;
    if (N == 2) {
        cin >> a >> b;
    }
    else {
        cin >> a >> b >> c;
    }

    for (int i = 1; i <= a; i++) {
        if (a % i == 0 && b % i == 0 && c % i == 0) {
            cout << i << '\n';
        }
    }
}