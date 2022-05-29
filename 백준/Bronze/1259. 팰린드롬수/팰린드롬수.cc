#include<iostream>

using namespace std;

int length(char* a);

int main()
{
    char a[6];
    while (cin >> a) {
        int b = 0;
        if (a[0] == '0') {
            break;
        }
        for (int i = 0; i < length(a) / 2; i++) {
            if (a[i] != a[length(a) - (i + 1)]) {
                b++;
            }
        }
        if (b == 0) {
            cout << "yes" << '\n';
        }
        else {
            cout << "no" << '\n';
        }
    }
    
}

int length(char* a) {
    int i = 0;
    int count = 0;
    while (a[i] != '\0') {
        i++;
        count++;
    }
    return count;
}
  