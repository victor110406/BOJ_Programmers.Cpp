#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int N, result;
	vector<int> ve;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> result;
		ve.push_back(result);
	}
	sort(ve.begin(), ve.end());
	cout << ve[ve.size() - 1];

	return 0;
}