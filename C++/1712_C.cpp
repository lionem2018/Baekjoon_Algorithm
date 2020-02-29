/*
2020/02/29
Baekjoon Online Judge
Problem 1712: 손익분기점
A(고정비용), B(개당 발생하는 가변비용), C(정가)가 주어졌을 때, 손익분기점을 구하는 프로그램을 작성하시오.
*/

#include <iostream>

int main(void)
{
    long long A, B, C, answer = 0;

    scanf("%lld %lld %lld", &A, &B, &C);

    if(B >= C)
        answer = -1;
    else
    {
        answer = (A / (C-B)) + 1;
    }

    printf("%lld\n", answer);

    return 0;
}