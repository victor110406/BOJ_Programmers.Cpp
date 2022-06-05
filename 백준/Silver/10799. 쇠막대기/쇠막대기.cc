#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	stack<char> s;
	string str;
	int count = 0;
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '(') {
			s.push(str[i]);
		}
		else if (str[i] == ')' && str[i - 1] == '(') {
			s.pop();
			count += s.size();
		}
		else {
			count++;
			s.pop();
		}
	}
	cout << count;

	return 0;
}
