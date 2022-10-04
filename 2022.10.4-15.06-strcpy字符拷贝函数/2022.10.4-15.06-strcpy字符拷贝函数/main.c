#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main() {
	char st1[15], st2[] = "C Language";
	strcpy(st1, st2);
	puts(st1);
	putchar('\n');

	return 0;
}