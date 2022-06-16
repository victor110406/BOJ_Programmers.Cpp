#include <iostream>
#include <string>
using namespace std;

int main() {
    long long N, sum = 0;
    string str,str1 = "";
    cin >> N >> str;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            str1 += str[i];
        }
        else {
            if(!str1.empty()){
                sum += stoi(str1);
                str1 = "";
            }
        }
    }
    if (!str1.empty()) {
        sum += stoi(str1);
        str1 = "";
    }
    cout << sum;
    
    return 0;
}