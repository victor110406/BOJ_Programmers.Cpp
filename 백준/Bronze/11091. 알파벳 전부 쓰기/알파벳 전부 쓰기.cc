#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main() {
	int N;
	string str;
	cin >> N;
	getline(cin, str);
	for (int i = 0; i < N; i++) {
		char cstr[123] = {};
		int count = 0;
		getline(cin, str);
		for (int j = 0; j < str.length(); j++) {
			str[j] = tolower(str[j]);
			cstr[str[j]]++;
		}
		for (int j = 'a'; j <= 'z'; j++) {
			if (cstr[j] > 0) {
				count++;
			}
		}
		if (count == 26) {
			cout << "pangram" << endl;
		}
		else {
			cout << "missing ";
			for (int j = 'a'; j <= 'z'; j++) {
				if (cstr[j] == 0)
					cout << char(j);
			}
			cout << endl;
		}
		
	}
	return 0;
}