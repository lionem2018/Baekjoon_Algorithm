/**
 * 2018/08/26
 * 백준 5622 번 문제: 다이얼
 * 언어: C++
*/

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

int main(void)
{
    char input[16];
    char numbers[10][4] = {{},{},{'A','B','C'}, {'D','E','F'}, {'G','H','I'}, {'J','K','L'}, {'M','N','O'}, {'P','Q','R','S'},{'T','U','V'},{'W','X','Y','Z'}};
    int time = 0;

    scanf("%s", input);

    for(int i = 0; i < strlen(input); i++)
    {
        for(int j = 2; j < 10; j++)
        {
            for(int k = 0; k < 4; k++)
            {
                if(numbers[j][k] == input[i])
                    time += j + 1;
            }
        }
    }

    printf("%d", time);

    return 0;
}