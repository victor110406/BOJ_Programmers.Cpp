#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

    int result, N;
    int a, b, result1 = 0;
    cin >> result >> N;
    for (int i = 0; i < N; i++) {
        cin >> a >> b;
        result1 += a * b;
    }
    if (result == result1) {
        cout << "Yes" << '\n';
    }
    else {
        cout << "No" << '\n';
    } 
}