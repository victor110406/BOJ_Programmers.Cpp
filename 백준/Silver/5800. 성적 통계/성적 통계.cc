#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){

	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cout << "Class " << i + 1 << endl;
		int A, gap = 0;
		cin >> A;
		int* pInt = new int[A];
		for (int i = 0; i < A; i++) {
			cin >> pInt[i];
		}
		sort(pInt, pInt+A);
		cout << "Max " << pInt[A - 1] << ", Min " << pInt[0] << ", Largest gap ";
		for (int j = 0; j < A - 1; j++) {
			if (pInt[j + 1] - pInt[j] > gap) {
				gap = pInt[j + 1] - pInt[j];
			}
		}
		cout << gap << endl;
		delete[] pInt;
	}
	return 0;
}