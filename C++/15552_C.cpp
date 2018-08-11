/**
 * 2018/08/11
 * 백준 15552 번 문제: 빠른 A+B
 * 언어: C++
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    int num;
    scanf("%d", &num);
    int output[num];

    for(int i = 0; i < num; i++)
    {
        int x, y;

        scanf("%d %d", &x, &y);

        output[i] = x + y;

    }

    for(int i = 0; i < num; i++)
    {
        printf("%d\n", output[i]);
    }

    return 0;
}