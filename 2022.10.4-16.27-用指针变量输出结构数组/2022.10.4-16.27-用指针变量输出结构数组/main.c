#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

struct stu {
	int num;
	char* name;
	char sec;
	float score;
};

int main() {
	struct stu boy[5] = {
		{101, "Zhou Ping", 'M', 45},
		{102, "Zhang Ping", 'M', 62.5},
		{103, "Liu Fing", 'F', 92.5},
		{104, "Cheng Ling", 'F', 87},
		{105, "Wang ming", 'M', 58}
	};
	struct stu* ps;
	printf("No\tName\t\t\tSex\tScore\t\n");
	for (ps = boy; ps <= boy+4; ps++) {
		printf("%d\t%s\t\t%c\t%f\t\n", ps->num, ps->name, ps->sec, ps->score);
	}

	return 0;
}