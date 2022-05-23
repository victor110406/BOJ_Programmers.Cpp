#include <iostream>
#include <string.h>

using namespace std;

int main() {
	char str[10001];
	int length, JOI = 0, IOI = 0;
	cin >> str;
	length = strlen(str);

	for (int i = 0; i < length; i++) {
		if (str[i] == 'J' && str[i + 1] == 'O' && str[i + 2] == 'I') {
			JOI++;
		}
		if (str[i] == 'I' && str[i + 1] == 'O' && str[i + 2] == 'I') {
			IOI++;
		}
	}
	cout << JOI << '\n' << IOI;

	return 0;
}