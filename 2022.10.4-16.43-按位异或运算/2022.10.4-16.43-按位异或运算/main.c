#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int a = 9;
	int b = 5;
	int c = 0;
	c = a ^ b;
	printf("c = %d\n", c);

	return 0;
}