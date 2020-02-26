/*
2020/02/26
Baekjoon Online Judge
Problem 2562: 최댓값
9개의 서로 달느 자연수가 주어질 때, 이들 중 최댓값을 찾고 그 최댓값이 몇 번째 수인지를 구하는 프로그램을 작성하시오.
*/

#include <iostream>

int main(void)
{
    int number, max = 0, max_index = 1;
    for(int i = 0; i < 9; i++)
    {
        scanf("%d", &number);

        if(max < number)
        {
            max = number;
            max_index = i + 1;
        }
    }

    printf("%d\n%d\n", max, max_index);

    return 0;
}