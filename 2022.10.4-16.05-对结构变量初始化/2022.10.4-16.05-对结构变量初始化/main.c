#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	struct stu
	{
		int num;
		char* name;
		char sex;
		float score;
	}boy2, boy1 = {102,"zhang ping", 'M', 78.5};

	boy2 = boy1;
	printf("NUmber = %d\nName = %s\n", boy2.num, boy2.name);
	printf("Sex = %c\nScore = %.1f\n", boy2.sex, boy2.score);

	return 0;
}