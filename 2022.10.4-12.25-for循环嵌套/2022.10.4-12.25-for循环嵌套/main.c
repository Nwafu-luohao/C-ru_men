#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int i, j, k;
	printf("i j k\n");
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				printf("%d %d %d\n", i, j, k);
			}
		}
	}

	return 0;
}