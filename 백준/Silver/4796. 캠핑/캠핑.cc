#include <iostream> 
using namespace std;
int main(){
	int i = 0, L, P, V;
	while (cin >> L >> P >> V) {
		if (L == 0)
			break;
		cout << "Case " << ++i << ": " << min(V % P, L) + (V / P) * L << "\n";
	}
	return 0;
}