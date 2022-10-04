#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define M (y*y + 3*y)

int main() {
	int s = 0, y;
	printf("input a number:  ");
	scanf("%d", &y);
	s = 3* M + 4 * M+ 5 * M;
	printf("s = %d\n", s);

	return 0;
}