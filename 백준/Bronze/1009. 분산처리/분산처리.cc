#include <iostream>

using namespace std;

int square(int a, int b);

int main()
{
    int T;
    cin >> T;
    while (T--) {
        int a, b, sum;
        cin >> a >> b;
        sum = square(a, b);
        if (sum % 10 == 0) {
            cout << 10 << endl;
        }
        else {
            cout << sum % 10 << endl;
        }
    }
    return 0;
}

int square(int a, int b) {
    int sum = 1;
    for (int i = 1; i <= b; i++) {
        sum *= a;
        if (sum > 10) {
            sum %= 10;
        }
    }
    return sum;
}