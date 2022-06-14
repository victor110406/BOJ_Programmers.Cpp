#include <iostream>
#include <string>
using namespace std;

int main(){
	int N, a, b;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a >> b;
		if (a % b == 0) {
			cout << a / b << endl;
		}
		else {
			cout << a / b + 1 << endl;
		}

	}
}