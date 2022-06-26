#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N;
	string str;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> str;
		int sum = 0;
		for (int j = str.length() - 1; j >= 0; j--) {
			if (j % 2 == 1) {
				sum += str[j] - '0';
			}
			else {
				if ((str[j] - '0') * 2 >= 10) {
					int result = (str[j] - '0') * 2;
					int result1 = 0;
					while (result > 0) {
						result1 += result % 10;
						result /= 10;
					}
					sum += result1;
				}
				else {
					sum += (str[j] - '0') * 2;
				}
			}
		}
		if (sum % 10 == 0) {
			cout << 'T' << '\n';
		}
		else {
			cout << 'F' << '\n';
		}
	}
	return 0;
}