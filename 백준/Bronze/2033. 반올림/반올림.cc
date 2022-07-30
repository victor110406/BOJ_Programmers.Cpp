#include<iostream>
using namespace std;

int main() {
	int result, n, count = 0;	
	cin >> n;
	result = n;
	while (n / 10 > 0) {
		if (n % 10 > 4) {
			n = n + 10;
		}
		n = n / 10;
		count++;
	}
	for (int i = 0; i < count; i++) {
		n = 10 * n;
	}
	cout << n;
	return 0;
}