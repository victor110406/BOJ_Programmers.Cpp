#include<iostream>
using namespace std;

int main() {
    int N, count = 0;
    int x, y;
    int a[100][100] = {};
    cin >> N;
    while (N--) {
        cin >> x >> y;
        for (int i = y; i < y + 10; i++) {
            for (int j = x; j < x + 10; j++) {
                if (!a[i][j]) {
                    count++;
                    a[i][j] = 1;
                }
            }
        }
    }
    cout << count;
    return 0;
}
