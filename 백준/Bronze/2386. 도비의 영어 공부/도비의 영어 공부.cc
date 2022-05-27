#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main() {

	string str;
	while (getline(cin,str)) {
		if (str.compare("#") == 0) {
			break;
		}
		int count = 0;
		for (int i = 0; i < str.length(); i++) {
			str[i] = tolower(str[i]);
		}
		for (int i = 2; i < str.length(); i++) {
			if (str[0] == str[i]) {
				count++;
			}
		}
		cout << str[0] << " " << count << endl;
	}
	return 0;
}