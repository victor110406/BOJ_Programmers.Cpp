#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, M;
	vector<int> ve;
	cin >> N >> M;
	for (int i = 1; i <= M; i++) {
		int result = N * i;
		string str1;
		string str = to_string(result);
		for (int j = str.length() - 1; j >= 0; j--) {
			str1 += str[j];
		}
		result = stoi(str1);
		ve.push_back(result);
	}
	cout << *max_element(ve.begin(), ve.end());

	return 0;
}