#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int N, sq;
	while (cin >> N) {
		if (!N) {
			break;
		}
		int count = 0;
		for (int i = N + 1; i <= 2 * N; i++) {
			sq = sqrt(i);
			if (sq == 1 && i != 1) {
				count++;
				continue;
			}
			if (i % 2) {	
				for (int j = 2; j <= sq; j++) {
					if (!(i % j)) {
						break;
					}
					if (j == sq) {
						count++;
					}
				}
			}
		}
		cout << count << '\n';

	}
	return 0;
}