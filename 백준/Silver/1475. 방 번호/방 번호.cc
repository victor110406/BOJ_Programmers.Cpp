#include<iostream>
#include<string>
using namespace std;

int main() {
	char c[10] = {};
	int max = 0;
	string str;
	cin >> str;
	for(int i=0; i<str.length(); i++){
		if (str[i] == '6' || str[i] == '9') {
			c[6]++;
		}
		else {
			c[str[i] - '0']++;
		}
	}
	for (int i = 0; i < 10; i++) {
		if (i == 6 && c[i] % 2 == 0) {
			c[i] /= 2;
		}
		else if(i == 6 && c[i] % 2 == 1) {
			c[i] /= 2;
			c[i] += 1;
		}
		if (c[i] > max) {
			max = c[i];
		}
	}
	cout << max << endl;

	return 0;
}