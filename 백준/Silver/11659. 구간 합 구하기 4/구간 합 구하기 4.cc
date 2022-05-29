#include<iostream>
#define SIZE 1000001

using namespace std;

int arr[SIZE];
int sum[SIZE];

int main() {
    
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    int N, M, a, b;
    int ans;
    cin >> N >> M;

    for (int i = 1; i <= N; i++) {
        cin >> arr[i];
        sum[i] = sum[i - 1] + arr[i];
    }

    for (int i = 0; i < M; i++) {
        cin >> a >> b;
        ans = sum[b] - sum[a - 1];
        cout << ans << '\n';
    }

    return 0;
}