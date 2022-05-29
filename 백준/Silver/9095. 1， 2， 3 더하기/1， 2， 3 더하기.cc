#include<iostream>

using namespace std;

int dp[11] ={1,2,4};

int main() {
	int T, N;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N;
		for (int j = 3; j < N; j++) {
			dp[j] = dp[j - 3] + dp[j - 2] + dp[j - 1];
		}
		cout << dp[N - 1] << '\n';
	}

	return 0;
}