#include <iostream>
#include <string>
using namespace std;

int main() {
		
	string str;
	int happy = 0, sad = 0;
	getline(cin, str);
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ':' && str[i + 1] == '-' && str[i + 2] == ')') {
			happy++;
		}
		else if (str[i] == ':' && str[i + 1] == '-' && str[i + 2] == '(') {
			sad++;
		}
	}
	if (happy == 0 && sad == 0) {
		cout << "none";
	}
	else if(happy == sad) {
		cout << "unsure";
	}
	else if (happy > sad) {
		cout << "happy";
	}
	else if (happy < sad) {
		cout << "sad";
	}

	return 0;
}