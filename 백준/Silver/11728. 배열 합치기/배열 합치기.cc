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
	int N, M, a;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> a;
		ve.push_back(a);
	}
	for (int i = 0; i < M; i++) {
		cin >> a;
		ve.push_back(a);
	}
	sort(ve.begin(), ve.end());
	copy(ve.begin(), ve.end(), ostream_iterator<int>(cout, " "));

	return 0;
}