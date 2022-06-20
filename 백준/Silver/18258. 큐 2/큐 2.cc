#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    int N, result;
    string str;
    deque<int> de;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> str;
        if (str == "push") {
            cin >> result;
            de.push_back(result);
        }
        else if(str == "pop") {
            if (de.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << de.front() << '\n';
                de.pop_front();
            }
        }
        else if (str == "size") {
            cout << de.size() << '\n';
        }
        else if (str == "empty") {
            if (de.empty()) {
                cout << 1 << '\n';
            }
            else {
                cout << 0 << '\n';
            }
        }
        else if (str == "front") {
            if (de.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << de.front() << '\n';
            }
        }
        else if (str == "back") {
            if (de.empty()) {
                cout << -1 << '\n';
            }
            else {
                cout << de.back() << '\n';
            }
        }
    }
    return 0;
}