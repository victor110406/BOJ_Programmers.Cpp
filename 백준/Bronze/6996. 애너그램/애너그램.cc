#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    string str, str1;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> str >> str1;
        cout << str << " & " << str1;
        sort(str.begin(), str.end());
        sort(str1.begin(), str1.end());
        if (str == str1) {
            cout << " are anagrams." << endl;
        }
        else {
            cout << " are NOT anagrams." << endl;
        }
    }
    return 0;
}