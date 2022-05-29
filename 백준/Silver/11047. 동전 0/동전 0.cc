#include <iostream>

using namespace std;

int arr[10];

int main() {
	
	int N, K, c = 0;
	cin >> N >> K;
	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}
	int i = N;
	while (K) {
		while (K - arr[i] >= 0) {
			K -= arr[i];
			c++;
		}
		i--;
	}
	cout << c;
}