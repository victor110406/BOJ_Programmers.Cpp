#include<iostream>
#include<string>

using namespace std;

int main() {

	int N;
	cin >> N;
	string* str = new string[N];
	for (int i = 0; i < N; i++) {
		cin >> str[i];
	}

	for (int i = 1; i < N; i++) {
		for (int j = 0; j < str[0].length(); j++) {
			if (str[0][j] != str[i][j]) {
				str[0][j] = '?';
			}
		}
	}
	cout << str[0];
	
	return 0;
}