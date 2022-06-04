#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int a[3];
		for (int j = 0; j < 3; j++) {
			cin >> a[j];
		}
		sort(a, a + 3);
		cout << "Scenario #" << i + 1 << ":" << endl;
		if (a[0] * a[0] + a[1] * a[1] == a[2] * a[2]) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
		cout << endl;
	}

	return 0;
}
