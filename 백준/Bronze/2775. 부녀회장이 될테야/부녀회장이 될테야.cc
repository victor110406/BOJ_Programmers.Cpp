#include<iostream>
#define SIZE 15

using namespace std;

int main() {
	int t, a, n;
	int arr[SIZE][SIZE] = {};
	for (int i = 0; i < SIZE; i++) {
		arr[0][i] = i;
	}
	for (int i = 1; i < SIZE; i++) {
		for (int j = 1; j < SIZE; j++) {
			arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
		}
	}
	cin >> t;
		
	for(int k = 0; k < t; k++) {
		cin >> a >> n;
		cout << arr[a][n] << '\n';
	}	
	return 0;
}