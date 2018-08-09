/**
 * 2018/08/09
 * 백준 2439 번 문제: 별찍기-2
 * 언어: C++
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    int num;
    scanf("%d", &num);
    for(int i = 1; i <= num; i++)
    {
        for(int j = num - i; j >= 1; j--)
        {
            printf(" ");
        }

        for(int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}