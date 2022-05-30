#include <iostream>

using namespace std;

int a[100001], N, height = 0, cou = 0;

int main(){

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}

	for (int i = N - 1; i >= 0; i--) {
		if (a[i] > height) {
			height = a[i];
			cou++;
		}
	}
	cout << cou;

	return 0;
}