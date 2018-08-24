/**
 * 2018/08/24
 * 백준 1157 번 문제: 단어 공부
 * 언어: C++
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    int cnt[26] = {0};
    char input;
    int max = 0, index;
    bool more = false;

    while((input = getchar())!='\n')
    {
        if(input >= 'a')
            input -= 'a';
        else
            input -= 'A';

        cnt[input] ++;
    }
 
    for(int i = 1; i < 26; i++)
    {
        if(cnt[max] < cnt[i])
            max = i;
    }

    for(int i = 0; i < 26; i++)
    {
        if(cnt[max] == cnt[i] && max != i)
            more = true;
    }

    if(more)
        printf("?");
    else
        printf("%c", max + 'A');

    return 0;
}