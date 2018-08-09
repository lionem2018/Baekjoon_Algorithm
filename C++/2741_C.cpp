/**
 * 2018/08/09
 * 백준 2741 번 문제: N 찍기
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
        printf("%d\n", i);
    }
    return 0;
}