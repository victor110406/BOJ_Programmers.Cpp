#include <iostream>
using namespace std;

int fiboCount = 1;
int fibonacciCount = 0;
int fiboArr[41]={};

int fibo(int N) {
    if (N == 1 || N == 2) {
        return 1;
    }
    else {
        fiboCount++;
        return fibo(N - 1) + fibo(N - 2);
    }
}

int fibonacci(int N) {
    fiboArr[1] = fiboArr[2] = 1;
    for (int i = 3; i <= N; i++) {
        fibonacciCount++;
        fiboArr[i] = fiboArr[i - 1] + fiboArr[i - 2];
    }
    return fiboArr[N];
}

int main() {
    int N;
    cin >> N;
    fibo(N), fibonacci(N);
    cout << fiboCount << '\n' << fibonacciCount;
    return 0;
}