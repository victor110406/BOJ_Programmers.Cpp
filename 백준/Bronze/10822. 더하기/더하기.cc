#include <iostream>
#include <string>
using namespace std;

int main() {
	string str, str1;
	int sum = 0;
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ',') {
			sum += stoi(str1);
			str1 = "";
		}
		else {
			str1 += str[i];
		}
	}
	cout << sum + stoi(str1) << endl;;
	return 0;
}