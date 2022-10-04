#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	int i = 0;
	char c;
	while (1)
	{
		c = '\0'; // 变量赋初值
		while (c != 13&&c!= 27) // 键盘接受字符直到按回车或esc
		{
			c = getchar();
			printf("%c\n", c);
		}
		if (c == 27)  // 判断是否为esc键，如果是则退出循环.
		{
			break;
		}
		i++;
		printf("The No.%d is %c\n", i,c);
	}
	printf("The end");

	return 0;
}