#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int a = 9;
	int b = 5, c;
	c = a | b;
	printf("a = %d\nb = %d\nc = %d\n", a, b, c);

	return 0;
}