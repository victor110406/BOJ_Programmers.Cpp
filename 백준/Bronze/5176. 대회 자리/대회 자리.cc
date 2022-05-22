#include <iostream>

using namespace std;

int main() {
    int K, P, M, N;
    cin >> K;
    while (K--)
    {
        cin >> P >> M;
        int* a = new int[M];
        for (int i = 0; i < M; i++) {
            a[i] = 0;
        }
        int ans = 0;
        for (int i = 1; i <= P; i++) {
            cin >> N;
            a[N - 1]++;
        }
        for (int i = 0; i < M; i++) {
            if (a[i] > 1)
                ans += a[i] - 1;
        }
        cout << ans << '\n';
    }
}