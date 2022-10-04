#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int A = 13;
int B = -8;

int max(int x, int y) {
	int z;
	z = x > y ? x : y;
	return z;
}
