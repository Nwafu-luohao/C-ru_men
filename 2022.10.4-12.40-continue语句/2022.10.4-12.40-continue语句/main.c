#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	char c=14;
	while (c != 13) // 不是回车则循环
	{
		c = getchar();
		if (c == 0x1b) // 若按esc键不输则进行下一次循环。
		{
			continue;
		}
		printf("%c\n", c);
	}

	return 0;
}