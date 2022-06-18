#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int N, result;
	vector<int>ve;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> result;
		ve.push_back(result);
	}
	sort(ve.begin(), ve.end());
	copy(ve.begin(), ve.end(), ostream_iterator<int>(cout, "\n"));

	return 0;
}