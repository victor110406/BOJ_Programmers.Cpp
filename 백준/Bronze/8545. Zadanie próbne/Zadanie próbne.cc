#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	string str;
	cin >> str;
	int length_s = str.length();
	for (int i = 0; i < length_s / 2; i++) {
		swap(str[i], str[length_s - 1 - i]);
	}
	cout << str;
	return 0;
}