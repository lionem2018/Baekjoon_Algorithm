/**
 * 2018/08/21
 * 백준 10809 번 문제: 알파벳 찾기
 * 언어: C++
*/

#include <iostream>
#include <cstdio>
#include <cstring>

int main(void)
{
    char input[101];
    int output[26];

    scanf("%s", input);

    for(int i = 0; i < 26; i++)
    {
        output[i] = -1;
    }

    for(int i = 0; i < strlen(input); i++)
    {
        if(output[input[i]-'a'] == -1)
            output[input[i]-'a'] = i;
    }

    for(int i = 0; i < 26; i++)
    {
        printf("%d ", output[i]);
    }

    return 0;
}