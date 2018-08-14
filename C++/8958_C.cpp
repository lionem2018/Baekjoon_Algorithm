/**
 * 2018/08/14
 * 백준 8958 번 문제: OX퀴즈
 * 언어: C++
*/

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

using namespace std;

int main(void)
{
    int num, index = 0;
    char input[80];

    scanf("%d", &num);

    int score[num] = {0};

    while(index < num)
    {
        int stack = 0;
        scanf("%s", input);

        for(int i = 0; i < strlen(input); i++)
        {
            if(input[i] == 'O')
            {
                stack ++;
                score[index] += stack;
            }
            else
            {
                stack = 0;
            }
        }

        index++;
    }

    for(int i = 0; i < num; i++)
    {
        printf("%d\n", score[i]);
    }
    return 0;
}