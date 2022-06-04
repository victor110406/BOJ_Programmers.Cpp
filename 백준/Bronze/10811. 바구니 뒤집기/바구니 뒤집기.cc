#include <iostream>
#include <string>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	int* pInt = new int[N];
	for (int i = 0; i < N; i++) {
		pInt[i] = i + 1;
	}
	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		int count = b - a;
		if (count % 2 == 0) {
			count /= 2;
		}
		else {
			count /= 2;
			count += 1;
		}
		for (int j = 0; j < count; j++) {
			swap(pInt[a - 1 + j], pInt[b - 1 - j]);
		}

	}
	for (int i = 0; i < N; i++) {
		cout << pInt[i] << " ";
	}

	return 0;
}
