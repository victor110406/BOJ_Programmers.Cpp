#include <iostream>
#include <string>
using namespace std;
int main() {
    
	int n = 0;
	int cnt = 0;
	while (scanf("%d", &n) != EOF) {
		if (n > 0) {
			cnt++; 
		}
	}
	cout << cnt;

    return 0;
}