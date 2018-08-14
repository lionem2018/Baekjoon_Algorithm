/**
 * 2018/08/15
 * 백준 10039 번 문제: 평균 점수
 * 언어: C++
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    int score[5];
    int sum = 0;

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &score[i]);

        if(score[i] < 40)
        {
            score[i] = 40;
        }

        sum += score[i];
    }

    printf("%d", sum/5);
    return 0;
}