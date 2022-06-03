#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main() {
	int N;
	string str,str1;
	cin >> N;
	getline(cin, str);
	for (int i = 0; i < N; i++) {
		getline(cin, str);
		str1 = str;
		int g = 0, b = 0;
		for (int j = 0; j < str.length(); j++) {
			str[j] = tolower(str[j]);
			if (str[j] == 'g') {
				g++;
			}
			else if (str[j] == 'b') {
				b++;
			}
		}
		if (g > b) {
			str1 += " is GOOD";
		}
		else if(g < b) {
			str1 += " is A BADDY";
		}
		else {
			str1 += " is NEUTRAL";
		}
		cout << str1 << endl;
	}

	return 0;
}