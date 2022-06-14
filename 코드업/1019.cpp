#include<iostream>
#include<stdio.h>
using namespace std;

int main() {

	int a;
	int b;
	int c;

	scanf_s("%d.%d.%d", &a, &b, &c);
	printf("%04d.%02d.%02d", a, b, c);

	return 0;
}