#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

	string str, leftLen, rightLen;
	int left, right;
	bool check = false;
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ':') {
			check = true;
		}
		else if (!check) {
			leftLen += str[i];
		}
		else if (check) {
			rightLen += str[i];
		}
	}
	left = stoi(leftLen);
	right = stoi(rightLen);

	int small = min(left, right);

	while (left % small != 0 || right % small != 0) {
		--small;
	}

	cout << left / small << ":" << right / small << endl;
    
	return 0;
}