#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	struct stu {
		int num;
		char* name;
		char sex;
		float score;
	}boy1,boy2;

	boy1.num = 102;
	boy1.name = "zhang ping";
	printf("input sex and score\n");
	scanf("%c %f", &boy1.sex, &boy1.score);
	boy2 = boy1;
	printf("NUmber = %d\nName = %s\n", boy2.num, boy2.name);
	printf("Sex = %d\n Score = %f\n", boy2.sex, boy2.score);

	return 0;
}