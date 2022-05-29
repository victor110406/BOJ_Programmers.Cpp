#include <iostream>

using namespace std;

int main()
{
	int N, M, count = 0;
	cin >> N >> M;
	int* pInt = (int*)malloc(sizeof(int) * N);
	for (int i = 0; i < N; i++) {
		cin >> pInt[i];
	}


	int weight = 0;
	if (pInt[0] > 0) {
		count++;
	}

	for (int i = 0; i < N; i++) {
		weight += pInt[i];
		if (weight > M) {
			weight = pInt[i];
			count++;
		}
	}
	
	cout << count;

	free(pInt);

	return 0;
}