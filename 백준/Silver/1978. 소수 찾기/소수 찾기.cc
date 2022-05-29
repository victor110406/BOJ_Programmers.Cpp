#include <iostream>

using namespace std;

int prime(int x) {
	if (x == 1) {
		return 0;
	}
	if (x == 2) {
		return 1;
	}
	for (int i = 2; i < x; i++) {
		if (x % i == 0) {
			return 0;
		}
	}
	return 1;
}

int main() {
	
	int N, A, conut = 0;
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		cin >> A;
		if (prime(A)) {
			conut++;
		}
	}
	cout << conut << endl;
	
	return 0;
}