#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);
   
	int A, B, V, count;
	cin >> A >> B >> V;

	count = (V - B - 1) / (A - B) + 1;
	
	cout << count;

	return 0;
}
