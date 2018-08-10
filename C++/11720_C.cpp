/**
 * 2018/08/10
 * 백준 11720 번 문제: 숫자의 합
 * 언어: C++
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    int num;
    int sum = 0;
    int input;

    scanf("%d\n", &num);

    for(int i = 0; i < num; i++)
    {
        input = getchar();
        sum += input - '0';
    }

    printf("%d", sum);

    return 0;
}