#include<iostream>
using namespace std;

int main() {

	int a[10] = {};
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		cin >> a[i];
		if (a[i] % 5 == 0) {
			cout << a[i];
			break;
		}
		else {
			sum++;
		}
	}
	if (sum == 10) {
		cout << "0";
	}

	return 0;
}