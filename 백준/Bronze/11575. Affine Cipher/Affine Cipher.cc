#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {
    int N;
    string str;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b >> str;
        for (int i = 0; i < str.length(); i++) {
            if ((a * (str[i] - 'A') + b) > 25) {
                str[i] = (a * (str[i] - 'A') + b) % 26 + 'A';
            }
            else {
                str[i] = (a * (str[i] - 'A') + b) + 'A';
            }
            
        }
        cout << str << endl;
    }
    return 0;
}