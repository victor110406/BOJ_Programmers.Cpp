#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	int N, a, sum = 0;
	cin >> N;
	vector<vector<int>> ve(N);
	int* pInt = new int[N];
	int* maxResult = new int[N];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> a;
			ve[i].push_back(a);
			sum += a;
		}
		pInt[i] = sum;
		sum = 0;
	}
	int arrMax = 0;
	for (int i = 0; i < N; i++) {
		int max = 0;
		for (int j = 0; j < 4; j++) {
			for (int k = j + 1; k < 5; k++) {
				if ((pInt[i] - ve[i][j] - ve[i][k]) % 10 > max) {
					max = (pInt[i] - ve[i][j] - ve[i][k]) % 10;
				}
			}
		}
		maxResult[i] = max;
		if (max > arrMax) {
			arrMax = max;
		}
	}
	for (int i = N - 1; i >= 0; i--) {
		if (arrMax == maxResult[i]) {
			cout << i + 1;
			break;
		}
	}
	return 0;
}