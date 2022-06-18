#include <iostream>
#include <string>
#include <vector>
#include <iterator>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);
   
    unsigned long long N, temp, result1 = 1, result2 = 1;
    cin >> N;
    if (N == 1) {
        cout << 4;
        return 0;
    }
    else if (N == 2) {
        cout << 6;
        return 0;
    }
    for (int i = 2; i < N + 1; i++) {
        temp = result1 + result2;
        result1 = result2;
        result2 = temp;
    }
    cout << (result2 * 2) + (result1 * 2) << '\n';

    return 0;
}