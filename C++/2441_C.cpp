/**
 * 2018/08/09
 * 백준 2441 번 문제: 별찍기-4
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
        for(int j = 1; j <= i-1; j++)
        {
            printf(" ");
        }
        for(int j = i; j <= num; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    return 0;
}