#include<iostream>
using namespace std;

int main() {

	int a;
	cin >> a;

	a = ((a / 10) + (a % 10) * 10) * 2;

	if (a > 100) {
		a = a % 100;
	}

	if (a > 50) {
		cout << a << endl << "OH MY GOD";
	}
	else {
		cout << a << endl << "GOOD";
	}

	return 0;
}