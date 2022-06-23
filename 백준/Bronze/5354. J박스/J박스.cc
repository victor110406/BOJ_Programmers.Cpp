#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> M;
        for (int j = 0; j < M; j++) {
            for (int k = 0; k < M; k++) {
                if (j == 0 || j == M - 1) {
                    cout << '#';
                }
                else if (k == 0 || k == M - 1) {
                    cout << '#';
                }
                else {
                    cout << 'J';
                }
            }
            cout << '\n';
        }
        cout << '\n';
    }
    return 0;
}