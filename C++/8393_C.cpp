/**
 * 2018/08/10
 * 백준 8393 번 문제: 합
 * 언어: C++
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    int num, sum = 0;

    scanf("%d", &num);

    for(int i = 1; i <= num; i++)
    {
        sum += i;
    }

    printf("%d", sum);
    
    return 0;
}