#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int N, result, max = 0;
	cin >> N;
	int* pInt = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> result;
		pInt[i] = result;
	}
	for (int i = 0; i < N; i++) {
		int count = 0;
		for (int j = i + 1; j < N; j++) {
			if (pInt[i] > pInt[j]) {
				count++;
			}
			else {
				break;
			}
		}
		if (max < count) {
			max = count;
		}
	}
	cout << max << '\n';
	return 0;
}