#include <string>
#include <iostream>
using namespace std;

bool solution(string s){
    int pC = 0, yC = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'p' || s[i] == 'P') {
            pC++;
        }
        else if (s[i] == 'y' || s[i] == 'Y') {
            yC++;
        }
    }
    if (pC == yC) {
        return true;
    }
    else {
        return false;
    }
}
