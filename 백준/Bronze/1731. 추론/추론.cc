#include<iostream>

using namespace std;

main() {
	int N, Q[50];	
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> Q[i];
	}
	if (Q[1] - Q[0] == Q[2] - Q[1]) {
		cout << Q[N - 1] + (Q[1] - Q[0]);
	}
	else {
		cout << Q[N - 1] * (Q[1] / Q[0]);
	}
	return 0;
}