/*
2020/02/26
Baekjoon Online Judge
Problem 10818: 최소, 최대
N개의 정수가 주어진다. 이때, 최솟값과 최댓값을 구하는 프로그램을 작성하시오.
*/

#include <iostream>

int main(void)
{
    int size, number, min = 1000000, max = -1000000;

    scanf("%d", &size);

    for(int i = 0; i < size; i++)
    {
        scanf("%d", &number);

        if(min > number)
            min = number;
        
        if(max < number)
            max = number;
    }

    printf("%d %d\n", min, max);

    return 0;
}