#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int i = 0;
	char c;
	while (1)
	{
		c = '\0'; // ��������ֵ
		while (c != 13&&c!= 27) // ���̽����ַ�ֱ�����س���esc
		{
			c = getchar();
			printf("%c\n", c);
		}
		if (c == 27)  // �ж��Ƿ�Ϊesc������������˳�ѭ��.
		{
			break;
		}
		i++;
		printf("The No.%d is %c\n", i,c);
	}
	printf("The end");

	return 0;
}