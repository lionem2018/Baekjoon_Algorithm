/**
 * 2018/08/13
 * 백준 1110 번 문제: 더하기 사이클
 * 언어: C++
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    int input;
    int num, cnt = 0;

    scanf("%d", &input);

    num = input;

    while(1)
    {
        cnt ++;

        int left, right;

        left = num / 10;
        right = num % 10;
        num = (right * 10) + ((left + right) % 10);

        if(num == input)
        {
            break;
        }
    }

    printf("%d", cnt);

    return 0;
}