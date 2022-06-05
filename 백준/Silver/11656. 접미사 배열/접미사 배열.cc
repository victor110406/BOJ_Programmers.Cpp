#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	string str;
	cin >> str;
	int length = str.length();
	string* pStr = new string[length];
	for (int i = 0; i < length; i++) {
		pStr[i] = str.substr(i, length);
	}
	sort(pStr, pStr + length);
	for (int i = 0; i < length; i++) {
		cout << pStr[i] << endl;
	}
}