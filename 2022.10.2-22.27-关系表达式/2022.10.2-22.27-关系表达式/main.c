#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	char c = 'k';
	int i = 1;
	int j = 2;
	int k = 3;
	float x = 3e+5, y = 0.85;
	printf("%d, %d\n", 'a' + 5 < c, -i - 2 * j >= k + 1); // 1 0
	printf("%d, %d\n", 1 < j < 5, x - 5.25 <= x + y); // 1 1
	printf("%d, %d\n", i + j + k == -2 * j, k == j == i + 5); // 0 0 

	return 0;
}