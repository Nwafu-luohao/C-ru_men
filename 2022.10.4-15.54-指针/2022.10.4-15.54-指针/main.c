#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int a, b;
	int* p1, * p2;
	a = 100;
	b = 10;
	p1 = &a;
	p2 = &b;
	printf("%d, %d\n", a, b);
	printf("%d, %d\n", *p1, *p2);

	return 0;
}