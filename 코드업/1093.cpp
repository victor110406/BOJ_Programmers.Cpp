#include<iostream>
using namespace std;

int main() {

    int a[24] = { };
    int n, i, t;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> t;
        a[t] = a[t] + 1;
    }
    for (i = 1; i <= 23; i++) {
        cout << a[i] << " ";
    }

    return 0;
}