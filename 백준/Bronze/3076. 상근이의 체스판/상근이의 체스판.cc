#include <iostream>
using namespace std;

int main()
{
	int R, C;
	int A, B;
	cin >> R >> C >> A >> B;
	for (int i = 0; i < R; i++){
		for (int j = 0; j < A; j++){
			for (int k = 0; k < C; k++){
				if ((i + k) % 2 == 0) {
					for (int h = 0; h < B; h++) {
						cout << "X";
					}
				}
				else {
					for (int h = 0; h < B; h++) {
						cout << ".";
					}
				}		
			}
			cout << '\n';
		}
	}
	return 0;
}