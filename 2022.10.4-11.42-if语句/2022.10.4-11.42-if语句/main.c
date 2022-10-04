#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int a, b, max;
	printf("\n input two numbers:  ");
	scanf("%d%d", &a, &b);
	max = a;
	if (max < b) {
		max = b;
	 }

	printf("max = %d\n", max);

	return 0;
}