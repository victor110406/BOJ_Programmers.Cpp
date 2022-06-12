#include <iostream>
using namespace std;

int a[101][101];

int main() {

	int N, M, result;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> result;
			a[i][j] += result;
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}