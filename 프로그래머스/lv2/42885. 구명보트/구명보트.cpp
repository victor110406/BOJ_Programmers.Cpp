#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0, front = 0, back = people.size() - 1;
    sort(people.begin(), people.end());  

    while (front <= back) {
        if (people[front] + people[back] <= limit) {
            front++, back--;
        }
        else { 
            back--;
        }
        answer++;
    }
    return answer;
}