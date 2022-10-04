#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main() {
	int k;
	static char st1[15], st2[] = "C Language";
	printf("input a string:\n");
	gets(st1);
	k = strcmp(st1, st2);
	if (k==0)
	{
		printf("st1 = st2\n");
	}
	if (k > 0) {
		printf("st1 > st2\n");
	}
	if (k < 0) {
		printf("st1 < st2\n");
	}

	return 0;
}