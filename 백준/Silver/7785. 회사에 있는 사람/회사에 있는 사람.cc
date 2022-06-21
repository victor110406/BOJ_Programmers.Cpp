#include <iostream>
#include <deque>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

int main() {
    int N;
    set<string> s;
    string str, str1;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> str >> str1;
        if (str1 == "enter") {
            s.insert(str);
        }
        else {
            s.erase(str);
        }
    }
    
    copy(s.rbegin(), s.rend(), ostream_iterator<string>(cout, "\n"));
    return 0;
}