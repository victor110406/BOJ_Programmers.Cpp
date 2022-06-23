#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return a * b / gcd(a, b);
}

int main() {
    int N;
    long long a, b;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> a >> b;
        cout << lcm(a, b) << '\n';
    }
    return 0;
}