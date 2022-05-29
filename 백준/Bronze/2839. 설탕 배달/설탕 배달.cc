#include<iostream>

using namespace std;

int main() {
	int n;
	int a = 0;
	cin >> n;

	while (n >= 0) {
		if (n % 5 == 0) {
			a += n / 5;
			cout << a;

			return 0;
		}
		n -= 3;
		a++;
	}
	cout << -1;

	return 0;
}