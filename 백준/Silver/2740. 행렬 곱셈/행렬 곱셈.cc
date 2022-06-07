#include <iostream>
using namespace std;

int pro[101][101];
int pro1[101][101];
int arr[101][101];

int main()
{
	int N, M, K;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> pro[i][j];
		}
	}
	cin >> M >> K;
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < K; j++) {
			cin >> pro1[i][j];
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < K; j++) {
			for (int k = 0; k < M; k++) {
				arr[i][j] += pro[i][k] * pro1[k][j];
			}
			cout << arr[i][j] << " ";
		}
		cout << '\n';
	}
	return 0;
}