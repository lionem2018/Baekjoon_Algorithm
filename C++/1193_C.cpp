/**
 * 2018/08/28
 * 백준 1193 번 문제: 분수찾기
 * 언어: C++
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    int num, cnt = 1;
    bool mode = false;

    scanf("%d", &num);

    while(true)
    {
        if(num <= cnt)
        {
            break;
        }
        
        if(mode)
            mode = false;
        else
            mode = true;

        num -= cnt;
        cnt ++;
    }

    if(mode)
    {
        printf("%d/%d", num, cnt+1-num);
    }
    else
    {
        printf("%d/%d", cnt+1-num, num);
    }

    return 0;
}