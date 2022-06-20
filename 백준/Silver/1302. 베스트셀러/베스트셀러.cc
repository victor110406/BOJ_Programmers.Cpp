#include <iostream>
#include <string>
#include <map>
using namespace std;

int main() {
    int N, result = 0;
    string str;
    cin >> N;
    map<string, int>m;
    for (int i = 0; i < N; i++) {
        cin >> str;
        m[str]++;
    }
    for (auto i = m.begin(); i != m.end(); i++) {
        result = max(result, i->second);
    }
    for (auto i = m.begin(); i != m.end(); i++) {
        if (result == i->second) {
            cout << i->first;
            return 0;
        }
    }
    return 0;
}