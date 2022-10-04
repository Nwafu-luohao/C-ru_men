#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	long x, y;
	int a, b, c, d;
	x = 5;
	y = 6;
	a = 7;
	b = 8;
	c = x + a;
	d = y + b;

	printf("c = %d, d = %d\n", c, d);
	printf("sizeof(c) = %d, sizeof(d) = %d\n", sizeof(c), sizeof(d));

	return 0;
}
