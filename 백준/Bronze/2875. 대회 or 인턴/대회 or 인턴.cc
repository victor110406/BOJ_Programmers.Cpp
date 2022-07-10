#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int N, M, K;
	cin >> N >> M >> K;

	int team = min(N / 2, M);
	int alone = N + M - (3 * team);

	K -= alone;

	if (K < 0) { 
		cout << team;
	}
	else {
		cout << team - (K + 2) / 3;
	}

	return 0;
}