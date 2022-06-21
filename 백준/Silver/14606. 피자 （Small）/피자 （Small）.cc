#include <iostream>
#include <deque>
#include <string>
#include <map>
#include <vector>
using namespace std;
int dp[11] = { 0,0,1 };

int main() {
	int N;
	cin >> N;
	for (int i = 3; i <= N; i++) {
		dp[i] = dp[i - 1] + (i - 1);
	}
	cout << dp[N] << '\n';
}