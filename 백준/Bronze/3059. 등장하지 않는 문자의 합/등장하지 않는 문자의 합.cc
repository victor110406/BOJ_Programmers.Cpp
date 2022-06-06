#include <iostream>
#include<string>
using namespace std;

int main() {
	int N;
	string str;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> str;
		char sp[91] = {};
		int sum = 2015;
		for (int j = 0; j < str.length(); j++) {
			sp[str[j]]++;
		}
		for (int j = 'A'; j <= 'Z'; j++) {
			if (sp[j] != 0) {
				sum -= j;
			}
		}
		cout << sum << endl;
	}
	return 0;
}