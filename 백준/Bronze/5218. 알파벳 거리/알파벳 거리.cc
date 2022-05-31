#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	string str;
	cin >> N;
	getline(cin, str);
	for (int i = 0; i < N; i++) {
		getline(cin, str);
		int length = str.find(' ');
		cout << "Distances: ";
		for (int j = 0; j < length; j++) {
			if (str[j + length + 1] - str[j] < 0) {
				cout << (str[j + length + 1] - str[j]) + 26 << " ";
			}
			else {
				cout << str[j + length + 1] - str[j] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}