#include <iostream> 

using namespace std; 

int main() {

	int N, T[1001] = {}, sum = 0, sum1 = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> T[i];
	}
	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < N - 1; j++) {
			if (T[j] > T[j + 1]) {
				swap(T[j], T[j + 1]);
			}
		}
	}

	for (int i = 0; i < N; i++) {
		sum += T[i];
		sum1 += sum;
	}

	cout << sum1;

	return 0;
}