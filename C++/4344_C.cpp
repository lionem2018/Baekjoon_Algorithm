/**
 * 2018/08/12
 * 백준 4344 번 문제: 평균은 넘겠지
 * 언어: C++
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    int testNum, index = 0;

    scanf("%d", &testNum);

    double persent[testNum];

    while(index < testNum)
    {
        int num;

        scanf("%d", &num);

        int scores[num];
        int sum = 0, cnt = 0;

        for(int i = 0; i < num; i++)
        {
            scanf("%d", &scores[i]);
            sum += scores[i];
        }

        for(int i = 0; i < num; i++)
        {
            if((double)sum / num < scores[i])
            {
                cnt ++;
            }
        }

        persent[index] = (double)cnt / num;

        index++;
    }

    for(int i = 0; i < testNum; i++)
    {
        printf("%.3lf%%\n", (persent[i] * 100));
    }

    return 0;
}