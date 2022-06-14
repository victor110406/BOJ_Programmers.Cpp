#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}

int lcd(int a, int b) {
    return a * b / gcd(a, b);
}

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;
        cout << lcd(a, b) << " " << gcd(a, b) << endl;
    }
    return 0;
}