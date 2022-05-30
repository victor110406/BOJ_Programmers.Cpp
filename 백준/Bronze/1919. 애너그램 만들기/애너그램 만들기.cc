#include<iostream>
#include<string>
using namespace std;

int main() {
	string str;
	string str1;
	cin >> str >> str1;
	int count = 0;

	for (int i = 0; i < str.length(); i++) {
		for (int j = 0; j < str1.length(); j++) {
			if (str1[j] == ' ') {
				continue;
			}
			if (str[i] == str1[j]) {
				str[i] = ' ';
				str1[j] = ' ';
				count += 2;
			}
		}
	}
	cout << str.length() + str1.length() - count;

	return 0;
}