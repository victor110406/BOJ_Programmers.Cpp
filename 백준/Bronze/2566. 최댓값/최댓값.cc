#include <iostream>
#include <string>
using namespace std;

int main() {
    int a[9][9], max = 0, ai = 0, aj = 0;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> a[i][j];
            if (a[i][j] > max) {
                max = a[i][j];
                ai = i;
                aj = j;
            }
        }
    }
    cout << max << endl << ai + 1 << " " << aj + 1;
    return 0;
}