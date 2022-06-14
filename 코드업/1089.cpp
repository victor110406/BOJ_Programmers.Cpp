#include<iostream>
using namespace std;

int main() {

    int a, b, c;
    cin >> a >> b >> c;

    for (int j = 1; j < c; j++) {
        a += b;
    }
    cout << a;


    return 0;
}