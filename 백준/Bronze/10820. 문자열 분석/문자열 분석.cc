#include<iostream>
#include<string>

using namespace std;

int main() {
  
    string str;
    while (getline(cin, str)) {
        int lower = 0, upper = 0, number = 0, blank = 0;
        for (int i = 0; i < str.length(); i++) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                lower++;
            }
            else if (str[i] >= 'A' && str[i] <= 'Z') {
                upper++;
            }
            else if (str[i] >= '0' && str[i] <= '9') {
                number++;
            }
            else if (str[i] == ' ') {
                blank++;
            }
        }
        cout << lower << " " << upper << " " << number << " " << blank << "\n";
    }
}