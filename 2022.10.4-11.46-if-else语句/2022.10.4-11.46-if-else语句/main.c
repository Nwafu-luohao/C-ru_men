#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int a, b;
	printf("input two numbers:  ");
	scanf("%d%d", &a, &b);
	if (a > b) {
		printf("max = %d\n", a);
	}
	else {
		printf("max = %d\n", b);
	}

	return 0;
}