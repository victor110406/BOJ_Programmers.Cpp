#include <iostream>
using namespace std;

int main() {
    int a[10];
    char b[12];
    int year;
    for (int i = 0; i < 10; i++) {
        a[i] = i;
    }
    for (int i = 0; i < 12; i++) {
        b[i] = i + 65;
    }
    cin >> year;
    cout << b[((year + 8) % 12)] << a[(year + 6) % 10];
}