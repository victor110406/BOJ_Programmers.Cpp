#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int max = -1000000, min = 1000000;
	int N, T, M;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> T;
		for (int i = 0; i < T; i++) {
			cin >> M;
			if (M > max) {
				max = M;
			}
			if (M < min) {
				min = M;
			}
		}
		cout << min << " " << max << endl;
		max = -1000001, min = 1000001;
	}
}