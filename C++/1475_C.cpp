/**
 * 2018/08/30
 * 백준 1475 번 문제: 방 번호
 * 언어: C++
*/

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(void)
{
    char input[8];
    int cnt[10] = {0};
    int max = -1;

    scanf("%s", input);

    for(int i = 0; i < strlen(input); i++)
    {
        if((input[i] == '6') && (cnt[9] < cnt[6]))
        {
            cnt[9]++;
        }
        else if((input[i] == '9') && (cnt[6] < cnt[9]))
        {
            cnt[6]++;
        }
        else
            cnt[input[i] - '0']++;
    }

    for(int i = 0; i < 10; i++)
    {
        if(cnt[i] > max)
            max = cnt[i];
    }

    printf("%d", max);

    return 0;
}