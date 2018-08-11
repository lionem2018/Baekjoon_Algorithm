/**
 * 2018/08/11
 * 백준 11721 번 문제: 열 개씩 끊어 출력하기
 * 언어: C++
*/

#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main(void)
{
    char input[101] = {0};

    scanf("%s", input);

    for(int i = 0; i < strlen(input); i++)
    {
         if(i % 10 == 0 && i != 0)
            printf("\n");

        printf("%c", input[i]);
    }
    return 0;
}