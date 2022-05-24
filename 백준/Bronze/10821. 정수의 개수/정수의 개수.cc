#include <iostream>
#include <string.h>

using namespace std;

int main() {

	char str[101] = {};
	int length, count = 0;
	cin >> str;
	length = strlen(str);
	for (int i = 0; i < length; i++) {
		if (str[i] == ',') {
			count++;
		}
	}
	cout << count + 1;

	return 0;
}