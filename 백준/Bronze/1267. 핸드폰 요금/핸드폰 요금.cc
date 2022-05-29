#include <iostream>

using namespace std;

int main() {
    int n, call[20], Y = 0, M = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> call[i];
        Y += call[i] / 30 + 1;
        M += call[i] / 60 + 1;
    }
    Y *= 10;
    M *= 15;
    if (Y == M) {
        cout << "Y M " << Y;
    }
    else if (Y > M) {
        cout << "M " << M;
    }
    else {
        cout << "Y " << Y;
    }
}