#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define NUM 3

struct men {
	char name[20];
	char phone[10];
};

int main() {
	struct men man[NUM];
	for (int i = 0; i < NUM; i++) {
		printf("input name:\n");
		gets(man[i].name);
		printf("input phone:\n");
		gets(man[i].phone);
	}

	printf("name\t\t\tphone\n\n");
	for (int i = 0; i < NUM; i++) {
		printf("%s\t\t\t%s\n", man[i].name, man[i].phone);
	}

	return 0;
}