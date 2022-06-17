#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <map>
#include <set>
#include <iterator>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int L, R;
	cin >> L >> R;
	int sum = 0, t = 2;
	while (1) {
		L *= (double)R / 100;
		if (L <= 5) { 
			break; 
		}
		sum += t * L;
		t *= 2;
	}
	cout << sum;

	return 0;
}