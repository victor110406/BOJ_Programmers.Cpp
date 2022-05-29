#include<iostream>
#include<string>

using namespace std;

int length_s(string s);

int main() {
	
	string s;
	int zeroCount = 0, oneCount = 0; 
	//0,1의 문자열 횟수와 뒤집는 횟수
	cin >> s;
	int stringLength = length_s(s);
	for (int i = 1; i <= stringLength; i++) {
		if (s[i-1] == '0') {  // s[i]가 0일 경우
			if (s[i-1] == s[i]) {
				continue;
			}
			else {
				zeroCount++;
			}
		}
		else {  // s[i]가 1일 경우
			if (s[i-1] == s[i]) {
				continue;
			}
			else {
				oneCount++;
			}
		}
	}

	if (zeroCount < oneCount) {
		cout << zeroCount;
	}
	else if(zeroCount > oneCount) {
		cout << oneCount;
	}
	else if (zeroCount == 0 && oneCount == 0) {
		cout << 0;
	}
	else {
		cout << zeroCount;
	}

	return 0;

}

int length_s(string s) {
	int i = 0;
	while (s[i] != '\0') {
		i++;
	}
	return i;
}