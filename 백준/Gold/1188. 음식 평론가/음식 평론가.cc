#include <iostream>
using namespace std;

int gcd(int a, int b) {
	while (b != 0) {
		int temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}

int main() {
	int N, M;
	cin >> N >> M;
	cout << M - gcd(N, M) << '\n';
	return 0;
}