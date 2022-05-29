#include<iostream>

using namespace std;

int main() {
	int n, score;
	int max = 0, sum = 0;
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> score;
		sum += score;
		if (score > max) {
			max = score;
		}
	}
	
	cout << float(100.0 * sum / n / max);

	return 0;
}