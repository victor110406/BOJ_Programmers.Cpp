#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	string str, str1;
	int sum = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> str;
		if (str == "P=NP") {
			cout << "skipped" << endl;
			continue;
		}
		for (int j = 0; j < str.length(); j++) {
			if (str[j] != '+') {
				str1 += str[j];
			}
			else {
				sum += stoi(str1);
				str1 = "";
			}
		}
		cout << sum + stoi(str1) << endl;
		str1 = "";
		sum = 0;
	}

	return 0;
}