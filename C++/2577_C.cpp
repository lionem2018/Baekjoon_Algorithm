/**
 * 2018/08/16
 * 백준 2577 번 문제: 숫자의 개수
 * 언어: C++
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    int aNum, bNum, cNum = 0;
    char result[10] = {0};
    int cnt[10] = {0};

    scanf("%d %d %d", &aNum, &bNum, &cNum);
    sprintf(result, "%d", aNum*bNum*cNum);

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            if(result[j] == i + '0')
            {
                cnt[i] ++;
            }
        }
    }

    for(int i = 0; i < 10; i++)
    {
        printf("%d\n", cnt[i]);
    }

    return 0;
}