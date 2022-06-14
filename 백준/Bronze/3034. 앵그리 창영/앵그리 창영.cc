#include <iostream>
#include <string>
using namespace std;

int main(){
	int N, a, b, c;
	cin >> N >> a >> b;
	for (int i = 0; i < N; i++) {
		cin >> c;
		if (a * a + b * b < c * c) {
			cout << "NE" << endl;
		}
		else {
			cout << "DA" << endl;
		}
	}
	return 0;
}