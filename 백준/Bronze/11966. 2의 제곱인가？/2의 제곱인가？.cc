#include <iostream>
using namespace std;

int main() {
    int n, sum = 1;
    cin >> n;
    if (n == 1) {
        cout << 1 << '\n';
        return 0;
    }
    while (sum < n) {
        sum *= 2;
    }
    if (sum == n) {
        cout << 1 << '\n';
    }
    else {
        cout << 0 << '\n';
    }
    return 0;
}