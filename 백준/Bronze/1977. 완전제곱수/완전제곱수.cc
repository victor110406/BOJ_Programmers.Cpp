#include<iostream>

using namespace std;

int main() {
	
	int M, N, sum = 0, min = 10000;
	cin >> M >> N;
	
	int i = 1;
	while (1) {
		if (i * i > N) {
			break;
		}
		if (i * i >= M && i * i <= N) {
			if (i * i < min) {
				min = i * i;
			}
			sum += i * i;
		}
		i++;
	}

	if (sum == 0) {
		cout << -1;
	}
	else {
		cout << sum << endl << min;
	}

	return 0;
}