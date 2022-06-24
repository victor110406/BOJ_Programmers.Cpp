#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N;
    string str = "";
    cin >> N;
    for (int i = 1; i <= N; i++) {
        str += to_string(i);
    }
    cout << str.find(to_string(N)) + 1;
}
