#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    string str,str1;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int left = 0, rigth = 0;
        cin >> str;
        left += ((str[0] - 'A') * 26 * 26) + ((str[1] - 'A') * 26) + (str[2] - 'A');
        str1.append(str, 4, 8);
        rigth = stoi(str1);
        if (abs(left - rigth) <= 100) {
            cout << "nice" << endl;
        }
        else {
            cout << "not nice" << endl;
        }
        str1 = "";
    }
    return 0;
}
