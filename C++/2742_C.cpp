/**
 * 2018/08/09
 * 백준 2742 번 문제: 기찍 N
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
        printf("%d\n", i);
    }
    return 0;
}