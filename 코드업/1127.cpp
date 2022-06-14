#include<iostream>
using namespace std;

int main() {

	float a[3] = {};
	int b[3] = {};

	for (int i = 0; i < 3; i++) {
		cin >> a[i] >> b[i];
	}
	cout << fixed;
	cout.precision(1);
	cout << a[0] * b[0] + a[1] * b[1] + a[2] * b[2];

	return 0;
}