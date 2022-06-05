#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<pair<pair<int, int>, pair<int, string>>> student(N);

	for (int i = 0; i < N; i++) {
		cin >> student[i].second.second >> student[i].second.first >> student[i].first.second >> student[i].first.first;
	}
	sort(student.begin(), student.end());
	cout << student[N - 1].second.second << "\n" << student[0].second.second;
	return 0;
}