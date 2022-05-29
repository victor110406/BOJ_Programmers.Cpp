#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M, a, b, sum = 0;
	cin >> N;
	int* pInt = (int*)malloc(sizeof(int) * N);
	int* pCheck = (int*)malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++) {
		cin >> pInt[i];
		sum += pInt[i];
		pCheck[i] = sum;
	}
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> a >> b;
		if (a == 1) {
			cout << pCheck[b - 1] << "\n";
		}
		else {
			cout << pCheck[b - 1] - pCheck[a - 2] << '\n';
		}
	}

	free(pInt);
	free(pCheck);

	return 0;
}