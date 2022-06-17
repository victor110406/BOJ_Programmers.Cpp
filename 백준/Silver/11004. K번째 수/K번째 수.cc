#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <iterator>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	vector<int> ve;
	int N, M, result;
	cin >> N >> M;
	for(int i = 0; i < N; i++) {
		cin >> result;
		ve.push_back(result);
	}
	sort(ve.begin(), ve.end());
	cout << ve[M - 1];

	return 0;
}