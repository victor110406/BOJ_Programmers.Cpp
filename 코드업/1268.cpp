#include<iostream>
using namespace std;

int main() {

	int a, b, sum = 0;
	cin >> a;
	for (int i = 1; i <= a; i++) {
		cin >> b;
		if (b % 2 == 0) {
			sum++;
		}
	}
	cout << sum;

	return 0;
}