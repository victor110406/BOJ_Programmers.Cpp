#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, K;
    cin >> N;
    string* str = new string[N];
    for (int i = 0; i < N; i++) {
        cin >> str[i];
    }
    cin >> K;
    if (K == 1) {
        for (int i = 0; i < N; i++) {
            cout << str[i] << endl;
        }
    }
    else if (K == 2) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N / 2; j++) {
                swap(str[i][j], str[i][N - 1 - j]);
            }
        }
        for (int i = 0; i < N; i++) {
            cout << str[i] << endl;;
        }
    }
    else if (K == 3) {
        for (int i = 0; i < N / 2; i++) {
            for (int j = 0; j < N; j++) {
                swap(str[i][j], str[N - 1 - i][j]);
            }
        }
        for (int i = 0; i < N; i++) {
            cout << str[i] << endl;;
        }
    }
    return 0;
}