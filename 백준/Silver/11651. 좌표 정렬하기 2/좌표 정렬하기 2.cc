#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(pair<int, int>a, pair<int, int>b) {
    if (a.second == b.second) {
        return a.first < b.first;
    }
    else {
        return a.second < b.second;
    }
}

int main() {
    int N, x, y;
    vector<pair<int, int> > ve;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> x >> y;
        ve.push_back(make_pair(x, y));
    }

    sort(ve.begin(), ve.end(), compare);
    for (int i = 0; i < N; i++) {
        cout << ve[i].first << " " << ve[i].second << '\n';
    }

    return 0;
}