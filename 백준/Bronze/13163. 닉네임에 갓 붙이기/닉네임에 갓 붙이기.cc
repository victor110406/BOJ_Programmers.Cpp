#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    string str;
    bool check = true;
    cin >> N;
    cin.ignore(1024, '\n');
    for (int i = 0; i < N; i++) {
        getline(cin, str);
        cout << "god";
        for (int j = str.find(' '); j < str.length(); j++) {
            if (str[j] != ' ') {
                cout << str[j];
            }
        }
        cout << endl;
    }
    return 0;
}