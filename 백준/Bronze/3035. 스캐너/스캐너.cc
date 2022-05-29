#include <iostream>

using namespace std; 

int main() { 
	int R, C, ZR, ZC;
	char array[51][51];

	cin >> R >> C >> ZR >> ZC;

	for (int i = 0; i < R; i++) 
		cin >> array[i];
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < ZR; j++) {
			for (int k = 0; k < C; k++) {
				for (int h = 0; h < ZC; h++) {
					cout << array[i][k];
				}
			} 
			cout << '\n';
		} 
	}
}

