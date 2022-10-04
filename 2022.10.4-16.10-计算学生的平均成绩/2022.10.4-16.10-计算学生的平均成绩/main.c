#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

struct stu {
	int num;
	char *name;
	char sex;
	float score;
};

int main() {
	struct stu boy[5] = {
		{101,"Li Ping", 'M', 45},
		{102,"Zhang Ping", 'M', 62.5},
		{103,"He Fang", 'F', 92.5},
		{104,"Cheng ling", 'F', 87},
		{105,"Wang ming", 'M', 58}
	};

	int c = 0;
	float ave, s = 0;
	for (int i = 0; i < 5; i++) {
		s += boy[i].score;
		if (boy[i].score < 60) {
			c += 1;
		}
	}
	printf("s = %f\n", s);
	ave = s / 5;
	printf("average=%f\ncount=%d\n", ave, c);

	return 0;
}