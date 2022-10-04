#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main() {
	int k;
	static char st[] = "C Language";
	k = strlen(st);
	printf("The length of the steing is %d\n", k);

	return 0;
}