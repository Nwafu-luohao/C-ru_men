#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int i = 8;
	printf("%d\n", ++i); // 9
	printf("%d\n", --i); // 8
	printf("%d\n", i++); // 8
	printf("%d\n", i--); // 9
	printf("%d\n", -i++); // -8
	printf("%d\n", -i--); // -9   // 在函数中也是后置加加

	return 0;
}