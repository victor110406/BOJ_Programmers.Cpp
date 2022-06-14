#include<iostream>
using namespace std;

int main() {

	int c, h;
	scanf_s("C%dH%d", &c, &h);
	printf("%d", c * 12 + h);

	return 0;
}