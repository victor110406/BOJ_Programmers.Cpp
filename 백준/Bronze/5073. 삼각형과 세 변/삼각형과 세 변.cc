#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    int a, b, c;
	while (cin >> a >> b >> c) {
		if (a == 0 && b == 0 && c == 0) {
			break;
		}
        int line[3] = { a, b, c };
        sort(line, line + 3);

        if (line[2] >= line[1] + line[0]){
            cout << "Invalid\n";
            continue;

        }
        if (a == b && b == c && c == a){
            cout << "Equilateral\n";
            continue;
        }

        if (a == b || b == c || c == a){
            cout << "Isosceles\n";
            continue;

        }
        cout << "Scalene\n";
    }
    return 0;
}
