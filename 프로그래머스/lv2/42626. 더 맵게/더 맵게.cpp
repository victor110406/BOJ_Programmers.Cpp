#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0, first, second;
    priority_queue<int, vector<int>, greater<int> > pq(scoville.begin(), scoville.end());
    while (pq.size() > 1 && pq.top() < K) {
        answer++;
        first = pq.top();
        pq.pop();
        second = pq.top();
        pq.pop();
        pq.push(first + (second * 2));
    }
    if (pq.top() < K) {
        return -1; 
    }
    return answer;
}