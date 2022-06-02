#include <iostream>
#include <string>
using namespace std;

int main() {
		
	string str,str1;
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> str;
		for (int j = M-1; j >= 0; j--) {
			str1 += str[j];
		}
		cout << str1 << endl;
		str1 = "";
	}
	return 0;
}