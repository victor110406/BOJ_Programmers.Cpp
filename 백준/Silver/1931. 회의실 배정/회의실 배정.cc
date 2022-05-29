#include <iostream>
#include <algorithm>
#define size 100001

using namespace std;

typedef struct Time{
	int start;
	int finish;
}Time;

int compare(Time t1, Time t2) {
	if (t1.finish == t2.finish) 
	{
		return t1.start < t2.start;
	}
	else 
	{
		return t1.finish < t2.finish;
	}
}

int main() {
	int n, count = 0, time = 0;
	Time t[size];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> t[i].start >> t[i].finish;
	}
	sort(begin(t), begin(t) + n, compare);
	for (int i = 0; i < n; i++) {
		if (t[i].start >= time) {
			time = t[i].finish;
			count++;
		}
	}
	cout << count;
}