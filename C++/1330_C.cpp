/**
 * 2020/01/15
 * 백준 1330 번 문제: 두 수 비교하기(https://www.acmicpc.net/problem/1330)
 * 언어: C++
*/

#include <iostream>

int main(void)
{
	int A, B;

	scanf_s("%d", &A);
	scanf_s("%d", &B);

	if (A > B)
		printf(">");
	else if (A < B)
		printf("<");
	else
		printf("==");

	return 0;
}
