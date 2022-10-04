#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int a, b, max;
	printf("\n input two numbers:   ");
	scanf("%d%d", &a, &b);
	printf("max=%d", a > b ? a : b);

	return 0;
}