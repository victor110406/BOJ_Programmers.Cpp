#include<iostream>

using namespace std;

int main() {

     unsigned long long int n, sum = 0;
     cin >> n;

     for (unsigned long long int i = 1; i < n; i++) {
         sum += i * (n + 1);
     }
     cout << sum;

	return 0;
}
