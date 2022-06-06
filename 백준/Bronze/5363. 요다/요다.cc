#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    string str,str1,str2;
    cin >> N;
    getline(cin, str);
    for (int i = 0; i < N; i++) {
        getline(cin, str);
        int count = 0;
        for (int j = 0; j < str.length(); j++) {
            if (str[j] == ' ') {
                count++;
            }
            if (count == 2) {
                str1.append(str, 0, j);
                str2.append(str, j + 1, str.length());
                break;
            }
        }
        cout << str2 << " " << str1 << endl;
        str1 = "";
        str2 = "";
        
    }

    return 0;
}