#include<iostream>
using namespace std;

int main()
{
    char a;
    cin >> a;

    switch (int(a)) {

    case 65:
        cout << "best!!!";
        break;
    case 66:
        cout << "good!!";
        break;
    case 67:
        cout << "run!";
        break;
    case 68:
        cout << "slowly~";
        break;
    default:
        cout << "what?";
    }

    return 0;
}