#include <iostream>
#include <string>
using namespace std;

int main() {
		
	string str;
	while (getline(cin, str)) {
		if (str == "#") {
			break;
		}
		int sum = 0;
		for (size_t i = 0; i < str.length(); i++) {
			if (str[i] == ' ') {
				continue;
			}
			sum += (i + 1) * (str[i] - 'A' + 1);
		}
		cout << sum << endl;
	}
	return 0;
}