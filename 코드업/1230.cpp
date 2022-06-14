#include<iostream>
using namespace std;

int main() {

	int a[3] = {};
	int num = 0;
	for (int i = 0; i < 3; i++) {
		cin >> a[i];
		if (a[i] <= 170) {
			cout << "CRASH" << " " << a[i];
			break;
		}
		else {
			num++;
		}
	}
	if (num == 3) {
		cout << "PASS";
	}

	return 0;
}