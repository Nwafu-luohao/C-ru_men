#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#define P printf
#define D "%d\n"
#define F "%f\n"

int main() {
	int a = 5, c = 8, e = 11;
	float b = 3.8, d = 9.7, f = 21.08;
	P(D F, a, b);
	P(D F, c, d);
	P(D F, e, f);

	return 0;
}