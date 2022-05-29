#include<iostream>

using namespace std;

int main()
{
    int N, i, cnt = 1;
    cin >> N;
    if (N == 1) {
        cout << "666" << '\n';
        return 0;
    }
    for (i = 667;; i++) {
        int temp = i, check = 0;
        while (temp) {
            if (temp % 1000 == 666) {
                check = 1;
            }
            temp /= 10;
        }
        if (check) {
            cnt++;
            if (cnt == N) {
                break;
            }
        }
    }
    cout << i << '\n';

    return 0;
}
