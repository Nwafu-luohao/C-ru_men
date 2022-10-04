#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int i = 0;
	int a[10];
	for (int i = 0; i < 10; i++) {
		a[i] = i;
	}
	for (int i = 9; i > -1; i--) {
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}