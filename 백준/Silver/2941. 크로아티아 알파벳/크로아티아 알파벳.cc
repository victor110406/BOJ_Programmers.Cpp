#include<iostream>
#include<string>

using namespace std;

int main() {

	string str;
	cin >> str;
	int sum = 0;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == 'c' && str[i + 1] == '=') {
			i++;
			sum++;
		}
		else if (str[i] == 'c' && str[i + 1] == '-') {
			i++;
			sum++;
		}
		else if (str[i] == 'd' && str[i + 1] == 'z' && str[i + 2] == '=') {
			i += 2;
			sum++;
		}
		else if (str[i] == 'd' && str[i + 1] == '-') {
			i++;
			sum++;
		}
		else if (str[i] == 'l' && str[i + 1] == 'j') {
			i++;
			sum++;
		}
		else if (str[i] == 'n' && str[i + 1] == 'j') {
			i++;
			sum++;
		}
		else if (str[i] == 's' && str[i + 1] == '=') {
			i++;
			sum++;
		}
		else if (str[i] == 'z' && str[i + 1] == '=') {
			i++;
			sum++;
		}
		else {
			sum++;
		}
	}
	cout << sum;

	return 0;
}
