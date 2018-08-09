/**
 * 2018/08/09
 * 백준 2739 번 문제: 구구단
 * 언어: C++
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    int num;
    scanf("%d", &num);
    for(int i = 1; i <= 9; i++)
    {
        printf("%d * %d = %d\n", num, i, num*i);
    }
    return 0;
}