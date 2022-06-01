#include <iostream>
#include <string>
using namespace std;

int main() {
	int N, sum = 0;
	string str,str1;
	cin >> N;
	getline(cin, str);
	for (int i = 0; i < N; i++) {
		getline(cin, str);
		for (int j = 0; j < str.length(); j++) {
			if(str[j] != ' '){
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