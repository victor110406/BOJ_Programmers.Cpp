#include<stdio.h>
#include<string.h>

int icon(char a) {

	switch (a) {
	case '-':
		return 0;
	case '\\':
		return 1;
	case '(':
		return 2;
	case '@':
		return 3;
	case '?':
		return 4;
	case '>':
		return 5;
	case '&':
		return 6;
	case '%':
		return 7;
	case '/':
		return -1;
	}
	return 0;
}

int main() {

	char oc[9];
	while (scanf("%s", oc, 9)) {
		if (strcmp(oc,"#") == 0) {
			break;
		}
		int sum = 0, o = 1;
		size_t length = strlen(oc);
		for (int i = 1; i < length; i++) {
			o *= 8;
		}
		for (int i = 0; i < length; i++) {
			sum += (icon(oc[i]) * o);
			o /= 8;
		}
		printf("%d\n", sum);
	}

	return 0;
}