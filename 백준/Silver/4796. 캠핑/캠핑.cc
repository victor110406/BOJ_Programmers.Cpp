#include <iostream>
using namespace std;
int main()
{
	int i = 0, L, P, V, result = 0;
	while (cin >> L >> P >> V) {
		if (L == 0)
			break;
		result = min(V % P, L) + (V / P) * L;
		cout << "Case " << ++i << ": " << result << "\n";
	}
	return 0;
}