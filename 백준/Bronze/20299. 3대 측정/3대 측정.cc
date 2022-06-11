#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

int main() {
    int N, K, L;
    vector<int> ve;
    int count = 0;
    cin >> N >> K >> L;
    for (int i = 0; i < N; i++) {
        int a, b, c, sum = 0;
        cin >> a >> b >> c;
        sum = a + b + c;
        if (sum >= K && a >= L && b >= L && c >= L) {
            ve.push_back(a);
            ve.push_back(b);
            ve.push_back(c);
            count++;
        }
    }
    cout << count << endl;
    copy(ve.begin(), ve.end(), ostream_iterator<int>(cout," "));

    return 0;
}