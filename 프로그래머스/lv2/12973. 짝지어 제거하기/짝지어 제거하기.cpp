#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int solution(string s){
    vector<char> ve;
    for (int i = 0; i < s.length(); i++) {
        if (ve.empty() || ve.back() != s[i]) {
            ve.push_back(s[i]);
        }
        else if (ve.back() == s[i]) {
            ve.pop_back();
        } 
    }
    if (ve.empty()) {
        return 1;
    }
    else {
        return 0;
    }
}