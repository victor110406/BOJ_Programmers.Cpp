#include<iostream>
int main() {

    int n, i, j, min;
    int a[10000] = {};

    scanf_s("%d", &n);
    for (i = 1; i <= n; i++) {
        scanf_s("%d", &a[i]);
    }

    min = a[1];

    for (j = 1; j <= n; j++) {
        if (min > a[j]) min = a[j];
    }

    printf("%d", min);

    return 0;
}