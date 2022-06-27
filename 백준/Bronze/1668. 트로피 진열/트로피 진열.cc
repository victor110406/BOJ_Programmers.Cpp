#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int N, result;
	int leftStart = 1, rightStart = 1;
	vector<int> ve;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> result;
		ve.push_back(result);
	}
	int leftSize = ve[0], rightSize = ve[ve.size()-1];
	for (int i = 1; i < ve.size(); i++) {
		if (leftSize < ve[i]) {
			leftStart++;
			leftSize = ve[i];
		}
	}

	for (int i = ve.size() - 2; i >= 0; i--) {
		if (rightSize < ve[i]) {
			rightStart++;
			rightSize = ve[i];
		}
	}
	cout << leftStart << '\n' << rightStart;

	return 0;
}