#include <iostream>
#include <string>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string str;
    getline(cin, str);

    int count = 1;

    if (str.empty())
    {
        cout << "0";
        return 0;
    }

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
            count++;
    }
    if (str[0] == ' ')
        count--;
    if (str[str.length() - 1] == ' ')
        count--;

    cout << count;

    return 0;
}