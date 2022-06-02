#include <iostream>
#include <string>
using namespace std;

int main() {
		
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int a, b = 0, c, count=0;
		string str;
		cin >> a;
		c = a;
		while (a > 0) {
			b *= 10;
			b += (a % 10);
			a /= 10;
		}
		c += b;
		str = to_string(c);
		for (int j = 0; j < str.length() / 2; j++) {
			if (str[j] != str[str.length() - 1 - j]) {
				cout << "NO" << endl;
				break;
			}
			else {
				count++;
			}
		}
		if (count == str.length() / 2) {
			cout << "YES" << endl;
		}
		
	}
	return 0;
}