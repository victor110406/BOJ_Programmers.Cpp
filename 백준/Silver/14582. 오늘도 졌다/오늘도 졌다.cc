#include<iostream>

using namespace std;

int main() {
    int state = 0;
    int jeminis[10] = {}, startlink[10] = {}, jeminScore = 0, stratScore = 0;
    for (int i = 1; i <= 9; i++) { 
        cin >> jeminis[i]; 
    }
    for (int i = 1; i <= 9; i++) { 
        cin >> startlink[i]; 
    }
    for (int i = 1; i <= 9; i++) {
        jeminScore += jeminis[i];
        if (jeminScore > stratScore) { 
            state = 1; 
        }
        stratScore += startlink[i];
        if (jeminScore < stratScore && state == 1) { 
            state = 2;
        }
    }
    if (state == 2) {
        cout << "Yes";
    }
    else { 
        cout << "No"; 
    }
    
    return 0;
}