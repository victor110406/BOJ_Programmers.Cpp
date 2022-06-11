#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;
int main() {

    vector<string>ve, ve1;
    int N, M;
    string str;
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> str;
        ve.push_back(str);
    }
    sort(ve.begin(), ve.end());
    for (int i = 0; i < M; i++) {
        cin >> str;
        if (binary_search(ve.begin(), ve.end(), str)) {
            ve1.push_back(str);
        }
    }
    sort(ve1.begin(), ve1.end());
    cout << ve1.size() << "\n";
    for (int i = 0; i < ve1.size(); i++) {
        cout << ve1[i] << "\n";
    }
    return 0;
}