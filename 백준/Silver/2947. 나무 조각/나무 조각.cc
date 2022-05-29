#include <iostream>

using namespace std;

int main() {

	int a[5] = {};
	for (int i = 0; i < 5; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
				for (int j = 0; j < 5; j++) {
					cout << a[j] << " ";
				}
				cout << endl;
			}
		}
		
	}
}