#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int i = 1, sum = 0;
	do
	{
		sum += i;
		i++;
	} while (i<= 100);
	printf("%d\n", sum);

	return 0;
}