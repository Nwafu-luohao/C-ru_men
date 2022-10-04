#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main() {
	static char st1[30] = "My name is ";
	char st2[10];
	printf("input your name:\n");
	gets(st2);
	strcat(st1, st2);
	puts(st1);

	return 0;
}