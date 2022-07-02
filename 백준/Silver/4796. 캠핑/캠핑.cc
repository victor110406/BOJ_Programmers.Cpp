#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){

	int L, P, V;
	int count = 1;
	while (cin >> L >> P >> V) {
		if (L == 0) {
			break;
		}
		cout << "Case " << count << ": ";
		int result = 0;
		int R = V / P;
		int O = V % P;
		result += L * R;
		if (O >= L) {
			result += L;
		}
		else {
			result += O;
		}
		cout << result << '\n';
		count++;
	}
	
	return 0;
}