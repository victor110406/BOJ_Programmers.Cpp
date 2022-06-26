#include <iostream>
#include <string>
using namespace std;

int main() {
	string S;
	int B, sum = 0;
	cin >> S >> B;
	for (int i = 0; i < S.size(); i++) {	
		if (S[i] >= '0' && S[i] <= '9') {	
			sum = sum * B + (S[i] - 48);		
		}
		else
			sum = sum * B + (S[i] - 65 + 10);	
	}
	cout << sum;

	return 0;
}