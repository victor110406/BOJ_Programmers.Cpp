#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map <int, int> m;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M, data;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> data;
		m[data]++;
	}
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> data;
		cout << m[data] << " ";
	}
	return 0;
}