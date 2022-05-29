#include <iostream>
#include <algorithm>

using namespace std;

int size(char* a);
bool desc(char a, char b);

int main() {

    char a[11];
    cin >> a;
    sort(a, a + size(a) ,desc);
    cout << a;

    return 0;
}

int size(char* a) {
    int i = 0, count = 0;
    while (a[i] != '\0') {
        count++;
        i++;
    }
    return count;
}

bool desc(char a, char b) {
    return a > b;
}