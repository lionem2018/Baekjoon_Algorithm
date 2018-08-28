/**
 * 2018/08/28
 * 백준 2292 번 문제: 벌집
 * 언어: C++
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    int num, cnt = 1, data = 1;

    scanf("%d", &num);

    while(true)
    {
        if(num <= data)
        {
            break;
        }

        data += 6 * cnt;
        cnt ++;
    }

    printf("%d", cnt);

    return 0;
}