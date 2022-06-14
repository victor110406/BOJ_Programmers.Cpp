#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a;

    cin >> a;

    for (int i = 0; a[i] != '\0'; i++) {
        cout << "'" << a[i] << "'" << endl;
    }

    return 0;
}