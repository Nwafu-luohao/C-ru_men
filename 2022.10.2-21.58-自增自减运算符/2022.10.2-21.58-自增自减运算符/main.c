#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int i = 8;
	printf("%d\n", ++i); // 9
	printf("%d\n", --i); // 8
	printf("%d\n", i++); // 8
	printf("%d\n", i--); // 9
	printf("%d\n", -i++); // -8
	printf("%d\n", -i--); // -9   // �ں�����Ҳ�Ǻ��üӼ�

	return 0;
}