#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int C;
        cin >> C;
        cout << C / 25 << " " << C % 25 / 10 << " " << C % 25 % 10 / 5 << " " << C % 25 % 10 % 5 << endl;
    }
    return 0;
}