#include<iostream>

using namespace std;

int main() {
    int N, L;
    cin >> N >> L;
    int* pInt = new int[N];
    for (int i = 0; i < N; i++) {
        cin >> pInt[i];
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (pInt[j] != 0) {
                if (pInt[j] <= L) {
                    L++;
                    pInt[j] = 0;
                }
            }
        }
    }
    cout << L;

    delete[] pInt;

    return 0;
}