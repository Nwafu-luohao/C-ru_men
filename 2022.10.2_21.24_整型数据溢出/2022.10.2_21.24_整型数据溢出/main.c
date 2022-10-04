#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int  a, b;
	// 整数最大值 十六位32767，32位2147483647....
	// 所以该程序运行结果和编译器环境有关
	a = 32767;
	b = a + 1;

	printf("%d, %d\n", a, b);

	return 0;
}