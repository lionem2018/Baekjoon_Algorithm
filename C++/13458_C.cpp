/*
2020/04/06
Baekjoon Online Judge
Problem 13458: 시험 감독
시험장 개수 N, 각 시험장의 응시자 수 A[i], 총감독관이 감시할 수 있는 인원 수 B, 부감독관이 감시할 수 있는 인원 수 C 가 주어질 때, 감독관 수의 최소값을 구하기
(단 총감독관은 한 시험장에 1명만 있을 수 있음)
*/

#include <iostream>

int main(void)
{
    long long N = 1, B, C;
    long long answer = 0;

    scanf("%lld", &N);
    long long A[N];

    for(long long i = 0; i < N; i++)
    {
        scanf("%lld", &A[i]);
    }

    scanf("%lld %lld", &B, &C);

    // printf("%lld %lld %lld\n", N, B, C);

    for(long long i = 0; i < N; i++)
    {
        A[i] -= B;

        // printf("A[%lld]: %lld\n", i, A[i]);
        answer ++;

        if(A[i] > 0)
            A[i] % C > 0? (answer += A[i] / C + 1) : (answer += A[i] / C);
    }

    printf("%lld\n", answer);

    return 0;
}