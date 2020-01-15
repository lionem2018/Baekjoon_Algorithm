/**
 * 2020/01/15
 * 백준 2588 번 문제: https://www.acmicpc.net/problem/2588
 * 언어: C++
*/

#include <iostream>

using namespace std;

int main(void)
{
	int input1, input2, input2p, remainder;

	scanf_s("%d", &input1);
	scanf_s("%d", &input2);

	input2p = input2;
	while (input2p > 0)
	{
		remainder = input2p % 10;
		input2p = input2p / 10;
		printf("%d %d\n", input2p, remainder);

		printf("%d\n", input1 * remainder);
	}

	printf("%d\n", input1 * input2);
}
