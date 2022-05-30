#include<iostream>

using namespace std;

int main() {

	long long N, P, sum = 1;
	cin >> N >> P;
	for (int i = 1; i <= N; i++) {
		sum *= i;
		sum %= P;
	}
	cout << sum;

	return 0;
}