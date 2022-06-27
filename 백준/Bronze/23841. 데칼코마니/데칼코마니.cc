#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int N, M;
	string str;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> str;
		int length = str.length();
		for (int j = 0; j < length / 2; j++) {
			if (str[j] != '.' || str[length - 1 - j] != '.') {
				if (str[j] != '.') {
					str[length - 1 - j] = str[j];
				}
				else if (str[length - 1 - j] != '.') {
					str[j] = str[length - 1 - j];
				} 
			}
		}
		cout << str << '\n';
	}
	return 0;
}
