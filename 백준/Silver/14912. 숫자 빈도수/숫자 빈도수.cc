#include <iostream>
#include <algorithm>
using namespace std;

int count_s = 0;

void numberCheck(int a, int b) {
    while (a > 0) {
        if (a % 10 == b) {
            count_s++;
            a /= 10;
        }
        else {
            a /= 10;
        }
    }
}

int main() {
    int N, M;
    cin >> N >> M;
    for (int i = 1; i <= N; i++) {
        numberCheck(i, M);
    }
    cout << count_s << '\n';
    return 0;
}