#include <iostream>

using namespace std;

int main() {

	int arr[1001], A, B;
	int sum = 0, k = 1;
	cin >> A >> B;
	for (int i = 1; i <= 1000; i++) {
		for (int j = 1; j <= i; j++) {
			arr[k] = i;
			if (k > 1000) {
				break;
			}
			k++;
		}
	}
	for (int i = A; i <= B; i++) {
		sum += arr[i];
	}
	cout << sum;
}
