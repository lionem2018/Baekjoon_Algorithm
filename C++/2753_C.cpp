/**
 * 2020/01/15
 * 백준 2753 번 문제: 윤년(https://www.acmicpc.net/problem/2753)
 * 언어: C++
*/

#include <iostream>

int main(void)
{

	int year;

	scanf("%d", &year);

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		printf("1");
	else
		printf("0");

	return 0;
}
