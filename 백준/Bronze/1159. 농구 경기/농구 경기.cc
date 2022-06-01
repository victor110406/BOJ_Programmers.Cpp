#include <iostream>
#include <string>
using namespace std;

int main() {
	char cstr[123] = {};
	string str, str1;
	int n, count = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str;
		cstr[str[0]]++;
	}
	for (int i = 'a'; i <= 'z'; i++) {
		if (cstr[i] > 4) {
			cout << char(i);
			count++;
		}
	}

	if (count == 0) {
		cout << "PREDAJA" << endl;
	}
	
	return 0;
}
