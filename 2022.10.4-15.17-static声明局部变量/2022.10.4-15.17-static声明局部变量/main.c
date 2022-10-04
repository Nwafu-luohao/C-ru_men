#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int f(int a) {
	auto int b = 10;
	static int c = 3;
	b = b + 1; //11
	c = c + 1; // 4 5 6
	return (a + b + c);
}

int main() {
	int a = 2;
	int i = 0;
	for (int i = 0; i < 3; i++) {	//     17  18 19
		printf("%d ", f(a));         
	}								

	return 0;
}