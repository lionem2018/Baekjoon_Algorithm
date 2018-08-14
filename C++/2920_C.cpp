/**
 * 2018/08/15
 * 백준 2920 번 문제: 음계
 * 언어: C++
*/

#include <iostream>
#include <cstdio>

#define MIXED -1
#define ASCENDING 0
#define DESCENDING 1

using namespace std;

int main(void)
{
    int numbers[8];
    int num;
    int state;

    for(int i = 0; i < 8; i++)
    {
        scanf("%d", &numbers[i]);
    }

    num = numbers[0];

    if(num == 1)
    {
        state = ASCENDING;
        for(int i = 1; i < 8; i++)
        {
            num++;
            if(numbers[i] != num)
            {
                state = MIXED;
                break;
            }
        }
    }
    else if(num == 8)
    {
        state = DESCENDING;
        for(int i = 1; i < 8; i++)
        {
            num--;
            if(numbers[i] != num)
            {
                state = MIXED;
                break;
            }
        }
    }
    else
    {
        state = MIXED;
    }

    if(state == MIXED)
    {
        printf("mixed");
    }
    else if(state == ASCENDING)
    {
        printf("ascending");
    }
    else
    {
        printf("descending");
    }

    return 0;
}