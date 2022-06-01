#include <iostream>
#include <string>
using namespace std;

int main() {
	string str, str1;
	getline(cin, str);
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
			str1 += str[i];
			i += 2;
		}
		else {
			str1 += str[i];
		}
	}
	cout << str1;
	
	return 0;
}