#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

int main() {
    int N, x;
    vector<int> v;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        cin >> x;
        v.insert(v.begin() + x, i); 
    }
    copy(v.rbegin(), v.rend(), ostream_iterator<int>(cout, " "));
    return 0;
}