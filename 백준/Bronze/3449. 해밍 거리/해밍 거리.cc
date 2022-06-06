#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    int T;
    cin >> T;
    while (T--)
    {
        int count = 0;
        cin >> a >> b;
        for (int i = 0; i < a.size(); i++) {
            if (a[i] != b[i]) {
                count++;
            }
        }
        cout << "Hamming distance is " << count << '.' << '\n';
    }
    return 0;
}
