#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	while (getline(cin, str)) {
		char cstr[123] = {};
		int count = 0;
		if (str == "*") {
			break;
		}
		for (int i = 0; i < str.length(); i++) {
			cstr[str[i]]++;
		}
		for (int i = 'a'; i <='z'; i++) {
			if (cstr[i] == 0) {
				cout << 'N' << endl;
				break;
			}
			else {
				count++;
			}
		}
		if (count == 26) {
			cout << 'Y' << endl;
		}

	}
	return 0;
}