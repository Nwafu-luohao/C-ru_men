#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define SQ(y) (y)*(y)

int main() {
	int a, sq;
	printf("input a number:  ");
	scanf("%d", &a);
	sq = SQ(a);
	printf("sq = %d\n", sq);

	return 0;
}