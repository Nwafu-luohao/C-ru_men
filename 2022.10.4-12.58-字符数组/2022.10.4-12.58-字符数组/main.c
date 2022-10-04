#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int i, j;
	char a[][5] = {
		{'B','A','S','I','C'},{'d','B','A','S','E'}
	};
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 5; j++) {
			printf("%c", a[i][j]);
		}
		printf("\n");
	}

	return 0;
}