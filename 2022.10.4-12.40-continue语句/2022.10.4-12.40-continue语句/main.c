#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	char c=14;
	while (c != 13) // ���ǻس���ѭ��
	{
		c = getchar();
		if (c == 0x1b) // ����esc�������������һ��ѭ����
		{
			continue;
		}
		printf("%c\n", c);
	}

	return 0;
}