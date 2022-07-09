#include <iostream>
using namespace std;

int main() {

	int N;
	cin >> N;
	int m[1000];
	int max = 0, c = 0;

	for (int i = 0; i < N; i++) {
		cin >> m[i];
	}
	for (int j = 0; j < N; j++) {
		if (m[j] == 0 && c == 0) {
			max++;
			c = 1;
		}
		if (m[j] == 1 && c == 1) {
			max++;
			c = 2;
		}
		if (m[j] == 2 && c == 2) {
			max++;
			c = 0;
		}
	}
	cout << max;
	return 0;
}