#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	unsigned a, b;
	printf("intput a number:   ");
	scanf("%d", &a);
	a = a >> 5;
	b = b & 15;
	printf("a = %d\tb = %d\n", a, b);

	return 0;
}