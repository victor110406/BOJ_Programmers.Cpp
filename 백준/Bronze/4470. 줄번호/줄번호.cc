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
		getline(cin, str);
		cout << i + 1 << ". " << str << endl;
	}
	return 0;
}