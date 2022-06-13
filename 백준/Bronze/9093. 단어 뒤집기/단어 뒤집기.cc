#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	string str,str1;
	vector<char> ve;
	cin >> N;
	getline(cin, str);
	for (int i = 0; i < N; i++) {
		getline(cin, str);
		for (int j = 0; j < str.length(); j++) {
			if (str[j] != ' ') {
				ve.push_back(str[j]);
			}
			else {
				while (!ve.empty()) {
					str1 = str1 + ve.back();
					ve.pop_back();
				}
				str1 = str1 + ' ';
			}
		}
		while (!ve.empty()) {
			str1 = str1 + ve.back();
			ve.pop_back();
		}
		cout << str1 << endl;
		str1 = "";
	}
}