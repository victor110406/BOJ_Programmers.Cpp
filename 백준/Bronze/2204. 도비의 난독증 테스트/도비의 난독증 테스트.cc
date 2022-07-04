#include<iostream>
#include<ctype.h>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

bool compare(string a, string b) {
    for (int i = 0; i < a.size(); i++) {
        a[i] = tolower(a[i]);
    }

    for (int i = 0; i < b.size(); i++) {
        b[i] = tolower(b[i]);
    }

    if (a.compare(b) > 0) {
        return false;
    }
    return true;
}

int main() {
    int N;
    vector<string> ve;
    while (cin >> N) {
        if (N == 0) {
            break;
        }
        string str;
        for (int i = 0; i < N; i++) {
            cin >> str;
            ve.push_back(str);
        }
        sort(ve.begin(), ve.end(), compare);
        cout << ve[0] << endl;
        ve.clear();
    }
    return 0;
}