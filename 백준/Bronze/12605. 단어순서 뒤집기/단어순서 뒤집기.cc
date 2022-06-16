#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    string str, str1, str2;
    cin >> N;
    cin.ignore(1024, '\n');
    for (int i = 0; i < N; i++) {
        getline(cin, str);
        cout << "Case #" << i + 1 << ": ";
        for (int j = 0; j < str.length(); j++) {
            if (str[j] != ' ') {
                str1 += str[j];
            }
            else {
                str2 = str1 + " " + str2;
                str1 = "";
            }
        }
        str2 = str1 + " " + str2;
        cout << str2 << endl;
        str1 = "", str2 = "";
    }
    
    return 0;
}