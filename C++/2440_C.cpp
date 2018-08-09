/**
 * 2018/08/09
 * 백준 2440 번 문제: 별찍기-3
 * 언어: C++
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    int num;
    scanf("%d", &num);
    for(int i = num; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}