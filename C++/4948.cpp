/*
2020/03/09
Baekjoon Online Judge
Problem 4948: 베르트랑 공준
n이 주어졌을 때, n보다 크고, 2n보다 작거나 같은 소수의 개수를 구하는 프로그램을 작성하시오. 
*/

#include<iostream>
#include <cmath>

int main(void)
{
    int N, cnt = 0;
    bool checkNotSosu[123457] = {false};

    checkNotSosu[0] = checkNotSosu[1] = true; 

    for(int i = 2; i < sqrt(123457); i++)
    {
        for(int j = i+1; j < 123457; j++)
        {
            if(j & i == 0)
                checkNotSosu[j] = true;
        }
    }

    scanf("%d", &N);

    while(N != 0)
    {
        cnt = 0;

        for(int j = N+1; j <= 2*N; j++)
            if(!checkNotSosu[j])
                cnt++;

        printf("%d\n", cnt);
        scanf("%d", &N);
    }
    
    return 0;
}