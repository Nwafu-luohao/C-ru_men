#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	char a = 'B';
	char b = 'o', c = 'k';
	putchar(a); 
	putchar(b);
	putchar(b);
	putchar(c);
	putchar('\t');
	putchar(a);
	putchar(b);
	putchar('\n');
	putchar(b);
	putchar(c);

	return 0;
}