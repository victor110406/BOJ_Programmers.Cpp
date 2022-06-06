#include<iostream>
#include<string>
using namespace std;

int main() {
	long long int sum = 0;
	string str, str1;
	cin >> str >> str1;
	for (size_t i = 0; i < str1.length(); i++) {
		for (size_t j = 0; j < str.length(); j++) {
			sum += (str[j] -'0') * (str1[i] - '0');
		}
	}
	cout << sum;
	return 0;
}