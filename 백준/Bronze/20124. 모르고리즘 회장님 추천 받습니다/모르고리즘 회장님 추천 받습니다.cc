#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<string,int> a , pair<string,int>b) {
    if (a.second == b.second) {
        return a.first < b.first;
    }
    return a.first < b.first;
}

int main() {
    int N, result;
    string str;
    cin >> N;
    vector<pair<string, int>> ve(N);
    for (int i = 0; i < N; i++) {
        cin >> str >> result;
        ve.push_back(pair<string, int>(str, result));
    }
    sort(ve.begin(), ve.end(), compare);
    int max = 0;
    for (int i = 0; i < ve.size(); i++) {
        if (ve[i].second > max) {
            max = ve[i].second;
        }
    }

    for (int i = 0; i < ve.size(); i++) {
        if (ve[i].second == max) {
            cout << ve[i].first << '\n';
            break;
        }
    }
    
    return 0;
}