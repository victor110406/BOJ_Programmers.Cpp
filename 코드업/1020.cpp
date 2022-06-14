#include<iostream>
using namespace std;

int main() {

	int a;
	int b;

	scanf_s("%d-%d", &a, &b);
	printf("%06d%07d", a, b);

	return 0;
}