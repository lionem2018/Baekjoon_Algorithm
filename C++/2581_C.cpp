/*
2020/03/04
Baekjoon Online Judge
Problem 1978: 소수
자연수 M과 N이 주어질 때 M이상 N이하의 자연수 중 소수인 것을 모두 골라 이들 소수의 합과 최솟값을 찾는 프로그램을 작성하시오.
*/

#include <iostream>

int main(void)
{
    int M, N;
    int min = 10000, sum = 0;
    int checkNotSosuList[10001] = {0};

    scanf("%d", &M);
    scanf("%d", &N);

    checkNotSosuList[0] = checkNotSosuList[1] = 1;

    for(int i = 2; i <= 10000; i++)
    {
        if(checkNotSosuList[i] == 1)
            continue;

        for(int j = i+1; j <= 10000; j++)
        {
            if(j % i == 0)
                checkNotSosuList[j] = 1;
        }      
    }

    for(int i = M; i <= N; i++)
    {
        if(checkNotSosuList[i] == 0)
        {
            sum += i;

            if(min == 10000)
                min = i;
        }
    }

    if(sum == 0)
        printf("-1\n");
    else
        printf("%d\n%d\n", sum, min);
    

    return 0;
}