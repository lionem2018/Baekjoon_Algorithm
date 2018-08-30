/**
 * 2018/08/30
 * 백준 2750 번 문제: 수 정렬하기
 * 언어: C++
*/

#include <iostream>
#include <cstdio>

using namespace std;

int main(void)
{
    int num, index = 0;
    
    scanf("%d", &num);

    int input[num];

    for(int i = 0; i < num; i++)
    {
        scanf("%d", &input[i]);
    }

    for(int i = 0; i < num-1; i++)
    {
        for(int j = i; j < num; j++)
        {
            if(input[i] > input[j])
            {
                int temp = input[i];
                input[i] = input[j];
                input[j] = temp;
            }
        }
    }

    for(int i = 0; i < num; i++)
    {
        printf("%d\n", input[i]);
    }

    return 0;
}