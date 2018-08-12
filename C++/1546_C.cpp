/**
 * 2018/08/12
 * 백준 1546 번 문제: 평균
 * 언어: C++
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    int num;
    double MaxScore = -1;
    double sum = 0;
    scanf("%d", &num);
    double scores[num];

    for(int i = 0; i < num; i++)
    {
        scanf("%lf", &scores[i]);
        
        if(MaxScore < scores[i])
        {
            MaxScore = scores[i];
        }
    }

    for(int i = 0; i < num; i++)
    {
        scores[i] = scores[i] / MaxScore * 100;
        sum += scores[i];
    }

    printf("%.2lf", sum / num);

    return 0;
}