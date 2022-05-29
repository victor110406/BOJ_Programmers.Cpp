#include <iostream>

using namespace std;

int length(char* s) {
	int i = 0;
	while (s[i] != 0) {
		i++;
	}
	return i;
}

int main() {
	char s[101];
	cin >> s;
	for (int i = 0; i < length(s); i++) {
		if (s[i] != 'C' && s[i] != 'A' && s[i] != 'M' && s[i] != 'B' && s[i] != 'R' && s[i] != 'I' && s[i] != 'D' && s[i] != 'G' && s[i] != 'E') {
			cout << s[i];
		}
	}
}