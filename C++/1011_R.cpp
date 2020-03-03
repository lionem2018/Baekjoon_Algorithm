/*
2020/03/03
Baekjoon Online Judge
Problem 1011: Fly me to the Alpha Centauri
x지점부터 정확히 y지점으로 이동하는데 필요한 공간 이동 장치 작동 횟수의 최솟값을 구하는 프로그램을 작성하라.
*/

#include <iostream>
#include <cmath>

int main(void)
{
    int test_num, x, y;

    scanf("%d", &test_num);

    for(int test = 0; test < test_num; test++)
    {
        scanf("%d %d", &x, &y);

        long long i = 1;

        while (i * i <= (y - x))
            i++;

        i--;
            
        long long remaining = (y - x) - (i * i);
        remaining = (long long)ceil((double)remaining / (double)i);

        printf("%d\n", i*2-1 + remaining);
    }
    return 0;
}