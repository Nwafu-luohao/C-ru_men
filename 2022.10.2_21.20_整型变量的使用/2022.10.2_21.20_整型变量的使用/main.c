#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int a, b, c, d;
	unsigned u;
	a = 12;
	b = -24;
	u = 10;
	c = a + u;
	d = b + u;
	printf("a + u = %d, b + u = %d\n", c, d);

	return 0;
}