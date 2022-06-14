#include <iostream>
#include <string>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main() {
    vector<int>ve;
    int N, a;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> a;
        ve.push_back(a);
    }
    sort(ve.begin(), ve.end());
    ve.erase(unique(ve.begin(), ve.end()), ve.end());
    copy(ve.begin(), ve.end(), ostream_iterator<int>(cout, " "));
    return 0;
}