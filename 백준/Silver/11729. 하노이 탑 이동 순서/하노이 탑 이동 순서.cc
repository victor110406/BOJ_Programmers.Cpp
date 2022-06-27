#include<iostream>
using namespace std;

void hanoi(int n, int start, int work, int target) {
	if (n == 1) {
		cout << start << " " <<  target << '\n';
	}
	else {
		hanoi(n - 1, start, target, work);
		cout << start << " " << target << '\n';
		hanoi(n - 1, work, start, target);
	}
}

int main() {
	int N;
	cin >> N;
	cout << (1 << N) - 1 << '\n';
	hanoi(N, 1, 2, 3);
	return 0;
}