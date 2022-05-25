#include <iostream>

using namespace std;

int main() {
    long long num, sum = 0;
    char oper;
    cin >> num;
    sum = num;
    while (1)
    {
        cin >> oper;
        if (oper == '=') { 
            cout << sum << '\n'; 
            break; 
        }
        cin >> num;
        if (oper == '+') {
            sum += num;
        }
        else if (oper == '-') {
            sum -= num;
        }
        else if (oper == '*'){
            sum *= num;
        }
        else if (oper == '/') {
            sum /= num;
        }
    }
    return 0;
}