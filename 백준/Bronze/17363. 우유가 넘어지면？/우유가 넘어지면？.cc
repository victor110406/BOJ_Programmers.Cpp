#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

char check(char a) {
    switch (a) {
    case '.':
    case'O':
        return a;
    case '-':
        return '|';
    case '|':
        return '-';
    case '/':
        return '\\';
    case '\\':
        return '/';
    case '^':
        return '<';
    case '<':
        return 'v';
    case 'v':
        return '>';
    case '>':
        return '^';
    }
    return 'a';
}

int main() {
    int N, M;
    cin >> N >> M;
    string* str = new string[N];
    for (int i = 0; i < N; i++) {
        cin >> str[i];
    }
    for (int i = M - 1; i >= 0; i--) {
        for (int j = 0; j <  N; j++) {
            cout << check(str[j][i]);
        }
        cout << '\n';
    }
    return 0;
}