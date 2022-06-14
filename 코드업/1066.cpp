#include<iostream>
using namespace std;

void hol(int a) {
    if (a % 2 == 0) {
        cout << "even" << endl;
    }
    else {
        cout << "odd" << endl;
    }
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    hol(a);
    hol(b);
    hol(c);

    return 0;
}