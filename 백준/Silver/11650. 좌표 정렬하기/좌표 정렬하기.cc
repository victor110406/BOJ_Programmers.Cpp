#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<pair<int, int>> coordinate(N);

	for (int i = 0; i < N; i++) {
		cin >> coordinate[i].first >> coordinate[i].second;
	}
	sort(coordinate.begin(), coordinate.end());
	for (int i = 0; i < N; i++) {
		cout << coordinate[i].first << " " << coordinate[i].second << '\n';
	}
	return 0;
}