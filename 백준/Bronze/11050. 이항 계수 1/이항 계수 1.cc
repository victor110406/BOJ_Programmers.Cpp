#include <iostream>

using namespace std;

int factorial(int a);

int main() {
    int N, K, result;
    cin >> N >> K;
    result = factorial(N) / (factorial(K) * factorial(N - K));
    cout << result;
}

int factorial(int a) {
    int sum = 1;
    for (int i = 1; i <= a; i++) {
        sum *= i;
    }
    return sum;
}