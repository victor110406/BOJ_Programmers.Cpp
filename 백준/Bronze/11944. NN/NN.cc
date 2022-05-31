#include <iostream>
#include <string>
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	string str;

	for (int i = 0; i < N; i++) {
		str = str + to_string(N);
	}
	if (str.length() > M) {
		cout << str.substr(0, M);
	}
	else {
		cout << str;
	}
	return 0;
}