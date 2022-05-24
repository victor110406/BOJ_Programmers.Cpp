#include <iostream>

using namespace std;

int ZeroCount(int a) {
	int count = 0;
	if (a == 0) {
		return 1;
	}
	while (a > 0) {
		if (a % 10 == 0) {
			count++;
		}
		a /= 10;
	}
	return count;
}

int main() {

	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int N, M, count = 0;
		cin >> N >> M;
		for (int j = N; j <= M; j++) {
			count += ZeroCount(j);
		}
		cout << count << '\n';
	}

	return 0;
}