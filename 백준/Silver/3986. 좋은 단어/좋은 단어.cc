#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string str;
	vector<char> ve;
	int N, count = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> str;
		for (int j = 0; j < str.length(); j++) {
			if (ve.empty() || ve.back() != str[j]) {
				ve.push_back(str[j]);
			}
			else {
				ve.pop_back();
			}
		}
		if (ve.empty()) {
			count++;
		}
		ve.clear();
	}
	cout << count;
	return 0;
}