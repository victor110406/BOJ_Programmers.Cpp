#include <iostream>
#include <string>
#include <vector>
#include <iterator>
using namespace std;
string binary(int arr,int n) {
    string str;
    int result = 1;
    for (int i = 0; i < n - 1; i++) {
        result *= 2;
    }
    for (int i = 0; i < n; i++) {
        if (arr >= result) {
            arr -= result;
            result /= 2;
            str += '1';
        }
        else {
            result /= 2;
            str += '0';
        }
    }
    return str;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string>ve, ve1;
    vector<string> answer;
    string str;
    for (int i = 0; i < arr1.size(); i++) {
        ve.push_back(binary(arr1[i], n));
    }
    for (int i = 0; i < arr2.size(); i++) {
        ve1.push_back(binary(arr2[i], n));
    }
    copy(ve.begin(), ve.end(), ostream_iterator<string>(cout, " "));
    copy(ve1.begin(), ve1.end(), ostream_iterator<string>(cout, " "));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (ve[i][j] == '0' && ve1[i][j] == '0') {
                str += " ";
            }
            else {
                str += "#";
            }
        }
        answer.push_back(str);
        str = "";
    }
    return answer;
}
