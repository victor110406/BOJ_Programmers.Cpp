#include <iostream>
using namespace std;

int main() {
    string str;
    int sum = 0;
    cin >> str;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            sum += str[i] - 96;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            sum += str[i] - 38;
        }
    }
    for (int i = 2; i < sum; i++) {
        if (sum % i == 0) {
            cout << "It is not a prime word.";
            exit(0);
        }
    }
    cout << "It is a prime word.";

    return 0;
}