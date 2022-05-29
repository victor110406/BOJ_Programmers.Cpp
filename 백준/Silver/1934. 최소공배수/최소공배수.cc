#include<iostream>

using namespace std;

typedef struct lease {
	int A;
	int B;
}lease;

int main() {
	int N;
	lease leas[1000];
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> leas[i].A >> leas[i].B;
		int num = 1;
		int a1 = leas[i].A;	
		int b1 = leas[i].B;
		for (int j = a1; j > 0; j--) {
			if (a1 % j == 0 && b1 % j == 0) {
				num *= j;
				a1 /= j; 
				b1 /= j;
			}
		}
		cout << leas[i].A * leas[i].B / num << endl;
	}
}