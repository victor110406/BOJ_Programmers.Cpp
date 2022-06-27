#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>
using namespace std;

int main() {
	int result;
	vector<int>ve;
	while (cin >> result) {
		if (result == 0) {
			break;
		}
		ve.push_back(result);
		int re = result;
		while (result > 9) {
			int sum = 1;
			while (re > 0) {
				sum *= (re % 10);
				re /= 10;
			}
			ve.push_back(sum);
			result = re = sum;
		}
		copy(ve.begin(), ve.end(), ostream_iterator<int>(cout, " "));
		cout << '\n';
		ve.clear();
	}
	return 0;
}