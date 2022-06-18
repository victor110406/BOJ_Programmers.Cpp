#include <iostream>
#include <string>
using namespace std;

int main() {
    int count = 0;
    string str;
    while (getline(cin, str)) {
        count++;
    }
    cout << count;
    return 0;
}