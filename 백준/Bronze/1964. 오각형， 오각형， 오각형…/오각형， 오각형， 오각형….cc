#include <iostream>
using namespace std;

int main() {
	int N, up = 7, sum = 5;
	cin >> N;
	for (int i = 1; i < N; i++) {
		sum = (sum + up) % 45678;
		up += 3;
	}
	cout << sum;

	return 0;
}