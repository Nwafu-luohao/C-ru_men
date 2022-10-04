#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

long fac(int n) {
	register long long i, f = 1;
	for (i = 1; i <= n; i++) {
		f *= i;
	}
	return f;
}

int main() {
	for (int i = 0; i <= 10; i++) {
		printf("%d! = %ld\n", i, fac(i));
	}

	return 0;
}