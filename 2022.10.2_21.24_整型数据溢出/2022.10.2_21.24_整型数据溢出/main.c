#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int  a, b;
	// �������ֵ ʮ��λ32767��32λ2147483647....
	// ���Ըó������н���ͱ����������й�
	a = 32767;
	b = a + 1;

	printf("%d, %d\n", a, b);

	return 0;
}