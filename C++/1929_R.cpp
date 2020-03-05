/*
2020/03/05
Baekjoon Online Judge
Problem 1929: 소수 구하기
M이상 N이하의 소수를 모두 출력하는 프로그램을 작성하시오.
*/

#include <iostream>
#include <cmath>

int main(void)
{
    int M, N;
    bool checkNotSosu[1000000] = {false};

    scanf("%d %d", &M, &N);

    checkNotSosu[0] = checkNotSosu[1] = true;

    for(int i = 2; i <= sqrt(N); i++)
    {
        if(checkNotSosu[i])
            continue;
            
        for(int j = i*i; j <= N; j++)
        {
            if(j % i == 0)
                checkNotSosu[j] = true;
        }
    }

    for(int i = M; i <= N; i++)
        if(!checkNotSosu[i])
            printf("%d\n", i);

    return 0;
}