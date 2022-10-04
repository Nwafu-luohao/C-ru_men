#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int a = 2;
	int b = 4;
	int c = 6;
	int x, y;
	y = (x = a + b), (b + c); // 10
	printf("Y = %d, X = %d\n", y, x); //err: 10 6  right: 6 6 
				// 逗号表达式的优先级最低

	return 0;
}