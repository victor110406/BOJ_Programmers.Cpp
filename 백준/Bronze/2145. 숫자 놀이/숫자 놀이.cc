#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	int N, temp1, temp2;
	while (cin >> N) {
		if (N == 0) {
			break;
		}
		while (N >= 10){
			temp1 = N, temp2 = 0;
			while (temp1 > 0){
				temp2 += temp1 % 10;
				temp1 /= 10;
				}
			N = temp2;
		}
	cout << N << '\n';
	}
	return 0;
}