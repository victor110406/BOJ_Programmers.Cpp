#include <iostream>
#define SIZE 100

using namespace std;

int main() {
    int N, sum = 0;
    int a[SIZE];
    int b[SIZE];

    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < N; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < N - 1; i++) { 
        for (int j = 0; j < N - 1 - i; j++) {
            if (a[j] < a[j + 1]) {
                swap(a[j], a[j + 1]);
            }
        }
        for (int j = 0; j < N - 1 - i; j++) { 
            if (b[j] > b[j + 1]) {
                swap(b[j], b[j + 1]);
            }
        }
    }
    for (int i = 0; i < N; i++) {
        sum += a[i] * b[i];
    }
    cout << sum;
}