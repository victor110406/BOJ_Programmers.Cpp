#include<iostream>
#include<algorithm>

using namespace std;

int main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	int* pInt = (int*)malloc(sizeof(int) * N);
	for (int i = 0; i < N; ++i) {
		cin >> pInt[i];
	}
	sort(pInt, pInt + N);
	for (int i = 0; i < N; ++i) {
		cout << pInt[i] << '\n';
	}
	return 0;
}